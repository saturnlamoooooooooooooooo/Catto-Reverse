// gml_Object_obj_Locked_Draw_0
// 0 argument(s), 1 local(s)

draw_set_font(4);
if (!file_exists(winDir + "\\temp\\1.cma") && !file_exists(winDir + "\\temp\\2.cma"))
{
    scr_TextXY("0/2", 65535, 0, 0);
}
else
{
    if (file_exists(winDir + "\\temp\\1.cma") && !file_exists(winDir + "\\temp\\2.cma"))
    {
        scr_TextXY("1/2", 65535, 0, 0);
    }
}
