// gml_Object_obj_ScreenShake_Create_0
// 0 argument(s), 1 local(s)

depth = -900;
audio_stop_all();
audio_play_sound(30, 1, 1);
cam = view_camera[0];
view_x = camera_get_view_x(cam);
view_y = camera_get_view_y(cam);
win_x = window_get_x();
win_y = window_get_y();
alarm[0] = 180;
