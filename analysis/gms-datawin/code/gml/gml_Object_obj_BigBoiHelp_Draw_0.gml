// gml_Object_obj_BigBoiHelp_Draw_0
// 0 argument(s), 1 local(s)

draw_set_font(1);
if (global.Level == 2)
{
    scr_TextSmallXY("My friend lost all \ntheir biscuits too! \nReally sorry to bother you \nbut can you find them?", 16777215, 1, 0);
}
else
{
    if (global.Level == 3)
    {
        scr_TextSmallXY("I'm sorry Catto...", 16777215, 1, 0);
    }
    else
    {
        if (global.Level == 4)
        {
            draw_set_font(6);
            scr_TextSmallXY("DIEDIEDIEDIEDIEDIEDIEDIEDIE\nDIEDIEDIEDIEDIEDIEDIEDIEDIE", 255, 1, 0);
        }
        else
        {
            scr_TextSmallXY("It's me again, Catto! \nI lost all my biscuits. \nI keep dropping them! Can you \nfind them for me?", 16777215, 1, 0);
        }
    }
}
