// gml_Object_obj_CattoBoiCrrupt_Alarm_0
// 0 argument(s), 1 local(s)

audio_resume_all();
global.canMove = 1;
actionPerform = 0;
if (place_free(x, y + 1))
{
    sprite_index = spriteJump;
}
else
{
    sprite_index = spriteStand;
}
