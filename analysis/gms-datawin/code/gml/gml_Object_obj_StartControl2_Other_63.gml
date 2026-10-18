// gml_Object_obj_StartControl2_Other_63
// 0 argument(s), 3 local(s)

dialog = ds_map_find_value(async_load, "id");
status = ds_map_find_value(async_load, "status");
if (ret == dialog)
{
    if (!is_undefined(status))
    {
        if (status == 0)
        {
            show_message("keep trying...");
            scr_ExitGame();
        }
        else
        {
            alarm[2] = 5;
        }
    }
}
