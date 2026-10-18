// gml_Object_obj_TitleMenu_Draw_0
// 0 argument(s), 1 local(s)

draw_set_font(3);
if (menu == 1)
{
    scr_Text("Start", 16776960, 0);
}
else
{
    scr_Text("Start", 16777215, 0);
}
if (menu == 2)
{
    scr_Text("Info", 16776960, 1);
}
else
{
    scr_Text("Info", 16777215, 1);
}
if (menu == 3)
{
    scr_Text("Exit", 16776960, 2);
}
else
{
    scr_Text("Exit", 16777215, 2);
}
