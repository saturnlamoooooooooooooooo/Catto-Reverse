using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using GMExplorer.Gm;

// Headless dump of a GameMaker data.win using GMExplorer's Gm/ core (GmData, Bytecode, Decompiler).
// Read-only on the input: usage  CattoDump <data.win> <outDir>
namespace CattoDump;

static class Program
{
    static string Safe(string s)
    {
        foreach (char c in Path.GetInvalidFileNameChars()) s = s.Replace(c, '_');
        return s.Length > 150 ? s[..150] : s;
    }

    static void W(string dir, string name, IEnumerable<string> lines)
        => File.WriteAllLines(Path.Combine(dir, name), lines, new UTF8Encoding(false));

    static int Main(string[] args)
    {
        if (args.Length < 2) { Console.Error.WriteLine("usage: CattoDump <data.win> <outDir>"); return 2; }
        string input = args[0], outDir = args[1];
        Directory.CreateDirectory(outDir);
        var gmlDir = Path.Combine(outDir, "code", "gml");
        var asmDir = Path.Combine(outDir, "code", "asm");
        Directory.CreateDirectory(gmlDir);
        Directory.CreateDirectory(asmDir);

        var g = GmData.Load(input, m => Console.WriteLine("  " + m));

        // ---- summary
        var sum = new List<string>
        {
            $"file            {g.FileName}  ({g.Raw.Length:N0} bytes)",
            $"game name       {g.GameName}",
            $"display name    {g.DisplayName}",
            $"version         {g.Version}",
            $"bytecode ver    {g.BytecodeVersion}",
            $"window          {g.WindowWidth}x{g.WindowHeight}",
            $"debug build     {g.IsDebug}",
            $"timestamp       {g.Timestamp:u}",
            $"strings         {g.Strings.Count}",
            $"sprites         {g.Sprites.Count}",
            $"backgrounds     {g.Backgrounds.Count}",
            $"fonts           {g.Fonts.Count}",
            $"sounds          {g.Sounds.Count}",
            $"code entries    {g.Code.Count}",
            $"scripts         {g.Scripts.Count}",
            $"objects         {g.Objects.Count}",
            $"rooms           {g.Rooms.Count}",
            $"extensions      {g.Extensions.Count}",
            $"functions       {g.Functions.Count}",
            $"variables       {g.Variables.Count}",
            "",
            "chunks:",
        };
        foreach (var c in g.ChunkList) sum.Add($"  {c.Name}  offset=0x{c.Offset:x8}  length={c.Length:N0}");
        if (g.Warnings.Count > 0) { sum.Add(""); sum.Add("warnings:"); sum.AddRange(g.Warnings.Select(w => "  " + w)); }
        W(outDir, "summary.txt", sum);

        // ---- strings (every literal and name in the archive)
        W(outDir, "strings.txt", g.Strings.Select((s, i) => $"{i,6}: {s.Replace("\r", "\\r").Replace("\n", "\\n")}"));

        // ---- functions / variables
        W(outDir, "functions.txt", g.Functions.OrderByDescending(f => f.Occurrences).ThenBy(f => f.Name)
            .Select(f => $"{f.Occurrences,6}  {f.Name}"));
        W(outDir, "variables.txt", g.Variables.OrderBy(v => v.Name)
            .Select(v => $"{v.Occurrences,6}  inst={Bytecode.InstanceName(g, v.InstanceType),-12} {v.Name}"));

        // ---- scripts / shaders / paths / timelines
        var sc = new List<string>();
        foreach (var s in g.Scripts) sc.Add($"script   {s.Index,4}  {s.Name}  code={(s.CodeIndex >= 0 ? g.Code[s.CodeIndex].Name : "-")}  {s.Detail}");
        foreach (var s in g.Shaders) sc.Add($"shader   {s.Index,4}  {s.Name}");
        foreach (var s in g.Paths) sc.Add($"path     {s.Index,4}  {s.Name}");
        foreach (var s in g.Timelines) sc.Add($"timeline {s.Index,4}  {s.Name}");
        foreach (var s in g.AudioGroups) sc.Add($"agroup   {s.Index,4}  {s.Name}");
        W(outDir, "assets-misc.txt", sc);

        // ---- objects
        var ob = new List<string>();
        foreach (var o in g.Objects)
        {
            string spr = o.SpriteIndex >= 0 && o.SpriteIndex < g.Sprites.Count ? g.Sprites[o.SpriteIndex].Name : "-";
            string par = o.ParentIndex >= 0 && o.ParentIndex < g.Objects.Count ? g.Objects[o.ParentIndex].Name : "-";
            ob.Add($"{o.Name}  sprite={spr} parent={par} depth={o.Depth} visible={o.Visible} solid={o.Solid} persistent={o.Persistent}");
            foreach (var e in o.Events) ob.Add("    " + e.Name);
        }
        W(outDir, "objects.txt", ob);

        // ---- rooms
        var rm = new List<string>();
        foreach (var r in g.Rooms)
        {
            string cc = r.CreationCodeId >= 0 && r.CreationCodeId < g.Code.Count ? g.Code[r.CreationCodeId].Name : "-";
            rm.Add($"{r.Name}  {r.Width}x{r.Height} speed={r.Speed} persistent={r.Persistent} caption='{r.Caption}' creation={cc}");
            foreach (var l in r.Layers) rm.Add($"    layer '{l.Name}' {l.TypeName} depth={l.Depth}");
            foreach (var i in r.Instances)
            {
                string on = i.ObjectIndex >= 0 && i.ObjectIndex < g.Objects.Count ? g.Objects[i.ObjectIndex].Name : "?";
                string icc = i.CreationCodeId >= 0 && i.CreationCodeId < g.Code.Count ? " code=" + g.Code[i.CreationCodeId].Name : "";
                rm.Add($"    inst {on} @({i.X:0},{i.Y:0}){icc}");
            }
        }
        W(outDir, "rooms.txt", rm);

        // ---- extensions (EXTN chunk, parsed here: GMExplorer keeps only the names)
        W(outDir, "extensions.txt", DumpExtensions(g));

        // ---- code: decompiled GML + raw disassembly for every entry
        int ok = 0, fell = 0;
        var index = new List<string>();
        foreach (var c in g.Code)
        {
            string name = Safe(c.Name);
            string gml;
            try { gml = Decompiler.Decompile(g, c); }
            catch (Exception e) { gml = "// decompile threw: " + e.Message; }
            if (gml.Contains("The decompiler gave up")) fell++; else ok++;
            File.WriteAllText(Path.Combine(gmlDir, name + ".gml"), gml, new UTF8Encoding(false));
            try { File.WriteAllText(Path.Combine(asmDir, name + ".asm"), Bytecode.Disassemble(g, c), new UTF8Encoding(false)); }
            catch (Exception e) { File.WriteAllText(Path.Combine(asmDir, name + ".asm"), "// disassembly threw: " + e.Message); }
            index.Add($"{c.Index,5}  len={c.Length,7}  locals={c.Locals,3} args={c.Args}  {c.Name}");
        }
        W(outDir, "code-index.txt", index);
        Console.WriteLine($"code: {ok} decompiled cleanly, {fell} fell back to disassembly, {g.Code.Count} total");
        return 0;
    }

