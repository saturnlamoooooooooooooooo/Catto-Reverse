// gml_Script_scr_writeFakeEnd
// 1 argument(s), 0 local(s)

fakeEnd = argument0;
ini_open("hello.ini");
ini_write_real("progress", "fakeEnd", fakeEnd);
ini_close();
