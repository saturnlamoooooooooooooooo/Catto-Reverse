"""Generate the text-file / popup catalog for the README from the decompiled GML (analysis/gms-datawin/code/gml).
usage: python gen_text_catalog.py <gml_dir> > catalog.md
Everything is parsed from the decompiler output, so strings are verbatim."""
import re, sys, glob, os

sys.stdout.reconfigure(encoding="utf-8")
GML = sys.argv[1]
files = sorted(f for f in glob.glob(os.path.join(GML, "*.gml")) if "GlobalScript" not in os.path.basename(f))

# ---- tiny GML-ish argument splitter (quote / paren aware) ---------------------------------------------------
def find_calls(src, fname):
    out = []
    for m in re.finditer(r"(?<![A-Za-z0-9_])" + re.escape(fname) + r"\(", src):
        i, depth, args, cur, instr = m.end(), 1, [], [], False
        while i < len(src) and depth:
            c = src[i]
            if instr:
                cur.append(c)
                if c == "\\": cur.append(src[i + 1]); i += 1
                elif c == '"': instr = False
            elif c == '"': instr = True; cur.append(c)
            elif c == "(": depth += 1; cur.append(c)
            elif c == ")":
                depth -= 1
                if depth: cur.append(c)
            elif c == "," and depth == 1: args.append("".join(cur).strip()); cur = []
            else: cur.append(c)
            i += 1
        args.append("".join(cur).strip())
        out.append((m.start(), args))
    return out

def unq(expr):
    """Render a GML string expression for humans: literals unescaped, variables as <placeholders>."""
    parts = re.findall(r'"((?:[^"\\]|\\.)*)"|([^+"]+)', expr)
    res = []
    for lit, other in parts:
        if other.strip():                      # a variable / call between the string literals
            o = other.strip(" +")
            res.append({"global.Username": "<USERNAME>", "string(increment)": "<N>"}.get(o, "<" + o + ">"))
        elif other == "":                      # a string literal (possibly empty)
            res.append(lit.replace("\\n", "\n").replace("\\\\", "\\").replace('\\"', '"'))
    return "".join(res)

def code_name(path):
    return os.path.basename(path)[:-4].replace("gml_Object_", "").replace("gml_Room_", "room:").replace("gml_Script_", "script:")

def ev(path):  # (object, event) from file name
    n = code_name(path)
    m = re.match(r"(obj_\w+?)_(Create|Alarm|Step|Draw|Collision|Other|PreCreate|KeyPress|Destroy)_?(.*)$", n)
    return (m.group(1), m.group(2) + ("_" + m.group(3) if m.group(3) else "")) if m else (n, "")

STEPS_NOTE = "steps (÷60 for seconds if the game runs at 60 steps/s)"

writers, notepad, popups, captions = [], [], [], []
for f in files:
    src = open(f, encoding="utf-8", errors="replace").read()
    obj, event = ev(f)
    for pos, a in find_calls(src, "scr_writeTextFile"):
        writers.append(dict(obj=obj, event=event, content=unq(a[0]), name=unq(a[1]), dest="both", pos=pos, src=src, file=f))
    for pos, a in find_calls(src, "scr_writeTextToDir"):
        writers.append(dict(obj=obj, event=event, content=unq(a[0]), name=unq(a[1]), dest=unq(a[2]), pos=pos, src=src, file=f))
    for pos, a in find_calls(src, "shell_execute"):
        notepad.append(dict(obj=obj, event=event, target=unq(a[1]), src=src))
    for fn in ("show_message", "show_message_async", "show_question_async", "get_string_async"):
        for pos, a in find_calls(src, fn):
            popups.append(dict(obj=obj, event=event, fn=fn, text=unq(a[0]), pos=pos, file=f))
    for fn in ("window_set_caption", "widget_set_caption"):
        for pos, a in find_calls(src, fn):
            captions.append(dict(obj=obj, event=event, fn=fn, text=unq(a[0])))

def alarm_delays(path_obj):
    """alarm[n] = steps assignments in an object's events: {(event): [(n, steps)]}"""
    d = {}
    for f in files:
        o, e = ev(f)
        if o != path_obj: continue
        src = open(f, encoding="utf-8", errors="replace").read()
        d[e] = [(int(a), int(b)) for a, b in re.findall(r"alarm\[(\d+)\]\s*=\s*(\d+)", src)]
    return d

# obj_DialogTest looks like a test object by name, but it holds the real "what's the code?" prompt of the story
DEBUG_OBJS = {"obj_test", "obj_example"}

# Desktop writers first, the separate-folder writer (scr_writeTextToDir) last; sort is stable
writers.sort(key=lambda w: w["dest"] != "both")

