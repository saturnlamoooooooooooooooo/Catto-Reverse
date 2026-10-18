// gml_Object_obj_ScreenBreak_Alarm_2
// 13 instructions, 64 bytes, 1 locals, 0 arguments

00000  call.i            audio_stop_all (0 args)
00008  popz.v.d          
00012  pushi.i16         0
00016  conv.i.v          
00020  call.i            window_set_fullscreen (1 args)
00028  popz.v.d          
00032  pushi.i16         2552
00036  break             setowner
00040  pushi.i16         5
00044  conv.i.v          
00048  pushi.i16         -1
00052  pushi.i16         3
00056  pop.v.v           alarm [array]
