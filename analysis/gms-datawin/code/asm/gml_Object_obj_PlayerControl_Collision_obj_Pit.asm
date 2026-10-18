// gml_Object_obj_PlayerControl_Collision_obj_Pit
// 11 instructions, 76 bytes, 1 locals, 0 arguments

00000  pushi.i16         0
00004  pop.v.i           self.hsp
00012  call.i            @@This@@ (0 args)
00020  call.i            instance_deactivate_object (1 args)
00028  popz.v.d          
00032  push.v            self.playerDeath
00040  push.v            self.depth
00048  push.v            self.y
00056  push.v            self.x
00064  call.i            instance_create_depth (4 args)
00072  popz.v.d          
