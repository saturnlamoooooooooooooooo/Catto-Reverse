// gml_Object_obj_HUD_Draw_64
// 0 argument(s), 1 local(s)

draw_set_font(1);
if (global.hellStage == 2)
{
    draw_sprite(69, 0, 0, 0);
    scr_TextSmallXY("x " + string(global.Lives), 16777215, 3, 1);
    scr_TextSmallXY(string(global.CatFood) + "/" + string(FoodTotal), 16777215, 3, 4);
    scr_TextSmallXY(string(global.Score), 16777215, 3, 7);
}
else
{
    if (global.hellStage == 3)
    {
        draw_sprite(61, 0, 0, 0);
        scr_TextSmallXY("x " + string(global.Lives), 16777215, 3, 1);
        scr_TextSmallXY(string(global.Pearls) + "/" + string(PearlTotal), 16777215, 3, 4);
        scr_TextSmallXY(string(global.Score), 16777215, 3, 7);
    }
    else
    {
        draw_sprite(49, 0, 0, 0);
        scr_TextSmallXY("x " + string(global.Lives), 16777215, 3, 1);
        scr_TextSmallXY(string(global.TinyBisc) + "/" + string(TinyTotal), 16777215, 3, 4);
        scr_TextSmallXY(string(global.Score), 16777215, 3, 7);
    }
}
