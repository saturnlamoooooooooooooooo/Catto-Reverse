// gml_Object_obj_SpookyBoi2_Create_0
// 29 instructions, 164 bytes, 1 locals, 0 arguments

00000  pushi.i16         0
00004  pop.v.i           global.canMove
00012  call.i            audio_pause_all (0 args)
00020  popz.v.d          
00024  pushi.i16         0
00028  conv.i.v          
00032  pushi.i16         1
00036  conv.i.v          
00040  pushi.i16         41
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
00132  pushi.i16         2552
00136  break             setowner
00140  pushi.i16         30
00144  conv.i.v          
00148  pushi.i16         -1
00152  pushi.i16         0
00156  pop.v.v           alarm [array]
