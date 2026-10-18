// gml_Script_scr_InitMisc

if (global.trueEnded == 1)
{
    window_set_caption("Thank you " + global.Username);
    global.Lives = 9;
    global.Character = 1;
}
else
{
    if (global.tryCount == 2)
    {
        window_set_caption("dreaming");
        global.Lives = 9;
        global.Character = 1;
    }
    else
    {
        if (global.hellStage == 2)
        {
            window_set_caption("The Adventures of Catto Boi");
            global.Lives = 9;
            global.Character = 1;
        }
        else
        {
            if (global.hellStage == 3)
            {
                window_set_caption("Catto Boi's Bizarre Adventure");
                global.Lives = 9;
                global.Character = 1;
            }
            else
            {
                if (global.hellStage == 5)
                {
                    window_set_caption("I'M SORRYI'M SORRYI'M SORRYI'M SORRYI'M SORRYI'M SORRYI'M SORRYI'M SORRYI'M SORRYI'M SORRYI'M SORRY");
                    global.Lives = "I'M SORRY";
                    global.Character = 666;
                }
                else
                {
                    window_set_caption("Catto Boi: Journey to Catto Land");
                    global.Lives = 9;
                    global.Character = 1;
                }
            }
        }
    }
}
audio_stop_all();
instance_create_depth(x, y, depth, 129);
