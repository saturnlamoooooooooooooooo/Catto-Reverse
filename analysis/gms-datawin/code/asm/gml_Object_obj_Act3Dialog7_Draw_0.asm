// gml_Object_obj_Act3Dialog7_Draw_0
// 17 instructions, 88 bytes, 1 locals, 0 arguments

00000  pushi.i16         5
00004  conv.i.v          
00008  call.i            draw_set_font (1 args)
00016  popz.v.d          
00020  pushi.i16         0
00024  conv.i.v          
00028  pushi.i16         0
00032  conv.i.v          
00036  pushi.i16         255
00040  conv.i.v          
00044  push.s            "and I enjoy seeing "
00052  pushglb.v         global.Username
00060  add.v.s           
00064  push.s            " suffer too"
00072  add.s.v           
00076  call.i            gml_Script_scr_TextXY (4 args)
00084  popz.v.d          
