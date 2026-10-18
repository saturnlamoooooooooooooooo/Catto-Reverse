// gml_Object_obj_LevelTitlePause_Draw_64
// 17 instructions, 88 bytes, 1 locals, 0 arguments

00000  pushi.i16         1
00004  conv.i.v          
00008  call.i            draw_set_alpha (1 args)
00016  popz.v.d          
00020  pushi.i16         2
00024  conv.i.v          
00028  call.i            draw_set_font (1 args)
00036  popz.v.d          
00040  pushi.i16         2
00044  conv.i.v          
00048  pushi.i16         2
00052  conv.i.v          
00056  push.i            16711935
00064  conv.i.v          
00068  pushglb.v         global.levelName
00076  call.i            gml_Script_scr_TextSmallXY (4 args)
00084  popz.v.d          
