// gml_Object_obj_Warning_KeyPress_13
// 0 argument(s), 1 local(s)

if (global.trueEnded == 1)
{
    room_goto(2);
}
else
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
            if (global.hellStage == 5)
            {
                room_goto(15);
            }
            else
            {
                room_goto(2);
            }
        }
    }
}
