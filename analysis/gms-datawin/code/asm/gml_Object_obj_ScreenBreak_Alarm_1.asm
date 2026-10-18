// gml_Object_obj_ScreenBreak_Alarm_1
// 23 instructions, 112 bytes, 1 locals, 0 arguments

00000  pushi.i16         81
00004  conv.i.v          
00008  pushi.i16         -100
00012  conv.i.v          
00016  push.v            self.rand
00024  push.v            self.rand
00032  call.i            instance_create_depth (4 args)
00040  popz.v.d          
00044  pushi.i16         0
00048  conv.i.v          
00052  pushi.i16         1
00056  conv.i.v          
00060  pushi.i16         37
00064  conv.i.v          
00068  call.i            audio_play_sound (3 args)
00076  popz.v.d          
00080  pushi.i16         2552
00084  break             setowner
00088  pushi.i16         240
00092  conv.i.v          
00096  pushi.i16         -1
00100  pushi.i16         2
00104  pop.v.v           alarm [array]
