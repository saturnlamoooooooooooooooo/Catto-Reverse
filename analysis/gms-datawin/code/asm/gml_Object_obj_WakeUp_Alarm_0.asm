// gml_Object_obj_WakeUp_Alarm_0
// 18 instructions, 92 bytes, 1 locals, 0 arguments

00000  pushi.i16         31
00004  conv.i.v          
00008  push.v            self.depth
00016  push.v            self.y
00024  pushi.i16         64
00028  sub.i.v           
00032  push.v            self.x
00040  pushi.i16         192
00044  sub.i.v           
00048  call.i            instance_create_depth (4 args)
00056  popz.v.d          
00060  pushi.i16         2552
00064  break             setowner
00068  pushi.i16         160
00072  conv.i.v          
00076  pushi.i16         -1
00080  pushi.i16         1
00084  pop.v.v           alarm [array]
