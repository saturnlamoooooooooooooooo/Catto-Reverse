// gml_Object_obj_BANGING_Alarm_1
// 9 instructions, 56 bytes, 1 locals, 0 arguments

00000  call.i            instance_destroy (0 args)
00008  popz.v.d          
00012  pushi.i16         70
00016  conv.i.v          
00020  push.v            self.depth
00028  push.v            self.y
00036  push.v            self.x
00044  call.i            instance_create_depth (4 args)
00052  popz.v.d          
