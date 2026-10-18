// gml_Object_obj_CloseHandler_Alarm_1
// 15 instructions, 68 bytes, 1 locals, 0 arguments

00000  pushi.i16         0
00004  conv.i.v          
00008  pushi.i16         1
00012  conv.i.v          
00016  pushi.i16         3
00020  conv.i.v          
00024  call.i            audio_play_sound (3 args)
00032  popz.v.d          
00036  pushi.i16         2552
00040  break             setowner
00044  pushi.i16         300
00048  conv.i.v          
00052  pushi.i16         -1
00056  pushi.i16         2
00060  pop.v.v           alarm [array]
