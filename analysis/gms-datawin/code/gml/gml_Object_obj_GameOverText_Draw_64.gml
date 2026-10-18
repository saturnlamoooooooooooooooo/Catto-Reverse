// gml_Object_obj_GameOverText_Draw_64
// 0 argument(s), 1 local(s)

draw_set_alpha(0.5);
draw_set_color(0);
draw_rectangle(0, 0, room_width, room_height, 0);
draw_set_alpha(1);
draw_set_font(3);
scr_TextSmallXY("GAME OVER...", 16776960, 19, 12);
