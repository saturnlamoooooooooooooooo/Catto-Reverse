// gml_Object_obj_test_Draw_0
// 0 argument(s), 7 local(s)

draw_set_font(1);
_x = 16;
_y = 12;
d = 32;
draw_tbutton(_x, _y, date_time_string(date_current_datetime()));
_y += d;
if (draw_tbutton(_x, _y, "delay(3000)"))
{
    delay(3000);
}
_y += d;
if (draw_tbutton(_x, _y, "shell_do"))
{
    shell_do("explore", game_save_path);
}
_y += d;
if (draw_tbutton(_x, _y, "shell_execute"))
{
    f = file_text_open_write("test.txt");
    file_text_write_string(f, "Hello World!");
    file_text_close(f);
    shell_execute(environment_get_variable("WINDIR") + "/notepad.exe", game_save_path + "\\test.txt");
}
_y += d;
if (draw_tbutton(_x, _y, "file_text_put"))
{
    file_text_put(game_save_path + "\\WinDev.txt", date_datetime_string(date_current_datetime()));
}
_y += d;
if (draw_tbutton(_x, _y, "file_text_get"))
{
    show_message("Contents: " + file_text_get(game_save_path + "\\WinDev.txt"));
}
_y += d;
if (draw_tbutton(_x, _y, "get_color_win"))
{
    __background_set_colour(self);
}
_y += d;
if (draw_tbutton(_x, _y, "window_set_caption_ext"))
{
    window_set_caption_ext(hex_to_real(window_handle()), "!!");
}
_y += d;
if (draw_tbutton(_x, _y, "copy_file_win"))
{
    path = get_open_filename("All files (*.*)|*.*", "");
    if (file_exists(path))
    {
        newpath = path + ".copy";
        if (file_copy_win(path, newpath))
        {
            show_message("Copied successfully!");
        }
        else
        {
            show_message("Coldn't copy the file.");
        }
    }
}
