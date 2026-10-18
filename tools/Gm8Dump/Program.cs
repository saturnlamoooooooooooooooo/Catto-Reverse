using System;
using System.Collections.Generic;
using System.IO;
using System.IO.Compression;
using System.Security.Cryptography;
using System.Text;

// Gm8Dump <game.exe> <outDir>
// Reads a GameMaker 8.1 runner executable into memory, undoes the gamedata protection (as documented by
// OpenGMK's gm8exe reader) and writes scripts, object events, room code, included files and sounds as text.
// The executable is only read, never run.
namespace Gm8Dump;

sealed class Rd
{
    public readonly byte[] B;
    public int P;
    public Rd(byte[] b, int p = 0) { B = b; P = p; }
    public uint U32() { var v = BitConverter.ToUInt32(B, P); P += 4; return v; }
    public int I32() { var v = BitConverter.ToInt32(B, P); P += 4; return v; }
    public double F64() { var v = BitConverter.ToDouble(B, P); P += 8; return v; }
    public byte[] Take(int n) { var a = new byte[n]; Buffer.BlockCopy(B, P, a, 0, n); P += n; return a; }
    public string Pas() { int n = (int)U32(); var s = Encoding.Latin1.GetString(B, P, n); P += n; return s; }
    public bool More => P < B.Length;
}

sealed class Action
{
    public uint LibId, Id, Kind, Exec;
    public int AppliesTo;
    public bool IsCondition, Invert, Relative;
    public string FnName = "", FnCode = "";
    public int ParamCount;
    public string[] Params = new string[8];
}

static class Program
{
    static byte[] Inflate(byte[] z)
    {
        using var ms = new MemoryStream(z);
        using var zs = new ZLibStream(ms, CompressionMode.Decompress);
        using var o = new MemoryStream();
        zs.CopyTo(o);
        return o.ToArray();
    }

    // ---- locating and decrypting the gamedata ------------------------------------------------------------
    static int SeekValue(byte[] d, int pos, uint value)
    {
        // returns the position just past the 8 bytes holding the magic, or -1
        for (; pos + 16 < d.Length; pos++)
        {
            uint d1 = BitConverter.ToUInt32(d, pos), d2 = BitConverter.ToUInt32(d, pos + 4);
            if (((d1 & 0xFF00FF00) | (d2 & 0x00FF00FF)) == value) return pos + 8;
        }
        return -1;
    }

    static uint CrcReflect(uint v, int c)
    {
        uint r = 0;
        for (int i = 1; i <= c; i++) { if ((v & 1) != 0) r |= 1u << (c - i); v >>= 1; }
        return r;
    }

    static int Decrypt81(byte[] d, int c)
    {
        // c = position just past the magic. returns the start of the settings chunk.
        uint hashNum = BitConverter.ToUInt32(d, c);
        uint seed1 = BitConverter.ToUInt32(d, c + 4);
        string key = "_MJD" + hashNum + "#RWK";
        var keyU16 = new List<byte>();
        foreach (char ch in key) { keyU16.Add((byte)ch); keyU16.Add(0); }
        var table = new uint[256];
        for (uint i = 0; i < 256; i++)
        {
            uint v = CrcReflect(i, 8) << 24;
            for (int k = 0; k < 8; k++) v = (v << 1) ^ ((v & 0x80000000) != 0 ? 0x04C11DB7u : 0u);
            table[i] = CrcReflect(v, 32);
        }
        uint seed2 = 0xFFFFFFFF;
        foreach (byte ch in keyU16) seed2 = (seed2 >> 8) ^ table[(byte)((seed2 & 0xFF) ^ ch)];

        int encStart = c + 8 + (int)(seed2 & 0xFF) + 10;
        uint s1 = seed1, s2 = seed2;
        for (int i = encStart; i + 4 <= d.Length; i += 4)
        {
            s1 = (s1 & 0xFFFF) * 0x9069 + (s1 >> 16);
            s2 = (s2 & 0xFFFF) * 0x4650 + (s2 >> 16);
            uint mask = (s1 << 16) + (s2 & 0xFFFF);
            uint v = BitConverter.ToUInt32(d, i) ^ mask;
            d[i] = (byte)v; d[i + 1] = (byte)(v >> 8); d[i + 2] = (byte)(v >> 16); d[i + 3] = (byte)(v >> 24);
        }
        return c + 8 + 20;
    }

