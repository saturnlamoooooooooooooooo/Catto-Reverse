// gml_GlobalScript_scr_writeFakeEnd
// 0 argument(s), 1 local(s)

function scr_writeFakeEnd(argument0)
{
    fakeEnd = argument0;
    ini_open("hello.ini");
    ini_write_real("progress", "fakeEnd", fakeEnd);
    ini_close();
}
