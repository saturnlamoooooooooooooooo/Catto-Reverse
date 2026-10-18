// gml_Object_obj_Freeze_Create_0
// 27 instructions, 152 bytes, 1 locals, 0 arguments

00000  call.i            audio_stop_all (0 args)
00008  popz.v.d          
00012  pushi.i16         0
00016  conv.i.v          
00020  pushi.i16         1
00024  conv.i.v          
00028  pushi.i16         37
00032  conv.i.v          
00036  call.i            audio_play_sound (3 args)
00044  popz.v.d          
00048  pushi.i16         -1
00052  pushi.i16         0
00056  push.v            view_camera [array]
00064  pop.v.v           self.cam
00072  push.v            self.cam
00080  call.i            camera_get_view_x (1 args)
00088  pop.v.v           self.view_x
00096  push.v            self.cam
00104  call.i            camera_get_view_y (1 args)
00112  pop.v.v           self.view_y
00120  pushi.i16         2552
00124  break             setowner
00128  pushi.i16         240
00132  conv.i.v          
00136  pushi.i16         -1
00140  pushi.i16         0
00144  pop.v.v           alarm [array]