    static int FindGameData81(byte[] d)
    {
        // standard runner: loading sequence at 0x226CF3
        if (d.Length >= 0x226D8A)
        {
            byte[] seq = { 0xE8, 0x80, 0xF2, 0xDD, 0xFF, 0xC7, 0x45, 0xF0 };
            bool ok = true;
            for (int i = 0; i < seq.Length; i++) ok &= d[0x226CF3 + i] == seq[i];
            if (ok)
            {
                uint headerStart = BitConverter.ToUInt32(d, 0x226CF3 + 8);
                int cur = 0x226CF3 + 8 + 4 + 125;
                uint? magic = null;
                if (d[cur] == 0x81 && d[cur + 1] == 0x7D && d[cur + 2] == 0xEC && d[cur + 7] == 0x74)
                    magic = BitConverter.ToUInt32(d, cur + 3);
                Console.Error.WriteLine($"  standard GM8.1 loader found; header_start=0x{headerStart:X} magic={(magic.HasValue ? "0x" + magic.Value.ToString("X") : "patched")}");
                int after = magic.HasValue ? SeekValue(d, (int)headerStart, magic.Value) : cur + 3 + 8;
                if (after > 0) return Decrypt81(d, after);
            }
        }
        // last resort: default magic from byte 3,800,004
        int p = SeekValue(d, 3800004, 0xF7140067);
        Console.Error.WriteLine("  using default-header search");
        if (p > 0) return Decrypt81(d, p);
        throw new InvalidDataException("GM8.1 gamedata header not found");
    }

    static void Decrypt80(byte[] d, ref int pos)
    {
        // swap-table layer applied to everything after the DirectX DLL
        int g1 = (int)BitConverter.ToUInt32(d, pos) * 4; pos += 4;
        int g2 = (int)BitConverter.ToUInt32(d, pos) * 4; pos += 4;
        pos += g1;
        var swap = new byte[256]; Buffer.BlockCopy(d, pos, swap, 0, 256); pos += 256;
        pos += g2;
        var rev = new byte[256];
        for (int i = 0; i < 256; i++) rev[swap[i]] = (byte)i;
        int len = (int)BitConverter.ToUInt32(d, pos); pos += 4;
        int start = pos;
        for (int i = start + len; i >= start + 2; i--)
            d[i - 1] = (byte)(rev[d[i - 1]] - (byte)(d[i - 2] + (byte)(i - (start + 1))));
        for (int i = start + len - 1; i >= start; i--)
        {
            int b = Math.Max(i - swap[(i - start) & 0xFF], start);
            (d[i], d[b]) = (d[b], d[i]);
        }
    }

    // ---- asset helpers -----------------------------------------------------------------------------------
    static readonly byte[] EmptyChunk = { 0x78, 0x9C, 0x63, 0x60, 0x60, 0x60, 0x00, 0x00, 0x00, 0x04, 0x00, 0x01 };

    static List<Rd?> AssetList(Rd r)
    {
        int n = (int)r.U32();
        var list = new List<Rd?>(n);
        for (int i = 0; i < n; i++)
        {
            int len = (int)r.U32();
            var chunk = r.Take(len);
            if (chunk.AsSpan().SequenceEqual(EmptyChunk)) { list.Add(null); continue; }
            var data = Inflate(chunk);
            var sub = new Rd(data);
            if (data.Length < 4 || sub.U32() == 0) { list.Add(null); continue; }
            list.Add(sub);
        }
        return list;
    }

    static Action ReadAction(Rd r)
    {
        var a = new Action();
        r.U32(); // version 440
        a.LibId = r.U32();
        a.Id = r.U32();
        a.Kind = r.U32();
        r.U32(); // can_be_relative
        a.IsCondition = r.U32() != 0;
        r.U32(); // applies_to_something
        a.Exec = r.U32();
        a.FnName = r.Pas();
        a.FnCode = r.Pas();
        a.ParamCount = (int)r.U32();
        r.U32(); // 8
        for (int i = 0; i < 8; i++) r.U32(); // param types
        a.AppliesTo = r.I32();
        a.Relative = r.U32() != 0;
        r.U32(); // 8
        for (int i = 0; i < 8; i++) a.Params[i] = r.Pas();
        a.Invert = r.U32() != 0;
        return a;
    }

    static readonly string[] EventKinds = { "Create", "Destroy", "Alarm", "Step", "Collision", "Keyboard", "Mouse", "Other", "Draw", "KeyPress", "KeyRelease", "Trigger" };

