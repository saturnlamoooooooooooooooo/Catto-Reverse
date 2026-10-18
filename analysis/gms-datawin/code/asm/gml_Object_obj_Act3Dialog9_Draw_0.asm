// gml_Object_obj_Act3Dialog9_Draw_0
// 16 instructions, 84 bytes, 1 locals, 0 arguments

00000  pushi.i16         0
00004  conv.i.v          
00008  call.i            draw_set_font (1 args)
00016  popz.v.d          
00020  pushi.i16         1
00024  conv.i.v          
00028  call.i            random (1 args)
00036  pushi.i16         1
00040  conv.i.v          
00044  call.i            random (1 args)
00052  pushi.i16         255
00056  conv.i.v          
00060  push.s            "THAT'S ENOUGHHHHHHHHHHHHHHHHHHHHHHHHHHHHHH"
00068  conv.s.v          
00072  call.i            gml_Script_scr_TextXY (4 args)
00080  popz.v.d          
