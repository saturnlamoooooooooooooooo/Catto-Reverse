// gml_Script_scr_Camera
// 107 instructions, 684 bytes, 4 locals, 0 arguments

00000  pushi.i16         106
00004  conv.i.v          
00008  call.i            instance_deactivate_object (1 args)
00016  popz.v.d          
00020  pushi.i16         56
00024  conv.i.v          
00028  call.i            instance_deactivate_object (1 args)
00036  popz.v.d          
00040  pushi.i16         131
00044  conv.i.v          
00048  call.i            instance_deactivate_object (1 args)
00056  popz.v.d          
00060  pushi.i16         8
00064  conv.i.v          
00068  call.i            instance_deactivate_object (1 args)
00076  popz.v.d          
00080  pushi.i16         -1
00084  pushi.i16         0
00088  push.v            view_camera [array]
00096  call.i            camera_get_view_x (1 args)
00104  pop.v.v           local._vx
00112  pushi.i16         -1
00116  pushi.i16         0
00120  push.v            view_camera [array]
00128  call.i            camera_get_view_y (1 args)
00136  pop.v.v           local._vy
00144  pushi.i16         -1
00148  pushi.i16         0
00152  push.v            view_camera [array]
00160  call.i            camera_get_view_width (1 args)
00168  pop.v.v           local._vw
00176  pushi.i16         -1
00180  pushi.i16         0
00184  push.v            view_camera [array]
00192  call.i            camera_get_view_height (1 args)
00200  pop.v.v           local._vh
00208  pushi.i16         1
00212  conv.i.v          
00216  pushloc.v         local._vh
00224  pushi.i16         128
00228  add.i.v           
00232  pushloc.v         local._vw
00240  pushi.i16         128
00244  add.i.v           
00248  pushloc.v         local._vy
00256  pushi.i16         64
00260  sub.i.v           
00264  pushloc.v         local._vx
00272  pushi.i16         64
00276  sub.i.v           
00280  call.i            instance_activate_region (5 args)
00288  popz.v.d          
00292  pushi.i16         -1
00296  pushi.i16         0
00300  push.v            view_camera [array]
00308  call.i            camera_get_view_x (1 args)
00316  pop.v.v           self.camx
00324  pushi.i16         -1
00328  pushi.i16         0
00332  push.v            view_camera [array]
00340  call.i            camera_get_view_y (1 args)
00348  pop.v.v           self.camy
00356  pushi.i16         -1
00360  pushi.i16         0
00364  push.v            view_camera [array]
00372  call.i            camera_get_view_height (1 args)
00380  pop.v.v           self.camh
00388  pushi.i16         -1
00392  pushi.i16         0
00396  push.v            view_camera [array]
00404  call.i            camera_get_view_width (1 args)
00412  pop.v.v           self.camw
00420  push.v            self.camx
00428  push.v            self.x
00436  push.v            self.camw
00444  pushi.i16         2
00448  conv.i.d          
00452  div.d.v           
00456  sub.v.v           
00460  push.v            self.camx
00468  sub.v.v           
00472  push.d            0.1
00484  mul.d.v           
00488  add.v.v           
00492  pop.v.v           self.camx
00500  push.v            self.camy
00508  push.v            self.y
00516  push.v            self.camh
00524  pushi.i16         2
00528  conv.i.d          
00532  div.d.v           
00536  sub.v.v           
00540  push.v            self.camy
00548  sub.v.v           
00552  push.d            0.1
00564  mul.d.v           
00568  add.v.v           
00572  pop.v.v           self.camy
00580  push.v            self.camy
00588  push.v            self.camx
00596  pushi.i16         -1
00600  pushi.i16         0
00604  push.v            view_camera [array]
00612  call.i            camera_set_view_pos (3 args)
00620  popz.v.d          
00624  break             setstatic
00628  exit.i.d          
