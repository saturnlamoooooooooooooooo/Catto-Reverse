// gml_Object_obj_StartControl_Alarm_0
// 19 instructions, 88 bytes, 1 locals, 0 arguments

00000  pushi.i16         0
00004  conv.i.v          
00008  call.i            gml_Script_window_set_visible_w (1 args)
00016  popz.v.d          
00020  pushi.i16         0
00024  conv.i.v          
00028  pushi.i16         1
00032  conv.i.v          
00036  pushi.i16         3
00040  conv.i.v          
00044  call.i            audio_play_sound (3 args)
00052  popz.v.d          
00056  pushi.i16         2552
00060  break             setowner
00064  pushi.i16         300
00068  conv.i.v          
00072  pushi.i16         -1
00076  pushi.i16         1
00080  pop.v.v           alarm [array]
