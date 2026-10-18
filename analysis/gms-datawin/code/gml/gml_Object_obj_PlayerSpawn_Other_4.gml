// gml_Object_obj_PlayerSpawn_Other_4
// 0 argument(s), 1 local(s)

if (global.Character == 0)
{
    instance_create_depth(x, y, depth, 123);
}
else
{
    if (global.Character == 666)
    {
        instance_create_depth(x, y, depth, 124);
    }
    else
    {
        instance_create_depth(x, y, depth, 121);
    }
}
