// gml_Object_obj_LoadingScreen_Draw_0
// 0 argument(s), 1 local(s)

if (global.Level3Passed == 1)
{
    draw_set_font(0);
    scr_Text("DIEDIEDIEDIEDIEDIEDIEDIEDIEIEDIEDIEDIEDIEDIEDIEDIEDIE", 255, 0);
    draw_set_font(5);
    scr_TextSmall(global.levelName, 255, 4);
    draw_set_font(6);
    scr_Text(mission, 255, 3);
    scr_Text(chosenMessage, 255, 10);
}
else
{
    if (global.hellStage == 2)
    {
        draw_set_font(3);
        scr_Text("Loading...", 4235519, 0);
        draw_set_font(2);
        scr_TextSmall(global.levelName, 65535, 4);
        draw_set_font(1);
        scr_Text(chosenMessage, 16777215, 10);
    }
    else
    {
        if (global.hellStage == 3)
        {
            draw_set_font(3);
            scr_Text("Loading...", 16711935, 0);
            draw_set_font(2);
            scr_TextSmall(global.levelName, 65280, 4);
            draw_set_font(1);
            scr_Text(mission, 16777215, 3);
            scr_Text(chosenMessage, 16777215, 10);
        }
        else
        {
            draw_set_font(3);
            scr_Text("Loading...", 8388736, 0);
            draw_set_font(2);
            scr_TextSmall(global.levelName, 16711935, 4);
            draw_set_font(1);
            scr_Text(mission, 16777215, 3);
            scr_Text(chosenMessage, 16777215, 10);
        }
    }
}
