// gml_Object_obj_LoadingScreen_Create_0
// 0 argument(s), 1 local(s)

audio_stop_all();
instance_create_depth(x, y, depth, 129);
if (global.Level3Passed == 1)
{
    audio_play_sound(1, 1, 0);
}
else
{
    if (global.hellStage == 0)
    {
        audio_play_sound(40, 1, 0);
    }
    else
    {
        if (global.hellStage == 3)
        {
            audio_play_sound(31, 1, 0);
        }
    }
}
if (global.trueEnded == 1)
{
    global.levelName = "Hub - Daytime";
}
else
{
    if (global.hellStage == 2)
    {
        global.levelName = "Level 1 - Spring Hills";
    }
    else
    {
        if (global.hellStage == 3)
        {
            global.levelName = "Level 1 - ";
        }
        else
        {
            if (global.hellStage == 4)
            {
                global.levelName = "Hub - Nighttime";
            }
            else
            {
                if (global.Level1Passed == 1)
                {
                    global.levelName = "Level 2 - Pyramid Scheme";
                }
                else
                {
                    if (global.Level2Passed == 1)
                    {
                        global.levelName = "Level 3 - Catto Land";
                    }
                    else
                    {
                        if (global.Level3Passed == 1)
                        {
                            global.levelName = "Level 666 - DIEDIEDIEDIEDIEDIEDIEDIEDIEDIEDIEDIEDIEDIEDIEDIE";
                        }
                        else
                        {
                            global.levelName = "Level 1 - Mountain Range";
                        }
                    }
                }
            }
        }
    }
}
message1 = "Tip: Catto Boi is a good and loyal boi.";
message2 = "Tip: Cats have 9 lives.";
message3 = "Tip: Where am I?";
message4 = "Tip: If the game crashes, it's not over.";
message5 = "Tip: I feel like I'm dreaming...";
message6 = "Tip: Press CTRL to make Catto meow!";
if (global.trueEnded == 1)
{
    mission = "No mission for today! You're all done.";
}
else
{
    if (global.hellStage == 4)
    {
        mission = "No mission for today yet.";
    }
    else
    {
        if (global.Level3Passed == 1)
        {
            mission = "Mission: DIEDIEDIEDIEDIEDIEDIEDIEDIEDIEDIEDIEDIEDIEDIEDIE";
        }
        else
        {
            if (global.Level2Passed == 1)
            {
                mission = "Mission: Why do I keep losing my biscuits?";
            }
            else
            {
                if (global.Level1Passed == 1)
                {
                    mission = "Mission: Find Big Boi's friends' biscuits!";
                }
                else
                {
                    mission = "Mission: Find Big Boi's biscuits!";
                }
            }
        }
    }
}
if (global.Level3Passed == 1)
{
    chosenMessage = "Tip: DIEDIEDIEDIEDIEDIEDIEDIEDIEDIEDIEDIEDIEDIEDIEDIE";
}
else
{
    chosenMessage = choose(message1, message2, message3, message4, message5, message6);
}
alarm[0] = 200;
