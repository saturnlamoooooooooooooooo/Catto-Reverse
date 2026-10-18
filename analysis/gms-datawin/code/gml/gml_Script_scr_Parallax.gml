// gml_Script_scr_Parallax

sky = "sky";
water = "water";
water_1 = "water_1";
background_1 = "background_1";
background_2 = "background_2";
background_3 = "background_3";
background_4 = "background_4";
background_5 = "background_5";
layer_x(sky, camera_get_view_x(view_camera[0]) * 0.95);
layer_x(background_1, camera_get_view_x(view_camera[0]) * 0.8);
layer_x(background_2, camera_get_view_x(view_camera[0]) * 0.75);
layer_x(background_3, camera_get_view_x(view_camera[0]) * 0.7);
layer_x(background_4, camera_get_view_x(view_camera[0]) * 0.65);
layer_x(background_5, camera_get_view_x(view_camera[0]) * 0.6);
layer_x(water, camera_get_view_x(view_camera[0]) * 0.55);
layer_x(water_1, camera_get_view_x(view_camera[0]) * 0.55);
layer_y(sky, camera_get_view_y(view_camera[0]) * 0.95);
layer_y(background_1, camera_get_view_y(view_camera[0]) * 0.8 + 150);
layer_y(background_2, camera_get_view_y(view_camera[0]) * 0.75 + 250);
layer_y(background_3, camera_get_view_y(view_camera[0]) * 0.7 + 350);
layer_y(background_4, camera_get_view_y(view_camera[0]) * 0.65 + 450);
layer_y(background_5, camera_get_view_y(view_camera[0]) * 0.6 + 550);
layer_y(water, camera_get_view_y(view_camera[0]) * 0.55 + 1050);
layer_y(water_1, camera_get_view_y(view_camera[0]) * 0.55 + 1450);
