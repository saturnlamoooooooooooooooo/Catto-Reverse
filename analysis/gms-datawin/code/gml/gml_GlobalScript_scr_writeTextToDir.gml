// gml_GlobalScript_scr_writeTextToDir
// 0 argument(s), 1 local(s)

function scr_writeTextToDir(argument0, argument1, argument2)
{
    str = argument0;
    name = argument1;
    dir = argument2;
    file = file_text_open_write(dir + "\\" + name);
    file_text_write_string(file, str);
    file_text_close(file);
}
