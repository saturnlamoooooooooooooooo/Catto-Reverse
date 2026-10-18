// gml_Object_obj_GameOverText_Draw_64
// 36 instructions, 192 bytes, 1 locals, 0 arguments

00000  push.d            0.5
00012  conv.d.v          
00016  call.i            draw_set_alpha (1 args)
00024  popz.v.d          
00028  pushi.i16         0
00032  conv.i.v          
00036  call.i            draw_set_color (1 args)
00044  popz.v.d          
00048  pushi.i16         0
00052  conv.i.v          
00056  pushbltn.v        self.room_height
00064  pushbltn.v        self.room_width
00072  pushi.i16         0
00076  conv.i.v          
00080  pushi.i16         0
00084  conv.i.v          
00088  call.i            draw_rectangle (5 args)
00096  popz.v.d          
00100  pushi.i16         1
00104  conv.i.v          
00108  call.i            draw_set_alpha (1 args)
00116  popz.v.d          
00120  pushi.i16         3
00124  conv.i.v          
00128  call.i            draw_set_font (1 args)
00136  popz.v.d          
00140  pushi.i16         12
00144  conv.i.v          
00148  pushi.i16         19
00152  conv.i.v          
00156  push.i            16776960
00164  conv.i.v          
00168  push.s            "GAME OVER..."
00176  conv.s.v          
00180  call.i            gml_Script_scr_TextSmallXY (4 args)
00188  popz.v.d          
