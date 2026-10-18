// gml_Object_obj_Warning_Draw_0
// 0 argument(s), 1 local(s)

if (global.trueEnded == 1)
{
    draw_set_font(3);
    scr_Text("Warning!", 255, 0);
    draw_set_font(1);
    scr_Text("This game has loud sounds and flashing images that \nmay trigger epileptic seizures. Don't be a stupid boy and play this \ngame unless you want to die from brain explosion", 16777215, 2);
    scr_Text("Music belongs to SEGA and Nintendo, sound effects are \nroyalty-free (I think?)", 16777215, 3);
    scr_Text("Thanks for playing!", 16777215, 5);
}
else
{
    if (global.hellStage == 4)
    {
        draw_set_font(3);
        scr_Text("Warning!", 255, 0);
        draw_set_font(1);
        scr_Text("this game is not what you think it is \nit is up to you to finish what you started", 16777215, 2);
        scr_Text("Press Enter to continue.", 16777215, 5);
    }
    else
    {
        if (global.hellStage == 5)
        {
            draw_set_font(4);
            scr_Text("I'M SORRY", 255, 0);
            draw_set_font(6);
            scr_Text("åŒãÃƒÆ’¢â‚¬Å¡€šÂ£ÌÉÏÔËÁÆÌÉÏÔËÁÆáÒÚÑÂÙпя╟╨╬╥▐п╠▀šðèæžŠÐÈŽSm¶rg¥sÚÑÂÙпяÖóÞ¢ñëÒÚÑÂÙпÖóÞ¢ñëÒÚÑÂÙп╟╨╬", 255, 2);
            scr_Text("�æ–‡åŒãÃƒÆ’¢â‚¬Å¡€åŒãÃƒÆ’ÖóÞ¢ñëÒÚÑÂÙпя╟╨╬╥▐£ÌÉÏÔËÁÆáÖóÙs∂в√•»¿Ø§яЛПипя╟╨╬╥▐£ÌÉÏÔËпя╟╨╬╥▐£ÌÉÏÔË", 255, 3);
            scr_Text("I'M SORRYI'M SORRYI'M SORRYI'M SORRYI'M SORRYI'M SORRYI'M SORRYI'M SORRYI'M SORRYI'M SORRYI'M SORRYI'M SORRY", 255, 5);
        }
        else
        {
            draw_set_font(3);
            scr_Text("Warning!", 255, 0);
            draw_set_font(1);
            scr_Text("This game has loud sounds and flashing images that \nmay trigger epileptic seizures. Don't be a stupid boy and play this \ngame unless you want to die from brain explosion", 16777215, 2);
            scr_Text("Music belongs to SEGA and Nintendo, sound effects are \nroyalty-free (I think?)", 16777215, 3);
            scr_Text("Press Enter to continue.", 16777215, 5);
        }
    }
}
