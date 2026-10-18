// gml_Object_obj_Pearl_Collision_obj_PlayerControl
// 0 argument(s), 1 local(s)

instance_destroy();
if (global.Pearls == 24)
{
    audio_play_sound(29, 1, 0);
}
else
{
    audio_play_sound(28, 1, 0);
}
global.Pearls++;
global.Score += 150;
