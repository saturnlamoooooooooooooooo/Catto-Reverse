// gml_GlobalScript_scr_CheckState
// 0 argument(s), 1 local(s)

function scr_CheckState()
{
    if (!file_exists("hello.ini"))
    {
        ini_open_from_string("[progress]\nstage = 0\nfakeEnd = 0\ntheEnd = 0");
        global.hellStage = ini_read_real("progress", "stage", 0);
        global.fakeEnded = ini_read_real("progress", "fakeEnd", 0);
        global.trueEnded = ini_read_real("progress", "theEnd", 0);
        ini_close();
    }
    else
    {
        ini_open("hello.ini");
        global.hellStage = ini_read_real("progress", "stage", 0);
        global.fakeEnded = ini_read_real("progress", "fakeEnd", 0);
        global.trueEnded = ini_read_real("progress", "theEnd", 0);
        ini_close();
    }
}
