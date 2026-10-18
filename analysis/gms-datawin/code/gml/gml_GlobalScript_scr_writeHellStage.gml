// gml_GlobalScript_scr_writeHellStage
// 0 argument(s), 1 local(s)

function scr_writeHellStage(argument0)
{
    hellStage = int64(argument0);
    ini_open("hello.ini");
    ini_write_real("progress", "stage", hellStage);
    ini_close();
}
