// gml_Object_obj_TitleMenuCatto1_Step_0
// 0 argument(s), 1 local(s)

keyPressEnter = keyboard_check_pressed(13);
keyReleaseEnter = keyboard_check_released(13);
keyPressUp = keyboard_check_pressed(38);
keyPressDown = keyboard_check_pressed(40);
if (keyPressEnter)
{
    if (canselect == 1)
    {
        switch (menu)
        {
            case 1:
                room_goto(47);
                canselect = 0;
            case 2:
                scr_ExitGame();
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
        menu = 2;
    }
}
if (keyPressDown)
{
    audio_play_sound(26, 1, 0);
    if (menu < 2)
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
