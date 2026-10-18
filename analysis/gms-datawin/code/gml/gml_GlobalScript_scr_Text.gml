// gml_GlobalScript_scr_Text
// 0 argument(s), 1 local(s)

function scr_Text(argument0, argument1, argument2)
{
    yPos = argument2 * 60;
    draw_text_color(x + 4, y + yPos, argument0, 0, 0, 0, 0, 1);
    draw_text_color(x + 6, y + yPos + 2, argument0, argument1, argument1, argument1, argument1, 1);
}
