// gml_GlobalScript_scr_Parallax
// 186 instructions, 1204 bytes, 1 locals, 0 arguments

00000  b                 label_1156
00004  push.s            "sky"
00012  pop.v.s           self.sky
00020  push.s            "water"
00028  pop.v.s           self.water
00036  push.s            "water_1"
00044  pop.v.s           self.water_1
00052  push.s            "background_1"
00060  pop.v.s           self.background_1
00068  push.s            "background_2"
00076  pop.v.s           self.background_2
00084  push.s            "background_3"
00092  pop.v.s           self.background_3
00100  push.s            "background_4"
00108  pop.v.s           self.background_4
00116  push.s            "background_5"
00124  pop.v.s           self.background_5
00132  pushi.i16         -1
00136  pushi.i16         0
00140  push.v            view_camera [array]
00148  call.i            camera_get_view_x (1 args)
00156  push.d            0.95
00168  mul.d.v           
00172  push.v            self.sky
00180  call.i            layer_x (2 args)
00188  popz.v.d          
00192  pushi.i16         -1
00196  pushi.i16         0
00200  push.v            view_camera [array]
00208  call.i            camera_get_view_x (1 args)
00216  push.d            0.8
00228  mul.d.v           
00232  push.v            self.background_1
00240  call.i            layer_x (2 args)
00248  popz.v.d          
00252  pushi.i16         -1
00256  pushi.i16         0
00260  push.v            view_camera [array]
00268  call.i            camera_get_view_x (1 args)
00276  push.d            0.75
00288  mul.d.v           
00292  push.v            self.background_2
00300  call.i            layer_x (2 args)
00308  popz.v.d          
00312  pushi.i16         -1
00316  pushi.i16         0
00320  push.v            view_camera [array]
00328  call.i            camera_get_view_x (1 args)
00336  push.d            0.7
00348  mul.d.v           
00352  push.v            self.background_3
00360  call.i            layer_x (2 args)
00368  popz.v.d          
00372  pushi.i16         -1
00376  pushi.i16         0
00380  push.v            view_camera [array]
00388  call.i            camera_get_view_x (1 args)
00396  push.d            0.65
00408  mul.d.v           
00412  push.v            self.background_4
00420  call.i            layer_x (2 args)
00428  popz.v.d          
00432  pushi.i16         -1
00436  pushi.i16         0
00440  push.v            view_camera [array]
00448  call.i            camera_get_view_x (1 args)
00456  push.d            0.6
00468  mul.d.v           
00472  push.v            self.background_5
00480  call.i            layer_x (2 args)
00488  popz.v.d          
00492  pushi.i16         -1
00496  pushi.i16         0
00500  push.v            view_camera [array]
00508  call.i            camera_get_view_x (1 args)
00516  push.d            0.55
00528  mul.d.v           
00532  push.v            self.water
00540  call.i            layer_x (2 args)
00548  popz.v.d          
00552  pushi.i16         -1
00556  pushi.i16         0
00560  push.v            view_camera [array]
00568  call.i            camera_get_view_x (1 args)
00576  push.d            0.55
00588  mul.d.v           
00592  push.v            self.water_1
00600  call.i            layer_x (2 args)
00608  popz.v.d          
00612  pushi.i16         -1
00616  pushi.i16         0
00620  push.v            view_camera [array]
00628  call.i            camera_get_view_y (1 args)
00636  push.d            0.95
00648  mul.d.v           
00652  push.v            self.sky
00660  call.i            layer_y (2 args)
00668  popz.v.d          
00672  pushi.i16         -1
00676  pushi.i16         0
00680  push.v            view_camera [array]
00688  call.i            camera_get_view_y (1 args)
00696  push.d            0.8
00708  mul.d.v           
00712  pushi.i16         150
00716  add.i.v           
00720  push.v            self.background_1
00728  call.i            layer_y (2 args)
00736  popz.v.d          
00740  pushi.i16         -1
00744  pushi.i16         0
00748  push.v            view_camera [array]
00756  call.i            camera_get_view_y (1 args)
00764  push.d            0.75
00776  mul.d.v           
00780  pushi.i16         250
00784  add.i.v           
00788  push.v            self.background_2
00796  call.i            layer_y (2 args)
00804  popz.v.d          
00808  pushi.i16         -1
00812  pushi.i16         0
00816  push.v            view_camera [array]
00824  call.i            camera_get_view_y (1 args)
00832  push.d            0.7
00844  mul.d.v           
00848  pushi.i16         350
00852  add.i.v           
00856  push.v            self.background_3
00864  call.i            layer_y (2 args)
00872  popz.v.d          
00876  pushi.i16         -1
00880  pushi.i16         0
00884  push.v            view_camera [array]
00892  call.i            camera_get_view_y (1 args)
00900  push.d            0.65
00912  mul.d.v           
00916  pushi.i16         450
00920  add.i.v           
00924  push.v            self.background_4
00932  call.i            layer_y (2 args)
00940  popz.v.d          
00944  pushi.i16         -1
00948  pushi.i16         0
00952  push.v            view_camera [array]
00960  call.i            camera_get_view_y (1 args)
00968  push.d            0.6
00980  mul.d.v           
00984  pushi.i16         550
00988  add.i.v           
00992  push.v            self.background_5
01000  call.i            layer_y (2 args)
01008  popz.v.d          
01012  pushi.i16         -1
01016  pushi.i16         0
01020  push.v            view_camera [array]
01028  call.i            camera_get_view_y (1 args)
01036  push.d            0.55
01048  mul.d.v           
01052  pushi.i16         1050
01056  add.i.v           
01060  push.v            self.water
01068  call.i            layer_y (2 args)
01076  popz.v.d          
01080  pushi.i16         -1
01084  pushi.i16         0
01088  push.v            view_camera [array]
01096  call.i            camera_get_view_y (1 args)
01104  push.d            0.55
01116  mul.d.v           
01120  pushi.i16         1450
01124  add.i.v           
01128  push.v            self.water_1
01136  call.i            layer_y (2 args)
01144  popz.v.d          
01148  break             setstatic
01152  exit.i.d          

label_1156:
01156  push.i            [function] gml_Script_scr_Parallax
01164  conv.i.v          
01168  pushi.i16         -1
01172  conv.i.v          
01176  call.i            method (2 args)
01184  dup.v.d           0
01188  pushi.i16         -1
01192  pop.v.v           scr_Parallax [stacktop]
01200  popz.v.d          
