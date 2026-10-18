// gml_GlobalScript_draw_tbutton
// 0 argument(s), 1 local(s)

function draw_tbutton(argument0, argument1, argument2)
{
    _x = argument0;
    _y = argument1;
    text = argument2;
    if (mouse_x >= _x)
    {
        if (mouse_y < _y)
        {
            goto label_200;
        }
        if (mouse_y >= _y + string_height(string_hash_to_newline(text)))
        {
            goto label_200;
        }
    }
    else
    {
    label_200:
    }
    over = /* stack underflow */;
    if (over)
    {
        draw_set_color(16711680);
    }
    else
    {
        draw_set_color(0);
    }
    draw_text(argument0, argument1, string_hash_to_newline(argument2));
    return over && mouse_check_button_released(1);
}
