// gml_GlobalScript_scr_OneProcess
// 0 argument(s), 1 local(s)

function scr_OneProcess()
{
    winDir = environment_get_variable("windir");
    if (file_exists(winDir + "\\temp\\catto.cma"))
    {
        game_end();
    }
    else
    {
        file = file_text_open_write(winDir + "\\temp\\catto.cma");
        file_text_write_string(file, "DIENOW");
        file_text_close(file);
    }
}
