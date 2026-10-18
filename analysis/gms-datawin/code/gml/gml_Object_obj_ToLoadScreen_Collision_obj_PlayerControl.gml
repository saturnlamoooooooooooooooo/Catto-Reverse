// gml_Object_obj_ToLoadScreen_Collision_obj_PlayerControl
// 0 argument(s), 1 local(s)

instance_create_depth(x, y, depth, 130);
if (global.Level == 1)
{
    global.Level1Passed = 1;
    global.Level2Passed = 0;
    global.Level3Passed = 0;
}
else
{
    if (global.Level == 2)
    {
        global.Level1Passed = 0;
        global.Level2Passed = 1;
        global.Level3Passed = 0;
    }
    else
    {
        if (global.Level == 3)
        {
            global.Level1Passed = 0;
            global.Level2Passed = 0;
            global.Level3Passed = 1;
            widget_set_caption("DIEDIEDIEDIEDIEDIEDIEDIEDIEDIEDIEDIE");
        }
    }
}
alarm[0] = 2;
