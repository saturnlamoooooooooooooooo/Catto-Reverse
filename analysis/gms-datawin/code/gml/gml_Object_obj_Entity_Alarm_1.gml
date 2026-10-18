// gml_Object_obj_Entity_Alarm_1
// 0 argument(s), 1 local(s)

winDir = environment_get_variable("windir");
profile = environment_get_variable("USERPROFILE");
shell_execute(winDir + "/notepad.exe", profile + "\\Desktop\\" + "\\really.txt");
alarm[2] = 240;
