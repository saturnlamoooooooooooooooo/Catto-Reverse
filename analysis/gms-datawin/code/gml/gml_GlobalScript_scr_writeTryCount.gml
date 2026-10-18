// gml_GlobalScript_scr_writeTryCount
// 0 argument(s), 1 local(s)

function scr_writeTryCount(argument0)
{
    tryCount = argument0;
    ini_open("try.ini");
    ini_write_real("keep", "trying", tryCount);
    ini_close();
}
