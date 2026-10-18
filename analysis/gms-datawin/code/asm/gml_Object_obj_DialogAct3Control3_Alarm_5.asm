// gml_Object_obj_DialogAct3Control3_Alarm_5
// 26 instructions, 132 bytes, 1 locals, 0 arguments

00000  pushi.i16         0
00004  conv.i.v          
00008  pushi.i16         1
00012  conv.i.v          
00016  pushi.i16         13
00020  conv.i.v          
00024  call.i            audio_play_sound (3 args)
00032  popz.v.d          
00036  pushi.i16         82
00040  conv.i.v          
00044  call.i            instance_destroy (1 args)
00052  popz.v.d          
00056  pushi.i16         14
00060  conv.i.v          
00064  push.v            self.depth
00072  push.v            self.y
00080  push.v            self.x
00088  call.i            instance_create_depth (4 args)
00096  popz.v.d          
00100  pushi.i16         2552
00104  break             setowner
00108  pushi.i16         100
00112  conv.i.v          
00116  pushi.i16         -1
00120  pushi.i16         6
00124  pop.v.v           alarm [array]
