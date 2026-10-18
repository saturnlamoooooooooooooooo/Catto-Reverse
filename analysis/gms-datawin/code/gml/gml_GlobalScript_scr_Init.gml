// gml_GlobalScript_scr_Init
// 0 argument(s), 1 local(s)

function scr_Init()
{
    scr_CheckState();
    scr_CheckTry();
    global.Username = environment_get_variable("USERNAME");
    scr_InitMisc();
    randomize();
    if (global.trueEnded == 0)
    {
        if (global.fakeEnded == 1)
        {
            room_goto(18);
        }
        else
        {
            if (global.hellStage == 1)
            {
                room_goto(0);
            }
            else
            {
                if (global.hellStage == 4)
                {
                    room_goto(28);
                }
                else
                {
                    room_goto(46);
                }
            }
        }
    }
    else
    {
        room_goto(46);
    }
    if (global.fakeEnded == 1)
    {
        if (global.tryCount == 2)
        {
            room_goto(3);
        }
        else
        {
            global.tryCount++;
        }
    }
    scr_writeTryCount(global.tryCount);
    draw_set_font(1);
    global.RoomID = 0;
    global.canMove = 1;
    global.noMenu = 0;
    global.levelName = "";
    global.Score = 0;
    global.Level = 0;
    global.Level1Passed = 0;
    global.Level2Passed = 0;
    global.Level3Passed = 0;
    instance_create_depth(x, y, depth, 39);
}
