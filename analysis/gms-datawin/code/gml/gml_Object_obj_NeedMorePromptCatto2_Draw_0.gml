// gml_Object_obj_NeedMorePromptCatto2_Draw_0
// 0 argument(s), 1 local(s)

draw_set_font(1);
if (global.Pearls == 25)
{
    scr_TextSmallXY("You are free to go through!", 16777215, 1, 0);
}
else
{
    scr_TextSmallXY("Collect " + string(25 - global.Pearls) + " more pearls!", 16777215, 1, 0);
}
