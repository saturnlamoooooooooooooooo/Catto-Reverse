// gml_Object_obj_NextRoom_Collision_obj_PlayerControl
// 14 instructions, 76 bytes, 1 locals, 0 arguments

00000  pushi.i16         130
00004  conv.i.v          
00008  push.v            self.depth
00016  push.v            self.y
00024  push.v            self.x
00032  call.i            instance_create_depth (4 args)
00040  popz.v.d          
00044  pushi.i16         2552
00048  break             setowner
00052  pushi.i16         2
00056  conv.i.v          
00060  pushi.i16         -1
00064  pushi.i16         0
00068  pop.v.v           alarm [array]
