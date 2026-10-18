// gml_Script_scr_writeTryCount
// 1 argument(s), 0 local(s)

tryCount = argument0;
ini_open("try.ini");
ini_write_real("keep", "trying", tryCount);
ini_close();
