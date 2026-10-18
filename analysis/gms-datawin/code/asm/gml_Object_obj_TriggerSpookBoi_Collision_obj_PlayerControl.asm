// gml_Object_obj_TriggerSpookBoi_Collision_obj_PlayerControl
// 11 instructions, 64 bytes, 1 locals, 0 arguments

00000  call.i            instance_destroy (0 args)
00008  popz.v.d          
00012  pushi.i16         91
00016  conv.i.v          
00020  push.v            self.depth
00028  push.v            self.y
00036  push.v            obj_PlayerControl.x
00044  pushi.i16         128
00048  add.i.v           
00052  call.i            instance_create_depth (4 args)
00060  popz.v.d          
