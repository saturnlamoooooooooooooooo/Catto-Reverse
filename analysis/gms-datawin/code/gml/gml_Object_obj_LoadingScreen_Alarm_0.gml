// gml_Object_obj_LoadingScreen_Alarm_0
// 0 argument(s), 1 local(s)

audio_stop_all();
if (global.trueEnded == 1)
{
    room_goto(36);
}
else
{
    if (global.hellStage == 2)
    {
        room_goto(25);
    }
    else
    {
        if (global.hellStage == 3)
        {
            room_goto(10);
        }
        else
        {
            if (global.hellStage == 4)
            {
                room_goto(44);
            }
            else
            {
                if (global.Level1Passed == 1)
                {
                    room_goto(22);
                }
                else
                {
                    if (global.Level2Passed == 1)
                    {
                        room_goto(23);
                    }
                    else
                    {
                        if (global.Level3Passed == 1)
                        {
                            room_goto(40);
                        }
                        else
                        {
                            room_goto(30);
                        }
                    }
                }
            }
        }
    }
}
