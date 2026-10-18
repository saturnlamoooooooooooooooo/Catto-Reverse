// gml_Object_obj_Creep_Create_0
// 15 instructions, 68 bytes, 1 locals, 0 arguments

00000  pushi.i16         2552
00004  break             setowner
00008  pushi.i16         360
00012  conv.i.v          
00016  pushi.i16         -1
00020  pushi.i16         0
00024  pop.v.v           alarm [array]
00032  pushi.i16         0
00036  conv.i.v          
00040  pushi.i16         1
00044  conv.i.v          
00048  pushi.i16         7
00052  conv.i.v          
00056  call.i            audio_play_sound (3 args)
00064  popz.v.d          
