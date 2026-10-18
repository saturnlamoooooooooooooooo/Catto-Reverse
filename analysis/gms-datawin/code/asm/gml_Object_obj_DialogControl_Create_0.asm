// gml_Object_obj_DialogControl_Create_0
// 17 instructions, 80 bytes, 1 locals, 0 arguments

00000  call.i            audio_stop_all (0 args)
00008  popz.v.d          
00012  pushi.i16         0
00016  conv.i.v          
00020  pushi.i16         1
00024  conv.i.v          
00028  pushi.i16         20
00032  conv.i.v          
00036  call.i            audio_play_sound (3 args)
00044  popz.v.d          
00048  pushi.i16         2552
00052  break             setowner
00056  pushi.i16         180
00060  conv.i.v          
00064  pushi.i16         -1
00068  pushi.i16         0
00072  pop.v.v           alarm [array]
