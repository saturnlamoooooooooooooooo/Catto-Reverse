// gml_Object_obj_Time_Draw_64
// 0 argument(s), 1 local(s)

draw_set_font(1);
scr_TextSmallXY(date_time_string(date_current_datetime()), 16777215, 1, 1);
scr_TextSmallXY(string(current_day) + " " + month + " " + string(current_year), 16777215, 1, 3);
