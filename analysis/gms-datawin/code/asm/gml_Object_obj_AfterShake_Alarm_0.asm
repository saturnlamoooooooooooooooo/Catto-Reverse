// gml_Object_obj_AfterShake_Alarm_0
// 15 instructions, 80 bytes, 1 locals, 0 arguments

00000  push.s            "I AM IMMORTAL"
00008  conv.s.v          
00012  call.i            widget_set_caption (1 args)
00020  popz.v.d          
00024  push.s            "I AM IMMORTAL I AM IMMORTAL I AM IMMORTAL I AM IMMORTAL I AM IMMORTAL I AM IMMORTAL I AM IMMORTAL I AM IMMORTAL "
00032  conv.s.v          
00036  call.i            show_message (1 args)
00044  popz.v.d          
00048  pushi.i16         2552
00052  break             setowner
00056  pushi.i16         240
00060  conv.i.v          
00064  pushi.i16         -1
00068  pushi.i16         1
00072  pop.v.v           alarm [array]
