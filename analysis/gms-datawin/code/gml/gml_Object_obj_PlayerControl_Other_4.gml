// gml_Object_obj_PlayerControl_Other_4
// 0 argument(s), 1 local(s)

if (global.noMenu == 0)
{
    if (global.RoomID == "hub" || global.RoomID == "hubDay")
    {
        instance_create_depth(10, 10, depth, 55);
    }
    else
    {
        instance_create_depth(10, 10, depth, 103);
    }
}
