// gml_Object_obj_WakeUp_Alarm_2
// 22 instructions, 112 bytes, 1 locals, 0 arguments

00000  pushi.i16         154
00004  conv.i.v          
00008  call.i            instance_destroy (1 args)
00016  popz.v.d          
00020  pushi.i16         62
00024  conv.i.v          
00028  push.v            self.depth
00036  push.v            self.y
00044  pushi.i16         64
00048  sub.i.v           
00052  push.v            self.x
00060  pushi.i16         192
00064  sub.i.v           
00068  call.i            instance_create_depth (4 args)
00076  popz.v.d          
00080  pushi.i16         2552
00084  break             setowner
00088  pushi.i16         160
00092  conv.i.v          
00096  pushi.i16         -1
00100  pushi.i16         3
00104  pop.v.v           alarm [array]
