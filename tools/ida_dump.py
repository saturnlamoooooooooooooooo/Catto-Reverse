"""Headless IDA (idalib) dump: exports, imports, strings and Hex-Rays pseudocode for a PE.
usage: python ida_dump.py <binary-copy> <outdir>   (IDADIR must point at the IDA install)
Static analysis only: the binary is loaded into IDA, never executed."""
import sys, os, hashlib, time

import idapro  # must be the first IDA import

binary, outdir = sys.argv[1], sys.argv[2]
os.makedirs(outdir, exist_ok=True)
sha = hashlib.sha256(open(binary, "rb").read()).hexdigest()

rc = idapro.open_database(binary, True)
if rc != 0:
    sys.exit("open_database failed: %r" % rc)

import ida_auto, ida_funcs, ida_hexrays, ida_nalt, ida_entry, ida_name, ida_bytes, idautils, idc, ida_segment, ida_ida

ida_auto.auto_wait()
name = os.path.basename(binary)
out = open(os.path.join(outdir, name + ".c"), "w", encoding="utf-8")
def w(s=""):
    out.write(s + "\n")

w("/* %s  sha256=%s */" % (name, sha))
w("/* IDA %s, image base 0x%x, %d functions */" % (idc.get_inf_attr(idc.INF_VERSION) and "9.3", ida_nalt.get_imagebase(), len(list(idautils.Functions()))))
w()

w("/* ---------------- exports ---------------- */")
exports = {}
for idx, ordinal, ea, ename in idautils.Entries():
    exports[ea] = ename
    w("export  ord=%-4d 0x%08x  %s" % (ordinal, ea, ename))
w()

w("/* ---------------- imports ---------------- */")
nimp = ida_nalt.get_import_module_qty()
for i in range(nimp):
    mod = ida_nalt.get_import_module_name(i)
    names = []
    def cb(ea, nm, ord_):
        names.append(nm or "ord%d" % ord_)
        return True
    ida_nalt.enum_import_names(i, cb)
    w("import  %s: %s" % (mod, ", ".join(names)))
w()

w("/* ---------------- strings (len>=5) ---------------- */")
sc = idautils.Strings()
sc.setup(strtypes=[ida_nalt.STRTYPE_C, ida_nalt.STRTYPE_C_16], minlen=5)
for s in sc:
    w("str  0x%08x  %r" % (s.ea, str(s)))
w()

w("/* ---------------- pseudocode ---------------- */")
have_hx = ida_hexrays.init_hexrays_plugin()
w("/* hex-rays available: %s */" % have_hx)
count = failed = 0
t0 = time.time()
for ea in idautils.Functions():
    f = ida_funcs.get_func(ea)
    if not f:
        continue
    is_lib = bool(f.flags & ida_funcs.FUNC_LIB)
    fname = ida_funcs.get_func_name(ea)
    tag = "EXPORT " if ea in exports else ""
    if is_lib and ea not in exports:
        continue  # skip FLIRT-identified CRT/library code
    size = f.end_ea - f.start_ea
    w()
    w("/* %s%s  @0x%x  size=%d%s */" % (tag, fname, ea, size, "  [lib]" if is_lib else ""))
    if not have_hx:
        continue
    try:
        cf = ida_hexrays.decompile(ea)
        w(str(cf))
        count += 1
    except ida_hexrays.DecompilationFailure as e:
        failed += 1
        w("/* decompilation failed: %s */" % e)
w()
w("/* decompiled %d functions, %d failed, %.1fs */" % (count, failed, time.time() - t0))
out.close()
idapro.close_database(False)  # discard the database; nothing is saved
print("%s: decompiled %d, failed %d" % (name, count, failed))
