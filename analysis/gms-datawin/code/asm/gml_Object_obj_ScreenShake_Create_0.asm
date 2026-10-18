// gml_Object_obj_ScreenShake_Create_0
// 33 instructions, 196 bytes, 1 locals, 0 arguments

00000  pushi.i16         -900
00004  pop.v.i           self.depth
00012  call.i            audio_stop_all (0 args)
00020  popz.v.d          
00024  pushi.i16         1
00028  conv.i.v          
00032  pushi.i16         1
00036  conv.i.v          
00040  pushi.i16         30
00044  conv.i.v          
00048  call.i            audio_play_sound (3 args)
00056  popz.v.d          
00060  pushi.i16         -1
00064  pushi.i16         0
00068  push.v            view_camera [array]
00076  pop.v.v           self.cam
00084  push.v            self.cam
00092  call.i            camera_get_view_x (1 args)
00100  pop.v.v           self.view_x
00108  push.v            self.cam
00116  call.i            camera_get_view_y (1 args)
00124  pop.v.v           self.view_y
00132  call.i            window_get_x (0 args)
00140  pop.v.v           self.win_x
00148  call.i            window_get_y (0 args)
00156  pop.v.v           self.win_y
00164  pushi.i16         2552
00168  break             setowner
00172  pushi.i16         180
00176  conv.i.v          
00180  pushi.i16         -1
00184  pushi.i16         0
00188  pop.v.v           alarm [array]
