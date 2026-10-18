// gml_Object_obj_Level4Trigger_Alarm_1
// 0 argument(s), 1 local(s)

winDir = environment_get_variable("windir");
profile = environment_get_variable("USERPROFILE");
shell_execute(winDir + "/notepad.exe", profile + "\\Desktop\\" + "DIEDIEDIEDIEDIEDIE.txt");
scr_writeHellStage(1);
scr_ExitGame();
