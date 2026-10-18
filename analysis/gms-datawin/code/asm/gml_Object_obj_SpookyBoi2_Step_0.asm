// gml_Object_obj_SpookyBoi2_Step_0
// 9 instructions, 60 bytes, 1 locals, 0 arguments

00000  push.v            self.view_y
00008  push.v            self.view_x
00016  push.v            self.cam
00024  call.i            camera_set_view_pos (3 args)
00032  popz.v.d          
00036  pushi.i16         0
00040  pop.v.i           obj_PlayerControl.image_index
00048  pushi.i16         0
00052  pop.v.i           obj_PlayerControl.image_speed
