// gml_Object_obj_ShakeTrigger_Collision_obj_PlayerControl
// 13 instructions, 76 bytes, 1 locals, 0 arguments

00000  pushi.i16         74
00004  conv.i.v          
00008  call.i            instance_destroy (1 args)
00016  popz.v.d          
00020  pushi.i16         148
00024  conv.i.v          
00028  push.v            self.depth
00036  push.v            self.y
00044  push.v            self.x
00052  call.i            instance_create_depth (4 args)
00060  popz.v.d          
00064  pushi.i16         0
00068  pop.v.i           global.canMove
