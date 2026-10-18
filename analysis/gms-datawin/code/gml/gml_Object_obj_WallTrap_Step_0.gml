// gml_Object_obj_WallTrap_Step_0
// 0 argument(s), 1 local(s)

if (global.Pearls == 25)
{
    instance_destroy(self);
}
else
{
    if (global.TinyBisc == 25)
    {
        instance_destroy(self);
    }
    else
    {
        if (global.CatFood == 5)
        {
            instance_destroy(self);
        }
    }
}
