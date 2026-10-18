// gml_Object_obj_ThankYouText_Draw_0
// 15 instructions, 80 bytes, 1 locals, 0 arguments

00000  pushi.i16         1
00004  conv.i.v          
00008  call.i            draw_set_font (1 args)
00016  popz.v.d          
00020  pushi.i16         0
00024  conv.i.v          
00028  pushi.i16         0
00032  conv.i.v          
00036  push.i            16711935
00044  conv.i.v          
00048  push.s            "Thank you for waking Catto up "
00056  pushglb.v         global.Username
00064  add.v.s           
00068  call.i            gml_Script_scr_TextXY (4 args)
00076  popz.v.d          
