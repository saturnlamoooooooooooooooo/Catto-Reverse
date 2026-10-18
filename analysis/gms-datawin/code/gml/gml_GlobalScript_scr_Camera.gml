// gml_GlobalScript_scr_Camera
// 0 argument(s), 1 local(s)

function scr_Camera()
{
    instance_deactivate_object(106);
    instance_deactivate_object(56);
    instance_deactivate_object(131);
    instance_deactivate_object(8);
    _vx = camera_get_view_x(view_camera[0]);
    _vy = camera_get_view_y(view_camera[0]);
    _vw = camera_get_view_width(view_camera[0]);
    _vh = camera_get_view_height(view_camera[0]);
    instance_activate_region(_vx - 64, _vy - 64, _vw + 128, _vh + 128, 1);
    camx = camera_get_view_x(view_camera[0]);
    camy = camera_get_view_y(view_camera[0]);
    camh = camera_get_view_height(view_camera[0]);
    camw = camera_get_view_width(view_camera[0]);
    camx += (x - camw / 2 - camx) * 0.1;
    camy += (y - camh / 2 - camy) * 0.1;
    camera_set_view_pos(view_camera[0], camx, camy);
}