# ---------------------------------------------------------------------------------------------------------
print("## Appendix A — every text file and marker file the game writes\n")
print("### A.1 Every text file the game writes\n")
print("All `scr_writeTextFile` files are written **twice**: to `%USERPROFILE%\\Desktop\\<name>` and to "
      "`working_directory\\<name>`, which GameMaker redirects into the save folder "
      "(`%LOCALAPPDATA%\\Catto_Boi_Journey\\<name>`, confirmed by a real copy of `DIEDIEDIEDIEDIEDIE.txt` there).\n")
print("| # | File name | Written by (object · event) | Delay set up by that event | Opened in Notepad by |")
print("|--:|---|---|---|---|")
n = 0
for w in writers:
    if w["obj"] in DEBUG_OBJS: continue
    n += 1
    name = w["name"]
    shown = "`" + name + "`"
    if "<N>" in name: shown += " (N = 1…16)"
    if w["dest"] != "both": shown += " → **`" + w["dest"] + "`** (a separate folder, not the Desktop)"
    # alarms scheduled in the same event
    seg = re.findall(r"alarm\[(\d+)\]\s*=\s*(\d+)", w["src"])
    delay = ", ".join("alarm %s = %s" % (a, b) for a, b in seg) or "—"
    # who opens it in Notepad: any shell_execute whose target path ends with the same file name
    key = name.split("<")[0].strip("\\/ ")
    opener = sorted({f"`{x['obj']}` · {x['event']}" for x in notepad if key and key in x["target"]})
    print(f"| {n} | {shown} | `{w['obj']}` · {w['event']} | {delay} | {', '.join(opener) if opener else 'not opened automatically'} |")

print("\n### A.2 Verbatim contents\n")
print("`⏎` marks a line break inside the file; `<USERNAME>` is the Windows `USERNAME` environment variable.\n")
n = 0
for w in writers:
    if w["obj"] in DEBUG_OBJS: continue
    n += 1
    name = w["name"].replace("<increment>", "<N>")
    where = "Desktop + save folder" if w["dest"] == "both" else w["dest"]
    print(f"**{n}. `{name}`** — `{w['obj']}` · {w['event']} → {where}\n")
    print("```text")
    print(w["content"])
    print("```\n")

print("### A.3 Non-`.txt` marker and state files\n")
print("| File | Written by | Content / format | Purpose |")
print("|---|---|---|---|")
print("| `hello.ini` (save folder) | `scr_writeHellStage`, `scr_writeFakeEnd`, `scr_writeTrueEnd` | `[progress]` with `stage`, `fakeEnd`, `theEnd` (reals; GameMaker writes them as `\"1.000000\"`). A key only exists once its writer has run. A missing file is treated as `stage=0 fakeEnd=0 theEnd=0` | progress / ending flags |")
print("| `try.ini` (save folder) | `scr_writeTryCount` (every launch, from `scr_Init`) | `[keep]` / `trying=<n>` | counts launches after the fake ending; at 2 the dream sequence starts |")
print("| `%WINDIR%\\Temp\\catto.cma` | `scr_OneProcess` (at `obj_CloseHandler` creation) | the text `DIENOW` | single-instance lock: if it already exists the game quits at once. Deleted by `scr_ExitGame` and `rm_IMSORRY`. A killed game leaves it behind |")
print("| `%WINDIR%\\Temp\\1.cma`, `%WINDIR%\\Temp\\2.cma` | **nothing in `data.win` creates them** | — | read by `obj_Locked` in `rm_Lock` to draw a `0/2` / `1/2` counter (see Appendix C.1) |")
print("| `C:\\XYZ123\\HELLO\\WELL DONE.txt` | `obj_AfterNug2` · Alarm_1 | `64 65 61 64` | the answer to the stage-4 code prompt |")
print("| `<Temp>\\gm_ttt_<n>\\creep.png` / `spook.png` | the GM8.1 helpers (extracted at start, deleted at exit) | PNG, 165,257 B / 25,849 B | the wallpaper images |")

print("\n### A.4 Debug-only files (not on the story path)\n")
print("`obj_test` (an extension demo; **it is not placed in any room and never created by code, so it cannot run in this build**) "
      "would write `test.txt` containing `Hello World!` through `file_text_open_write` and open it in Notepad; its "
      "`file_text_put` button would write `WinDev.txt` containing the current date/time, and `file_text_get` would read it back "
      "in a dialog. Both would go to the save folder. Listed for completeness only.\n")

print("### A.5 Timing of the noisy sequences\n")
print("Delays come from the `alarm[n] = …` values in the code (steps). Seconds assume 60 steps/s, GameMaker's usual rate; "
      "this build never calls `game_set_speed`, so if it runs at 30 steps/s every time doubles.\n")
