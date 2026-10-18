// gml_Object_obj_EnterMenu_Draw_64
// 0 argument(s), 1 local(s)

draw_set_alpha(0.5);
draw_set_color(8388608);
draw_rectangle(0, 0, room_width, room_height, 0);
draw_set_alpha(1);
draw_set_font(1);
if (menu == 1)
{
    scr_TextSmallXY("Resume", 65535, 22, 11);
}
else
{
    scr_TextSmallXY("Resume", 16777215, 22, 11);
}
if (menu == 2)
{
    scr_TextSmallXY("Restart room", 65535, 23, 12);
}
else
{
    scr_TextSmallXY("Restart room", 16777215, 23, 12);
}
if (menu == 3)
{
    scr_TextSmallXY("Go to main menu", 65535, 24, 13);
}
else
{
    scr_TextSmallXY("Go to main menu", 16777215, 24, 13);
}
