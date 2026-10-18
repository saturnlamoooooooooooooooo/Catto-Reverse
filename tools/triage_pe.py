"""Static PE triage. Reads files only; never loads or executes them."""
import sys, os, hashlib, datetime
import pefile

def triage(path):
    pe = pefile.PE(path, fast_load=False)
    print("=" * 78)
    print(path, os.path.getsize(path), "bytes")
    print("sha256", hashlib.sha256(open(path, "rb").read()).hexdigest())
    fh = pe.FILE_HEADER
    oh = pe.OPTIONAL_HEADER
    print("machine 0x%04x  dll=%s  subsystem=%d  entry=0x%x  imagebase=0x%x" % (
        fh.Machine, bool(fh.Characteristics & 0x2000), oh.Subsystem, oh.AddressOfEntryPoint, oh.ImageBase))
    print("timestamp", datetime.datetime.utcfromtimestamp(fh.TimeDateStamp), "UTC")
    print("clr (managed)?", bool(oh.DATA_DIRECTORY[14].VirtualAddress))
    print("sections:")
    for s in pe.sections:
        print("  %-8s va=0x%08x vsz=0x%08x rawsz=0x%08x entropy=%.2f" % (
            s.Name.rstrip(b"\0").decode(errors="replace"), s.VirtualAddress, s.Misc_VirtualSize, s.SizeOfRawData, s.get_entropy()))
    print("imports:")
    for ent in getattr(pe, "DIRECTORY_ENTRY_IMPORT", []):
        names = [i.name.decode() if i.name else "ord%d" % i.ordinal for i in ent.imports]
        print("  %s (%d): %s" % (ent.dll.decode(), len(names), ", ".join(names)))
    print("exports:")
    exp = getattr(pe, "DIRECTORY_ENTRY_EXPORT", None)
    if exp:
        for e in exp.symbols:
            print("  %s @0x%x" % (e.name.decode() if e.name else "ord%d" % e.ordinal, e.address))
    else:
        print("  (none)")
    if hasattr(pe, "VS_FIXEDFILEINFO"):
        pass
    try:
        for fi in pe.FileInfo:
            for e in fi:
                if hasattr(e, "StringTable"):
                    for st in e.StringTable:
                        for k, v in st.entries.items():
                            print("  version %s = %s" % (k.decode(errors="replace"), v.decode(errors="replace")))
    except Exception:
        pass
    # signature
    sec = oh.DATA_DIRECTORY[4]
    print("authenticode present:", bool(sec.VirtualAddress and sec.Size))
    pe.close()

for p in sys.argv[1:]:
    try:
        triage(p)
    except Exception as ex:
        print("ERR", p, ex)
