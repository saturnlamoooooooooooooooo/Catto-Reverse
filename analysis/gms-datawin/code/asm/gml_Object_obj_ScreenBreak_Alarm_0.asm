// gml_Object_obj_ScreenBreak_Alarm_0
// 26 instructions, 132 bytes, 1 locals, 0 arguments

00000  pushi.i16         30
00004  conv.i.v          
00008  call.i            instance_destroy (1 args)
00016  popz.v.d          
00020  pushi.i16         29
00024  conv.i.v          
00028  push.v            self.depth
00036  push.v            self.y
00044  push.v            self.x
00052  call.i            instance_create_depth (4 args)
00060  popz.v.d          
00064  pushi.i16         0
00068  conv.i.v          
00072  pushi.i16         1
00076  conv.i.v          
00080  pushi.i16         35
00084  conv.i.v          
00088  call.i            audio_play_sound (3 args)
00096  popz.v.d          
00100  pushi.i16         2552
00104  break             setowner
00108  pushi.i16         40
00112  conv.i.v          
00116  pushi.i16         -1
00120  pushi.i16         1
00124  pop.v.v           alarm [array]
