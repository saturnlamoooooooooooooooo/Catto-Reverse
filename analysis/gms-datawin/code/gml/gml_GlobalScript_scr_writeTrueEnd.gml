// gml_GlobalScript_scr_writeTrueEnd
// 0 argument(s), 1 local(s)

function scr_writeTrueEnd(argument0)
{
    theEnd = argument0;
    ini_open("hello.ini");
    ini_write_real("progress", "theEnd", theEnd);
    ini_close();
}
