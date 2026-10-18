// gml_Object_obj_example_Other_63
// 0 argument(s), 5 local(s)

dialog = ds_map_find_value(async_load, "id");
status = ds_map_find_value(async_load, "status");
number = ds_map_find_value(async_load, "value");
result = ds_map_find_value(async_load, "result");
if (ret == dialog)
{
    if (!is_undefined(status))
    {
        if (!is_undefined(number))
        {
            show_message(string(number));
        }
        else
        {
            if (!is_undefined(result) && result != "")
            {
                show_message(string(result));
            }
            else
            {
                if (is_undefined(result))
                {
                    show_message(string(status));
                }
            }
        }
        alarm[0] = 2;
    }
}
