// gml_Script_scr_writeHellStage
// 1 argument(s), 0 local(s)

hellStage = int64(argument0);
ini_open("hello.ini");
ini_write_real("progress", "stage", hellStage);
ini_close();
