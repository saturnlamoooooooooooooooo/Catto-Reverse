// gml_Object_obj_Revelation_Create_0
// 17 instructions, 80 bytes, 1 locals, 0 arguments

00000  pushi.i16         0
00004  pop.v.i           global.canMove
00012  pushi.i16         0
00016  conv.i.v          
00020  pushi.i16         1
00024  conv.i.v          
00028  pushi.i16         38
00032  conv.i.v          
00036  call.i            audio_play_sound (3 args)
00044  popz.v.d          
00048  pushi.i16         2552
00052  break             setowner
00056  pushi.i16         120
00060  conv.i.v          
00064  pushi.i16         -1
00068  pushi.i16         0
00072  pop.v.v           alarm [array]
