// gml_Object_obj_DialogAct5Control2_Alarm_5
// 18 instructions, 96 bytes, 1 locals, 0 arguments

00000  pushi.i16         9
00004  conv.i.v          
00008  call.i            instance_destroy (1 args)
00016  popz.v.d          
00020  pushi.i16         28
00024  conv.i.v          
00028  push.v            self.depth
00036  push.v            self.y
00044  push.v            self.x
00052  call.i            instance_create_depth (4 args)
00060  popz.v.d          
00064  pushi.i16         2552
00068  break             setowner
00072  pushi.i16         120
00076  conv.i.v          
00080  pushi.i16         -1
00084  pushi.i16         6
00088  pop.v.v           alarm [array]
