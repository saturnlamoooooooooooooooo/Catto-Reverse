// gml_Object_obj_TitleMenuCatto1_Draw_0
// 0 argument(s), 1 local(s)

draw_set_font(3);
if (menu == 1)
{
    scr_Text("Play", 65535, 0);
}
else
{
    scr_Text("Play", 16777215, 0);
}
if (menu == 2)
{
    scr_Text("Exit game", 65535, 1);
}
else
{
    scr_Text("Exit game", 16777215, 1);
}
