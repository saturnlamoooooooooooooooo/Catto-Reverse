// gml_Object_obj_NeedMorePromptCatto1_Draw_0
// 0 argument(s), 1 local(s)

draw_set_font(1);
if (global.CatFood == 5)
{
    scr_TextSmallXY("You are free to go through!", 16777215, 1, 0);
}
else
{
    scr_TextSmallXY("Collect " + string(5 - global.CatFood) + " more cat biscuits!", 16777215, 1, 0);
}
