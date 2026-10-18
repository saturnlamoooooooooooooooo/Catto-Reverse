// gml_Object_obj_DialogTest_Other_63
// 0 argument(s), 3 local(s)

dialog = ds_map_find_value(async_load, "id");
result = ds_map_find_value(async_load, "result");
if (ret == dialog)
{
    if (!is_undefined(result))
    {
        if (result != "64 65 61 64")
        {
            23.alarm[4] = 5;
        }
        else
        {
            23.alarm[3] = 5;
        }
    }
}
