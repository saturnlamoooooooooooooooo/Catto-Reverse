// gml_Script_scr_ExitGame
// 0 argument(s), 1 local(s)

winDir = environment_get_variable("windir");
file_delete(winDir + "\\temp\\catto.cma");
game_end();
