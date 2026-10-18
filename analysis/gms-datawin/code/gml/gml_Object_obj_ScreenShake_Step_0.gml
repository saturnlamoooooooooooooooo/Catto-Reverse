// gml_Object_obj_ScreenShake_Step_0
// 0 argument(s), 1 local(s)

camera_set_view_pos(cam, view_x, view_y + random_range(-300, 300));
window_set_position(win_x, win_y + random_range(-300, 300));
obj_PlayerControl.image_index = 0;
obj_PlayerControl.image_speed = 0;
