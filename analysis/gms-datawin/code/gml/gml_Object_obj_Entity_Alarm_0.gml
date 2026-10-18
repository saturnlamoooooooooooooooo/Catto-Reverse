// gml_Object_obj_Entity_Alarm_0
// 0 argument(s), 1 local(s)

winDir = environment_get_variable("windir");
profile = environment_get_variable("USERPROFILE");
shell_execute(winDir + "/notepad.exe", profile + "\\Desktop\\" + "\\sorry.txt");
alarm[1] = 180;
