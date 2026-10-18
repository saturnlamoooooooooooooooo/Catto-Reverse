// gml_Object_obj_Act6Dialog10_Draw_0
// 16 instructions, 88 bytes, 1 locals, 0 arguments

00000  pushi.i16         1
00004  conv.i.v          
00008  call.i            draw_set_font (1 args)
00016  popz.v.d          
00020  pushi.i16         1
00024  conv.i.v          
00028  call.i            random (1 args)
00036  pushi.i16         1
00040  conv.i.v          
00044  call.i            random (1 args)
00052  push.i            16777215
00060  conv.i.v          
00064  push.s            "I can't.... \ntake it anymore..."
00072  conv.s.v          
00076  call.i            gml_Script_scr_TextXY (4 args)
00084  popz.v.d          
