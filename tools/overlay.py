"""Inspect PE overlay + resource directory of the data/*.exe files. Read-only."""
import sys, os, re, hashlib, collections
import pefile

def strings(b, n=6):
    a = re.findall(rb"[\x20-\x7e]{%d,}" % n, b)
    u = re.findall(rb"(?:[\x20-\x7e]\x00){%d,}" % n, b)
    return [x.decode() for x in a], [x.decode("utf-16le") for x in u]

for path in sys.argv[1:]:
    data = open(path, "rb").read()
    pe = pefile.PE(data=data)
    end = max(s.PointerToRawData + s.SizeOfRawData for s in pe.sections)
    overlay = data[end:]
    print("=" * 70)
    print(os.path.basename(path), "size", len(data), "pe_end", end, "overlay", len(overlay))
    print(" overlay head:", overlay[:48].hex(), "|", overlay[:48])
    print(" overlay sha256:", hashlib.sha256(overlay).hexdigest() if overlay else "-")
    # magic scan inside overlay
    for name, magic in [("PK zip", b"PK\x03\x04"), ("PNG", b"\x89PNG"), ("JPG", b"\xff\xd8\xff"), ("MZ", b"MZ"),
                        ("RIFF", b"RIFF"), ("OggS", b"OggS"), ("ID3", b"ID3"), ("BM", b"BM"), ("7z", b"7z\xbc\xaf"),
                        ("GIF", b"GIF8"), ("FORM(GM)", b"FORM")]:
        hits = [m.start() for m in re.finditer(re.escape(magic), overlay)]
        if hits:
            print("  %-9s x%-5d first@%s" % (name, len(hits), hits[:5]))
    # resources
    rs = collections.Counter()
    if hasattr(pe, "DIRECTORY_ENTRY_RESOURCE"):
        for t in pe.DIRECTORY_ENTRY_RESOURCE.entries:
            tname = pefile.RESOURCE_TYPE.get(t.id, str(t.id)) if t.id else str(t.name)
            for e in t.directory.entries:
                for l in e.directory.entries:
                    rs[(tname, str(e.name or e.id))] += l.data.struct.Size
    big = sorted(rs.items(), key=lambda kv: -kv[1])[:12]
    print(" top resources:", big)
    a, u = strings(data[:end])
    print(" interesting ascii:")
    keys = re.compile(r"(?i)(wallpaper|desktop|\.jpg|\.png|\.bmp|\.mp3|\.wav|\.txt|http|cmd|powershell|reg |HKEY|Software\\|%appdata|localappdata|catto|tuna|spook|shutdown|taskkill|\.bat|\.vbs)")
    seen = set()
    for s in a + u:
        if keys.search(s) and s not in seen and len(s) < 200:
            seen.add(s)
    for s in sorted(seen)[:60]:
        print("   ", s)
    # strings in the overlay
    oa, ou = strings(overlay[:4_000_000], 8)
    print(" overlay strings sample:", (oa[:15] + ou[:15]))
