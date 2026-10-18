// gml_Object_obj_ScreenShake_Step_0
// 25 instructions, 144 bytes, 1 locals, 0 arguments

00000  push.v            self.view_y
00008  pushi.i16         300
00012  conv.i.v          
00016  pushi.i16         -300
00020  conv.i.v          
00024  call.i            random_range (2 args)
00032  add.v.v           
00036  push.v            self.view_x
00044  push.v            self.cam
00052  call.i            camera_set_view_pos (3 args)
00060  popz.v.d          
00064  push.v            self.win_y
00072  pushi.i16         300
00076  conv.i.v          
00080  pushi.i16         -300
00084  conv.i.v          
00088  call.i            random_range (2 args)
00096  add.v.v           
00100  push.v            self.win_x
00108  call.i            window_set_position (2 args)
00116  popz.v.d          
00120  pushi.i16         0
00124  pop.v.i           obj_PlayerControl.image_index
00132  pushi.i16         0
00136  pop.v.i           obj_PlayerControl.image_speed
