// gml_GlobalScript_scr_Camera
// 117 instructions, 684 bytes, 1 locals, 0 arguments

00000  b                 label_636
00004  pushi.i16         106
00008  conv.i.v          
00012  call.i            instance_deactivate_object (1 args)
00020  popz.v.d          
00024  pushi.i16         56
00028  conv.i.v          
00032  call.i            instance_deactivate_object (1 args)
00040  popz.v.d          
00044  pushi.i16         131
00048  conv.i.v          
00052  call.i            instance_deactivate_object (1 args)
00060  popz.v.d          
00064  pushi.i16         8
00068  conv.i.v          
00072  call.i            instance_deactivate_object (1 args)
00080  popz.v.d          
00084  pushi.i16         -1
00088  pushi.i16         0
00092  push.v            view_camera [array]
00100  call.i            camera_get_view_x (1 args)
00108  pop.v.v           local._vx
00116  pushi.i16         -1
00120  pushi.i16         0
00124  push.v            view_camera [array]
00132  call.i            camera_get_view_y (1 args)
00140  pop.v.v           local._vy
00148  pushi.i16         -1
00152  pushi.i16         0
00156  push.v            view_camera [array]
00164  call.i            camera_get_view_width (1 args)
00172  pop.v.v           local._vw
00180  pushi.i16         -1
00184  pushi.i16         0
00188  push.v            view_camera [array]
00196  call.i            camera_get_view_height (1 args)
00204  pop.v.v           local._vh
00212  pushi.i16         1
00216  conv.i.v          
00220  pushloc.v         local._vh
00228  pushi.i16         128
00232  add.i.v           
00236  pushloc.v         local._vw
00244  pushi.i16         128
00248  add.i.v           
00252  pushloc.v         local._vy
00260  pushi.i16         64
00264  sub.i.v           
00268  pushloc.v         local._vx
00276  pushi.i16         64
00280  sub.i.v           
00284  call.i            instance_activate_region (5 args)
00292  popz.v.d          
00296  pushi.i16         -1
00300  pushi.i16         0
00304  push.v            view_camera [array]
00312  call.i            camera_get_view_x (1 args)
00320  pop.v.v           self.camx
00328  pushi.i16         -1
00332  pushi.i16         0
00336  push.v            view_camera [array]
00344  call.i            camera_get_view_y (1 args)
00352  pop.v.v           self.camy
00360  pushi.i16         -1
00364  pushi.i16         0
00368  push.v            view_camera [array]
00376  call.i            camera_get_view_height (1 args)
00384  pop.v.v           self.camh
00392  pushi.i16         -1
00396  pushi.i16         0
00400  push.v            view_camera [array]
00408  call.i            camera_get_view_width (1 args)
00416  pop.v.v           self.camw
00424  push.v            self.camx
00432  push.v            self.x
00440  push.v            self.camw
00448  pushi.i16         2
00452  conv.i.d          
00456  div.d.v           
00460  sub.v.v           
00464  push.v            self.camx
00472  sub.v.v           
00476  push.d            0.1
00488  mul.d.v           
00492  add.v.v           
00496  pop.v.v           self.camx
00504  push.v            self.camy
00512  push.v            self.y
00520  push.v            self.camh
00528  pushi.i16         2
00532  conv.i.d          
00536  div.d.v           
00540  sub.v.v           
00544  push.v            self.camy
00552  sub.v.v           
00556  push.d            0.1
00568  mul.d.v           
00572  add.v.v           
00576  pop.v.v           self.camy
00584  push.v            self.camy
00592  push.v            self.camx
00600  pushi.i16         -1
00604  pushi.i16         0
00608  push.v            view_camera [array]
00616  call.i            camera_set_view_pos (3 args)
00624  popz.v.d          
00628  break             setstatic
00632  exit.i.d          

label_636:
00636  push.i            [function] gml_Script_scr_Camera
00644  conv.i.v          
00648  pushi.i16         -1
00652  conv.i.v          
00656  call.i            method (2 args)
00664  dup.v.d           0
00668  pushi.i16         -1
00672  pop.v.v           scr_Camera [stacktop]
00680  popz.v.d          
