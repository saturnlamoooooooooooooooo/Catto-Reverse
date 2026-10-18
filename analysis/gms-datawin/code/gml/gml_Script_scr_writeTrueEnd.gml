// gml_Script_scr_writeTrueEnd
// 1 argument(s), 0 local(s)

theEnd = argument0;
ini_open("hello.ini");
ini_write_real("progress", "theEnd", theEnd);
ini_close();
