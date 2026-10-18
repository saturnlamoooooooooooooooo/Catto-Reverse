// gml_Object_obj_GlobalVarMenu_Draw_0
// 0 argument(s), 1 local(s)

draw_set_font(1);
scr_TextSmallXY("Ended state: " + string(global.ended), 16777215, 2, 6);
scr_TextSmallXY("Room ID: " + string(global.RoomID), 16777215, 2, 7);
scr_TextSmallXY("Current act (from 0 - 4): " + string(global.hellStage), 16777215, 2, 8);
scr_TextSmallXY("Working directory: " + string(working_directory), 16777215, 2, 9);
scr_TextSmallXY("User directory: " + string(environment_get_variable("USERPROFILE")), 16777215, 2, 10);
scr_TextSmallXY("Total score: " + string(global.Score), 16777215, 2, 11);
if (menu == 1)
{
    scr_TextSmallXY("Exit back to debug menu", 65535, 2, 13);
}
else
{
    scr_TextSmallXY("Exit back to debug menu", 16777215, 2, 13);
}
