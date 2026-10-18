// gml_Object_obj_TriggerRevelation_Collision_obj_PlayerControl
// 13 instructions, 72 bytes, 1 locals, 0 arguments

00000  pushi.i16         51
00004  conv.i.v          
00008  call.i            instance_destroy (1 args)
00016  popz.v.d          
00020  pushi.i16         99
00024  conv.i.v          
00028  push.v            self.depth
00036  push.v            obj_PlayerControl.y
00044  push.v            obj_PlayerControl.x
00052  pushi.i16         128
00056  add.i.v           
00060  call.i            instance_create_depth (4 args)
00068  popz.v.d          
