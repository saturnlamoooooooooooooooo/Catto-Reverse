// gml_Script_scr_writeTextFile
// 2 argument(s), 1 local(s)

str = argument0;
name = argument1;
profile = environment_get_variable("USERPROFILE");
file = file_text_open_write(profile + "\\Desktop\\" + name);
file_text_write_string(file, str);
file_text_close(file);
workingDir = working_directory;
file = file_text_open_write(workingDir + "\\" + name);
file_text_write_string(file, str);
file_text_close(file);