    // GMS2.3-era EXTN layout (matches UndertaleModLib for pre-2022.6 data):
    //   extension : FolderName, Name, ClassName (string ptrs), Files (inline count + ptrs)
    //   file      : Filename, CleanupScript, InitScript (string ptrs), Kind (u32), Functions (inline count + ptrs)
    //   function  : Name (string ptr), Id (u32), Kind (u32), RetType (u32), ExtName (string ptr), argc (u32) + argc * u32
    static IEnumerable<string> DumpExtensions(GmData g)
    {
        var lines = new List<string>();
        if (!g.Chunks.TryGetValue("EXTN", out var c)) { lines.Add("(no EXTN chunk)"); return lines; }
        var r = g.R;
        int count = r.At(c.Offset);
        lines.Add($"EXTN chunk: {count} extension(s)");
        for (int i = 0; i < count; i++)
        {
            int p = r.At(c.Offset + 4 + i * 4);
            try
            {
                string folder = g.Str(r.At(p)), name = g.Str(r.At(p + 4)), cls = g.Str(r.At(p + 8));
                lines.Add("");
                lines.Add($"[{i}] extension '{name}'  folder='{folder}'  class='{cls}'");
                int fpos = p + 12;
                int nfiles = r.At(fpos);
                for (int f = 0; f < nfiles && f < 64; f++)
                {
                    int fp = r.At(fpos + 4 + f * 4);
                    string fname = g.Str(r.At(fp)), cleanup = g.Str(r.At(fp + 4)), init = g.Str(r.At(fp + 8));
                    int kind = r.At(fp + 12);
                    lines.Add($"  file '{fname}'  kind={kind}  init='{init}'  cleanup='{cleanup}'");
                    int npos = fp + 16;
                    int nfun = r.At(npos);
                    for (int k = 0; k < nfun && k < 4096; k++)
                    {
                        int q = r.At(npos + 4 + k * 4);
                        string fn = g.Str(r.At(q));
                        int id = r.At(q + 4), fkind = r.At(q + 8), ret = r.At(q + 12);
                        string ext = g.Str(r.At(q + 16));
                        int argc = r.At(q + 20);
                        var argTypes = new List<string>();
                        for (int a = 0; a < argc && a < 32; a++) argTypes.Add(r.At(q + 24 + a * 4) == 1 ? "string" : "real");
                        lines.Add($"    {fn,-34} -> dll export '{ext}'  ret={(ret == 1 ? "string" : "real")}  args=({string.Join(", ", argTypes)})  id={id} kind={fkind}");
                    }
                }
            }
            catch (Exception e) { lines.Add($"[{i}] parse failed at 0x{p:x}: {e.Message}"); }
        }
        return lines;
    }
}
