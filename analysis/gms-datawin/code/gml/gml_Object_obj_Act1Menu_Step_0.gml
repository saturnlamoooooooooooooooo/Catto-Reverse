// gml_Object_obj_Act1Menu_Step_0
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
            room_goto(30);
            canselect = 0;
        }
        if (menu == 2)
        {
            room_goto(22);
            canselect = 0;
        }
        if (menu == 3)
        {
            room_goto(40);
            canselect = 0;
        }
        if (menu == 4)
        {
            room_goto(rm_RedCrash);
            canselect = 0;
        }
        if (menu == 5)
        {
            room_goto(48);
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
        menu = 5;
    }
}
if (keyPressDown)
{
    audio_play_sound(26, 1, 0);
    if (menu < 5)
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
