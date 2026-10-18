// gml_Object_obj_StartControl_Alarm_3
// 16 instructions, 88 bytes, 1 locals, 0 arguments

00000  push.s            "I can do far worse you know"
00008  conv.s.v          
00012  call.i            show_message (1 args)
00020  popz.v.d          
00024  push.s            "don't cross the line with me "
00032  pushglb.v         global.Username
00040  add.v.s           
00044  call.i            show_message (1 args)
00052  popz.v.d          
00056  pushi.i16         2552
00060  break             setowner
00064  pushi.i16         5
00068  conv.i.v          
00072  pushi.i16         -1
00076  pushi.i16         4
00080  pop.v.v           alarm [array]
