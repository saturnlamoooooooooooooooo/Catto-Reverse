// gml_Object_obj_StartControl_Alarm_1
// 17 instructions, 88 bytes, 1 locals, 0 arguments

00000  call.i            audio_stop_all (0 args)
00008  popz.v.d          
00012  push.s            "eternal"
00020  conv.s.v          
00024  call.i            widget_set_caption (1 args)
00032  popz.v.d          
00036  pushi.i16         1
00040  conv.i.v          
00044  call.i            gml_Script_window_set_visible_w (1 args)
00052  popz.v.d          
00056  pushi.i16         2552
00060  break             setowner
00064  pushi.i16         5
00068  conv.i.v          
00072  pushi.i16         -1
00076  pushi.i16         2
00080  pop.v.v           alarm [array]
