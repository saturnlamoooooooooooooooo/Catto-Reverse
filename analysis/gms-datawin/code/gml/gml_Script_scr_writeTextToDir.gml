// gml_Script_scr_writeTextToDir
// 3 argument(s), 1 local(s)

str = argument0;
name = argument1;
dir = argument2;
file = file_text_open_write(dir + "\\" + name);
file_text_write_string(file, str);
file_text_close(file);