print("| Sequence | What happens, in order | Total |")
print("|---|---|---|")
print("| Stage 1 end (`obj_Level4Trigger`) | write `DIEDIE…txt` + play a sound → **+120 steps (2 s)** → Notepad opens it, `stage=1`, process exits | 2 s |")
print("| Stage 2 end (`obj_AfterNug1`) | window hidden **+120 steps (2 s)** → window shown, black overlay **+5 steps** → dialog `DDDD…`, window hidden, **`777.exe` launched**, `punish.txt` written, `stage=2`, exit | ≈2 s + dialog |")
print("| Stage 3 end (`obj_DialogAct3Control3`) | `I AM IMMORTAL.txt` written, window hidden → **+30 steps (0.5 s)** → `stage=3`, Notepad opens it, `illusion.txt` written, exit | 0.5 s |")
print("| Stage 4 end (`obj_AfterNug2`) | window hidden **+120 steps (2 s)** → caption `deja vu?`, window shown **+5 steps** → 5 dialogs, `find me.txt` + `C:\\XYZ123\\HELLO\\WELL DONE.txt` written, `stage=4`, exit | ≈2 s + dialogs |")
print("| Stage 5 end (`obj_Entity` → `obj_DialogSpam`) | `sorry.txt`, `really.txt`, `WHY.txt` written at once → **+240 (4 s)** Notepad `sorry.txt` → **+180 (3 s)** Notepad `really.txt` → **+240 (4 s)** `obj_DialogSpam`: **`999.exe` launched**, Notepad `WHY.txt` **every 30 steps (0.5 s)** → **+600 (10 s)** `no more.txt` written, `stage=5`, exit | ≈21 s, ≈20 Notepad launches at the end |")
print("| File flood (`obj_TextSpam`) | one new `I'MSORRY…<N>.txt` **every 15 steps (0.25 s)**; the object destroys itself at 240 steps | ≈4 s, 15–16 files |")
print("| `obj_Timer` | `keep trying.txt` written → **+600 steps (10 s)** → `scr_ExitGame` | 10 s |")
print("| `obj_Timer2` | `it can't be over can it.txt` written → **+1200 steps (20 s)** → `room_goto(20)` (`rm_Act6Dialog2`) | 20 s |")
print("| NPC `obj_BlackBoi` | `listentome.txt` written when it spawns; when the player touches it → **+120 steps (2 s)** → Notepad opens it | 2 s after touch |")
print("| NPC `obj_BlackBoi2` | `hey.txt` written when it spawns; on touch → **+60 steps (1 s)** → Notepad opens it, `obj_Ending` created | 1 s after touch |")
print("| `rm_Lock` (`obj_Wait`) | **+600 steps (10 s)** → Notepad opens the bundled `readme.txt` from the game folder | 10 s |")
print()

# ---------------------------------------------------------------------------------------------------------
print("\n## Appendix B — every popup and caption shown outside the game\n")
print("Order inside a block is the order of the calls in the code. `show_message` is a blocking OS message box "
      "from `DialogModule.dll`; `*_async` ones return an id and answer in an Async-Dialog event.\n")
byobj = {}
for p in popups:
    if p["obj"] in DEBUG_OBJS: continue
    byobj.setdefault((p["obj"], p["event"]), []).append(p)
for (o, e), items in byobj.items():
    print(f"**`{o}` · {e}**\n")
    for p in items:
        label = {"show_message": "message", "show_message_async": "message (async)", "show_question_async": "yes/no question",
                 "get_string_async": "text prompt"}[p["fn"]]
        print(f"- {label}: “{p['text']}”")
    print()
print("**Window / dialog captions set by the game**\n")
seen = set()
for c in captions:
    if c["obj"] in DEBUG_OBJS: continue
    k = (c["obj"], c["event"], c["text"])
    if k in seen: continue
    seen.add(k)
    kind = "window title" if c["fn"] == "window_set_caption" else "dialog title (DialogModule)"
    t = c["text"] if len(c["text"]) < 70 else c["text"][:40] + "… (" + str(len(c["text"])) + " chars)"
    print(f"- {kind} → “{t}” — `{c['obj']}`" + (f" · {c['event']}" if c["event"] else ""))
print("\n_In addition, `scr_InitMisc` sets the window title by stage (see §3.1) and the main menus print further text "
      "in-game through `scr_Text`, `scr_TextXY`, `scr_TextSmall`, `scr_TextSmallXY` (≈175 call sites); all literals are in "
      "`analysis/gms-datawin/strings.txt`._")