    static string SubName(int kind, uint sub, List<string> objNames) => kind switch
    {
        2 => "Alarm " + sub,
        3 => sub switch { 0 => "Step", 1 => "Begin Step", 2 => "End Step", _ => "Step " + sub },
        4 => "with " + (sub < objNames.Count ? objNames[(int)sub] : "#" + sub),
        7 => sub switch
        {
            0 => "Outside Room", 1 => "Intersect Boundary", 2 => "Game Start", 3 => "Game End", 4 => "Room Start",
            5 => "Room End", 6 => "No More Lives", 7 => "Animation End", 8 => "End Of Path", 9 => "No More Health",
            >= 10 and <= 25 => "User " + (sub - 10),
            _ => "Other " + sub
        },
        8 => sub == 0 ? "Draw" : "Draw " + sub,
        5 or 9 or 10 => "key " + sub,
        6 => "mouse " + sub,
        _ => sub.ToString()
    };

    static void DumpActions(StringBuilder o, List<Action> acts, List<string> objNames)
    {
        foreach (var a in acts)
        {
            string target = a.AppliesTo switch { -1 => "self", -2 => "other", -3 => "all", -4 => "noone", >= 0 => a.AppliesTo < objNames.Count ? objNames[a.AppliesTo] : "#" + a.AppliesTo, _ => a.AppliesTo.ToString() };
            if (a.LibId == 1 && a.Id == 603)
            {
                o.AppendLine($"    // action: Execute Code (applies_to={target})");
                foreach (var line in a.Params[0].Replace("\r\n", "\n").Split('\n')) o.AppendLine("    " + line);
            }
            else
            {
                o.Append($"    // action lib={a.LibId} id={a.Id} kind={a.Kind} exec={a.Exec} applies_to={target} cond={a.IsCondition} not={a.Invert} rel={a.Relative}");
                if (a.FnName.Length > 0) o.Append($" fn='{a.FnName}'");
                o.AppendLine();
                for (int i = 0; i < a.ParamCount && i < 8; i++)
                    if (a.Params[i].Length > 0) o.AppendLine($"    //   arg{i} = \"{a.Params[i].Replace("\r", "\\r").Replace("\n", "\\n")}\"");
                if (a.FnCode.Length > 0) { o.AppendLine("    //   fn_code:"); foreach (var l in a.FnCode.Replace("\r\n", "\n").Split('\n')) o.AppendLine("    //     " + l); }
            }
        }
    }

    static string SafeName(string s)
    {
        foreach (char c in Path.GetInvalidFileNameChars()) s = s.Replace(c, '_');
        return s;
    }

