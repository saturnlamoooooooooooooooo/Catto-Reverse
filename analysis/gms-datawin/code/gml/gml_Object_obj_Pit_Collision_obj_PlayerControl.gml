// gml_Object_obj_Pit_Collision_obj_PlayerControl
// 0 argument(s), 1 local(s)

if (global.hellStage >= 1 || global.Level3Passed == 1)
{
    room_goto(13);
}
else
{
    global.canMove = 0;
    if (global.Lives == 0)
    {
        audio_stop_all();
        audio_play_sound(33, 1, 0);
        audio_play_sound(6, 1, 0);
        instance_create_depth(x, y, depth, 127);
        alarm[1] = 750;
    }
    else
    {
        audio_stop_all();
        audio_play_sound(33, 1, 0);
        alarm[0] = 120;
        global.Lives--;
    }
}
