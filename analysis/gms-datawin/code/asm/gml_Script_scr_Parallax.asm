// gml_Script_scr_Parallax
// 176 instructions, 1204 bytes, 0 locals, 0 arguments

00000  push.s            "sky"
00008  pop.v.s           self.sky
00016  push.s            "water"
00024  pop.v.s           self.water
00032  push.s            "water_1"
00040  pop.v.s           self.water_1
00048  push.s            "background_1"
00056  pop.v.s           self.background_1
00064  push.s            "background_2"
00072  pop.v.s           self.background_2
00080  push.s            "background_3"
00088  pop.v.s           self.background_3
00096  push.s            "background_4"
00104  pop.v.s           self.background_4
00112  push.s            "background_5"
00120  pop.v.s           self.background_5
00128  pushi.i16         -1
00132  pushi.i16         0
00136  push.v            view_camera [array]
00144  call.i            camera_get_view_x (1 args)
00152  push.d            0.95
00164  mul.d.v           
00168  push.v            self.sky
00176  call.i            layer_x (2 args)
00184  popz.v.d          
00188  pushi.i16         -1
00192  pushi.i16         0
00196  push.v            view_camera [array]
00204  call.i            camera_get_view_x (1 args)
00212  push.d            0.8
00224  mul.d.v           
00228  push.v            self.background_1
00236  call.i            layer_x (2 args)
00244  popz.v.d          
00248  pushi.i16         -1
00252  pushi.i16         0
00256  push.v            view_camera [array]
00264  call.i            camera_get_view_x (1 args)
00272  push.d            0.75
00284  mul.d.v           
00288  push.v            self.background_2
00296  call.i            layer_x (2 args)
00304  popz.v.d          
00308  pushi.i16         -1
00312  pushi.i16         0
00316  push.v            view_camera [array]
00324  call.i            camera_get_view_x (1 args)
00332  push.d            0.7
00344  mul.d.v           
00348  push.v            self.background_3
00356  call.i            layer_x (2 args)
00364  popz.v.d          
00368  pushi.i16         -1
00372  pushi.i16         0
00376  push.v            view_camera [array]
00384  call.i            camera_get_view_x (1 args)
00392  push.d            0.65
00404  mul.d.v           
00408  push.v            self.background_4
00416  call.i            layer_x (2 args)
00424  popz.v.d          
00428  pushi.i16         -1
00432  pushi.i16         0
00436  push.v            view_camera [array]
00444  call.i            camera_get_view_x (1 args)
00452  push.d            0.6
00464  mul.d.v           
00468  push.v            self.background_5
00476  call.i            layer_x (2 args)
00484  popz.v.d          
00488  pushi.i16         -1
00492  pushi.i16         0
00496  push.v            view_camera [array]
00504  call.i            camera_get_view_x (1 args)
00512  push.d            0.55
00524  mul.d.v           
00528  push.v            self.water
00536  call.i            layer_x (2 args)
00544  popz.v.d          
00548  pushi.i16         -1
00552  pushi.i16         0
00556  push.v            view_camera [array]
00564  call.i            camera_get_view_x (1 args)
00572  push.d            0.55
00584  mul.d.v           
00588  push.v            self.water_1
00596  call.i            layer_x (2 args)
00604  popz.v.d          
00608  pushi.i16         -1
00612  pushi.i16         0
00616  push.v            view_camera [array]
00624  call.i            camera_get_view_y (1 args)
00632  push.d            0.95
00644  mul.d.v           
00648  push.v            self.sky
00656  call.i            layer_y (2 args)
00664  popz.v.d          
00668  pushi.i16         -1
00672  pushi.i16         0
00676  push.v            view_camera [array]
00684  call.i            camera_get_view_y (1 args)
00692  push.d            0.8
00704  mul.d.v           
00708  pushi.i16         150
00712  add.i.v           
00716  push.v            self.background_1
00724  call.i            layer_y (2 args)
00732  popz.v.d          
00736  pushi.i16         -1
00740  pushi.i16         0
00744  push.v            view_camera [array]
00752  call.i            camera_get_view_y (1 args)
00760  push.d            0.75
00772  mul.d.v           
00776  pushi.i16         250
00780  add.i.v           
00784  push.v            self.background_2
00792  call.i            layer_y (2 args)
00800  popz.v.d          
00804  pushi.i16         -1
00808  pushi.i16         0
00812  push.v            view_camera [array]
00820  call.i            camera_get_view_y (1 args)
00828  push.d            0.7
00840  mul.d.v           
00844  pushi.i16         350
00848  add.i.v           
00852  push.v            self.background_3
00860  call.i            layer_y (2 args)
00868  popz.v.d          
00872  pushi.i16         -1
00876  pushi.i16         0
00880  push.v            view_camera [array]
00888  call.i            camera_get_view_y (1 args)
00896  push.d            0.65
00908  mul.d.v           
00912  pushi.i16         450
00916  add.i.v           
00920  push.v            self.background_4
00928  call.i            layer_y (2 args)
00936  popz.v.d          
00940  pushi.i16         -1
00944  pushi.i16         0
00948  push.v            view_camera [array]
00956  call.i            camera_get_view_y (1 args)
00964  push.d            0.6
00976  mul.d.v           
00980  pushi.i16         550
00984  add.i.v           
00988  push.v            self.background_5
00996  call.i            layer_y (2 args)
01004  popz.v.d          
01008  pushi.i16         -1
01012  pushi.i16         0
01016  push.v            view_camera [array]
01024  call.i            camera_get_view_y (1 args)
01032  push.d            0.55
01044  mul.d.v           
01048  pushi.i16         1050
01052  add.i.v           
01056  push.v            self.water
01064  call.i            layer_y (2 args)
01072  popz.v.d          
01076  pushi.i16         -1
01080  pushi.i16         0
01084  push.v            view_camera [array]
01092  call.i            camera_get_view_y (1 args)
01100  push.d            0.55
01112  mul.d.v           
01116  pushi.i16         1450
01120  add.i.v           
01124  push.v            self.water_1
01132  call.i            layer_y (2 args)
01140  popz.v.d          
01144  break             setstatic
01148  exit.i.d          