    static int Main(string[] args)
    {
        if (args.Length < 2) { Console.Error.WriteLine("usage: Gm8Dump <game.exe> <outDir>"); return 2; }
        var d = File.ReadAllBytes(args[0]);
        string outDir = args[1];
        Directory.CreateDirectory(outDir);
        Console.Error.WriteLine($"{Path.GetFileName(args[0])}: {d.Length:N0} bytes, sha256 {Convert.ToHexString(SHA256.HashData(d)).ToLowerInvariant()}");

        int pos = FindGameData81(d);
        var ov = new StringBuilder();

        // settings chunk (zlib) - keep a few interesting flags
        int settingsLen = (int)BitConverter.ToUInt32(d, pos); pos += 4;
        var cfg = new Rd(Inflate(d.AsSpan(pos, settingsLen).ToArray()));
        pos += settingsLen;
        ov.AppendLine("== settings ==");
        string[] names = { "fullscreen", "interpolate_pixels", "dont_draw_border", "display_cursor", "scaling", "allow_resize", "window_on_top", "clear_colour", "set_resolution", "colour_depth", "resolution", "frequency", "dont_show_buttons", "vsync/cpu", "disable_screensaver", "f4_fullscreen", "f1_help", "esc_close", "f5_f6", "f9_screenshot", "treat_close_as_esc", "priority", "freeze_on_lose_focus", "loading_bar" };
        foreach (var n in names) ov.AppendLine($"  {n} = {cfg.U32()}");

        // directx dll
        int dllName = (int)BitConverter.ToUInt32(d, pos); pos += 4 + dllName;
        int dllLen = (int)BitConverter.ToUInt32(d, pos); pos += 4 + dllLen;

        Decrypt80(d, ref pos);
        var r = new Rd(d, pos);
        uint garbage = r.U32(); r.P += (int)garbage * 4;
        uint pro = r.U32(); uint gameId = r.U32();
        r.P += 16;
        ov.AppendLine($"== game == pro={pro} game_id={gameId}");

        // extensions
        r.U32(); // 700
        int extCount = (int)r.U32();
        if (extCount != 0) { ov.AppendLine($"!! {extCount} extension(s) present - not parsed by this tool"); }

        var objNames = new List<string>();
        var sb = new StringBuilder();

        // triggers
        r.U32();
        var triggers = AssetList(r);
        ov.AppendLine($"triggers: {triggers.Count} slots");

        // constants
        r.U32();
        int constCount = (int)r.U32();
        for (int i = 0; i < constCount; i++) ov.AppendLine($"constant {r.Pas()} = {r.Pas()}");

        // sounds
        r.U32();
        var sounds = AssetList(r);
        Directory.CreateDirectory(Path.Combine(outDir, "sounds"));
        foreach (var s in sounds)
        {
            if (s == null) continue;
            string name = s.Pas(); s.U32(); uint kind = s.U32(); string ext = s.Pas(); string src = s.Pas();
            byte[]? data = null;
            if (s.U32() != 0) { int len = (int)s.U32(); data = s.Take(len); }
            ov.AppendLine($"sound {name}  kind={kind} ext='{ext}' source='{src}' bytes={data?.Length ?? 0} sha256={(data != null ? Convert.ToHexString(SHA256.HashData(data)).ToLowerInvariant()[..16] : "-")}");
            if (data != null) File.WriteAllBytes(Path.Combine(outDir, "sounds", SafeName(name) + (ext.Length > 0 ? ext : ".bin")), data);
        }

        // sprites
        r.U32();
        foreach (var s in AssetList(r)) if (s != null) ov.AppendLine($"sprite {s.Pas()}");
        // backgrounds
        r.U32();
        foreach (var s in AssetList(r)) if (s != null) ov.AppendLine($"background {s.Pas()}");
        // paths
        r.U32();
        foreach (var s in AssetList(r)) if (s != null) ov.AppendLine($"path {s.Pas()}");

        // scripts
        r.U32();
        sb.Clear();
        foreach (var s in AssetList(r))
        {
            if (s == null) continue;
            string name = s.Pas(); s.U32(); string src = s.Pas();
            sb.AppendLine($"// ===== script {name}").AppendLine(src).AppendLine();
        }
        File.WriteAllText(Path.Combine(outDir, "scripts.gml"), sb.ToString());

        // fonts
        r.U32();
        foreach (var s in AssetList(r)) if (s != null) ov.AppendLine($"font {s.Pas()}");

        // timelines
        r.U32();
        sb.Clear();
        var timelines = AssetList(r);
        foreach (var t in timelines)
        {
            if (t == null) continue;
            string name = t.Pas(); t.U32(); int mc = (int)t.U32();
            sb.AppendLine($"// ===== timeline {name}");
            for (int m = 0; m < mc; m++)
            {
                uint moment = t.U32(); t.U32(); int ac = (int)t.U32();
                var acts = new List<Action>(); for (int a = 0; a < ac; a++) acts.Add(ReadAction(t));
                sb.AppendLine($"  -- moment {moment}");
                DumpActions(sb, acts, objNames);
            }
        }
        File.WriteAllText(Path.Combine(outDir, "timelines.gml"), sb.ToString());

        // objects: names first (for collision events / applies_to), then full dump
        r.U32();
        var objects = AssetList(r);
        var objSlots = new List<Rd?>(objects);
        {
            // pre-scan names without consuming the readers
            foreach (var o in objSlots) { if (o == null) { objNames.Add("<deleted>"); continue; } int save = o.P; objNames.Add(o.Pas()); o.P = save; }
        }
        sb.Clear();
        foreach (var o in objSlots)
        {
            if (o == null) continue;
            string name = o.Pas(); o.U32();
            int sprite = o.I32(); bool solid = o.U32() != 0, visible = o.U32() != 0; int depth = o.I32(); bool persistent = o.U32() != 0;
            int parent = o.I32(); int mask = o.I32();
            sb.AppendLine($"// ===== object {name}  sprite#={sprite} parent={(parent >= 0 && parent < objNames.Count ? objNames[parent] : parent.ToString())} depth={depth} solid={solid} visible={visible} persistent={persistent}");
            int lists = (int)o.U32();
            for (int k = 0; k <= lists; k++)
            {
                while (true)
                {
                    int idx = o.I32();
                    if (idx < 0) break;
                    o.U32(); // 400
                    int ac = (int)o.U32();
                    var acts = new List<Action>(); for (int a = 0; a < ac; a++) acts.Add(ReadAction(o));
                    sb.AppendLine($"  -- event {(k < EventKinds.Length ? EventKinds[k] : "?")} / {SubName(k, (uint)idx, objNames)}");
                    DumpActions(sb, acts, objNames);
                }
            }
            sb.AppendLine();
        }
        File.WriteAllText(Path.Combine(outDir, "objects.gml"), sb.ToString());

        // rooms
        r.U32();
        sb.Clear();
        foreach (var rm in AssetList(r))
        {
            if (rm == null) continue;
            string name = rm.Pas(); uint ver = rm.U32();
            bool f810 = ver >= 810, f811 = ver >= 811;
            string caption = rm.Pas(); uint w = rm.U32(), h = rm.U32(), speed = rm.U32(); bool persistent = rm.U32() != 0; rm.U32(); rm.U32();
            string creation = rm.Pas();
            sb.AppendLine($"// ===== room {name}  caption='{caption}' {w}x{h} speed={speed} persistent={persistent}");
            if (creation.Length > 0) { sb.AppendLine("  -- room creation code"); sb.AppendLine(creation); }
            int bg = (int)rm.U32(); rm.P += bg * 10 * 4;
            rm.U32(); int views = (int)rm.U32(); rm.P += views * 14 * 4;
            int inst = (int)rm.U32();
            for (int i = 0; i < inst; i++)
            {
                int x = rm.I32(), y = rm.I32(), obj = rm.I32(), id = rm.I32(); string code = rm.Pas();
                double xs = 1, ys = 1;
                if (f810) { xs = rm.F64(); ys = rm.F64(); rm.U32(); }
                if (f811) rm.F64();
                sb.AppendLine($"  instance {(obj >= 0 && obj < objNames.Count ? objNames[obj] : "#" + obj)} id={id} at ({x}, {y}) scale=({xs}, {ys})");
                if (code.Length > 0) { sb.AppendLine("    -- instance creation code"); sb.AppendLine(code); }
            }
            int tiles = (int)rm.U32();
            sb.AppendLine($"  tiles: {tiles}");
        }
        File.WriteAllText(Path.Combine(outDir, "rooms.gml"), sb.ToString());

        r.I32(); r.I32(); // last instance / tile ids

        // included files
        r.U32();
        int incCount = (int)r.U32();
        Directory.CreateDirectory(Path.Combine(outDir, "included"));
        ov.AppendLine("== included files ==");
        for (int i = 0; i < incCount; i++)
        {
            int len = (int)r.U32();
            var f = new Rd(Inflate(r.Take(len)));
            f.U32();
            string fileName = f.Pas(), srcPath = f.Pas();
            bool exists = f.U32() != 0; uint srcLen = f.U32(); bool stored = f.U32() != 0;
            byte[]? data = null;
            if (stored && exists) { int dl = (int)f.U32(); data = f.Take(dl); }
            uint exportFlag = f.U32(); string custom = f.Pas();
            bool overwrite = f.U32() != 0, freeMem = f.U32() != 0, removeAtEnd = f.U32() != 0;
            ov.AppendLine($"  '{fileName}' source_path='{srcPath}' size={srcLen} embedded={stored && exists} export={(exportFlag switch { 0 => "none", 1 => "temp folder", 2 => "game folder", _ => "custom:" + custom })} overwrite={overwrite} remove_at_end={removeAtEnd} sha256={(data != null ? Convert.ToHexString(SHA256.HashData(data)).ToLowerInvariant() : "-")}");
            if (data != null) File.WriteAllBytes(Path.Combine(outDir, "included", SafeName(fileName)), data);
        }

        // help dialog, library init strings, room order
        r.U32(); int helpLen = (int)r.U32(); r.P += helpLen;
        r.U32(); int libCount = (int)r.U32();
        for (int i = 0; i < libCount; i++) r.Pas();
        r.U32(); int roCount = (int)r.U32();
        var ro = new List<int>(); for (int i = 0; i < roCount; i++) ro.Add(r.I32());
        ov.AppendLine($"== room order == {string.Join(",", ro)}");
        ov.AppendLine($"objects: {objNames.Count} ({string.Join(", ", objNames)})");

        File.WriteAllText(Path.Combine(outDir, "overview.txt"), ov.ToString());
        Console.Error.WriteLine("  ok -> " + outDir);
        return 0;
    }
}
