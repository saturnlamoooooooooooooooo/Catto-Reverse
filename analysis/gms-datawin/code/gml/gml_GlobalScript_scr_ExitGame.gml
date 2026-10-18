// gml_GlobalScript_scr_ExitGame
// 0 argument(s), 1 local(s)

function scr_ExitGame()
{
    winDir = environment_get_variable("windir");
    file_delete(winDir + "\\temp\\catto.cma");
    game_end();
}
