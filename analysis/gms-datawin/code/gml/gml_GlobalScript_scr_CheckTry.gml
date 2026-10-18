// gml_GlobalScript_scr_CheckTry
// 0 argument(s), 1 local(s)

function scr_CheckTry()
{
    if (!file_exists("try.ini"))
    {
        ini_open_from_string("[keep]\ntrying = 0");
        global.tryCount = ini_read_real("keep", "trying", 0);
        ini_close();
    }
    else
    {
        ini_open("try.ini");
        global.tryCount = ini_read_real("keep", "trying", 0);
        ini_close();
    }
}
