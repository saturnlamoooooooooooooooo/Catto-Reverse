// gml_Object_obj_DialogAct3Control3_Alarm_8
// 0 argument(s), 1 local(s)

winDir = environment_get_variable("windir");
profile = environment_get_variable("USERPROFILE");
scr_writeHellStage(3);
shell_execute(winDir + "/notepad.exe", profile + "\\Desktop\\" + "I AM IMMORTAL.txt");
scr_writeTextFile("nothing is what it seems " + global.Username, "illusion.txt");
scr_ExitGame();
