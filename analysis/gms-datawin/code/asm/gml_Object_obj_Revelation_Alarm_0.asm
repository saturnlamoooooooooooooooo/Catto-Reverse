// gml_Object_obj_Revelation_Alarm_0
// 9 instructions, 56 bytes, 1 locals, 0 arguments

00000  pushi.i16         1
00004  pop.v.i           global.canMove
00012  pushi.i16         85
00016  conv.i.v          
00020  push.v            self.depth
00028  push.v            self.y
00036  push.v            self.x
00044  call.i            instance_create_depth (4 args)
00052  popz.v.d          
