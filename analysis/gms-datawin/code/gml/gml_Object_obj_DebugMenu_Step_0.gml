// gml_Object_obj_DebugMenu_Step_0
// 0 argument(s), 1 local(s)

keyPressEnter = keyboard_check_pressed(13);
keyReleaseEnter = keyboard_check_released(13);
keyPressUp = keyboard_check_pressed(38);
keyPressDown = keyboard_check_pressed(40);
if (keyPressEnter)
{
    if (canselect == 1)
    {
        if (menu == 1)
        {
            room_goto(16);
            canselect = 0;
        }
        if (menu == 2)
        {
            room_goto(33);
            canselect = 0;
        }
        if (menu == 3)
        {
            room_goto(rm_Act2Menu);
            canselect = 0;
        }
        if (menu == 4)
        {
            room_goto(rm_Act3Menu);
            canselect = 0;
        }
        if (menu == 5)
        {
            room_goto(rm_Act4Menu);
            canselect = 0;
        }
        if (menu == 6)
        {
            room_goto(rm_Act5Menu);
            canselect = 0;
        }
        if (menu == 7)
        {
            if (global.hellStage == 1)
            {
                room_goto(rm_TitleScreen1);
            }
            else
            {
                if (global.hellStage == 2)
                {
                    room_goto(rm_TitleScreen2);
                }
                else
                {
                    if (global.hellStage == 3)
                    {
                        room_goto(rm_TitleScreen3);
                    }
                    else
                    {
                        if (global.hellStage == 4)
                        {
                            room_goto(rm_TitleScreen4);
                        }
                        else
                        {
                            room_goto(rm_TitleScreen1);
                        }
                    }
                }
            }
            canselect = 0;
        }
    }
}
if (keyPressUp)
{
    audio_play_sound(26, 1, 0);
    if (menu > 1)
    {
        menu--;
    }
    else
    {
        menu = 7;
    }
}
if (keyPressDown)
{
    audio_play_sound(26, 1, 0);
    if (menu < 7)
    {
        menu++;
    }
    else
    {
        menu = 1;
    }
}
if (keyReleaseEnter)
{
    canselect = 1;
}
