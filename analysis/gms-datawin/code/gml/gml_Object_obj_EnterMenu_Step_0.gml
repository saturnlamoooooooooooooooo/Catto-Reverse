// gml_Object_obj_EnterMenu_Step_0
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
            audio_resume_all();
            instance_destroy();
            instance_destroy(147);
            instance_activate_all();
            canselect = 0;
        }
        if (menu == 2)
        {
            room_restart();
            canselect = 0;
        }
        if (menu == 3)
        {
            if (global.hellStage == 2)
            {
                room_goto(26);
            }
            else
            {
                if (global.hellStage == 3)
                {
                    room_goto(38);
                }
                else
                {
                    room_goto(2);
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
        menu = 3;
    }
}
if (keyPressDown)
{
    audio_play_sound(26, 1, 0);
    if (menu < 3)
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
