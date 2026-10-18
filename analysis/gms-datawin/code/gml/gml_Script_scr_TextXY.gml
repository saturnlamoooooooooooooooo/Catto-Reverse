// gml_Script_scr_TextXY
// 4 argument(s), 0 local(s)

xPos = argument2 * 60;
yPos = argument3 * 60;
draw_text_color(x + xPos, y + yPos, argument0, 0, 0, 0, 0, 1);
draw_text_color(x + xPos + 2, y + yPos + 2, argument0, argument1, argument1, argument1, argument1, 1);
