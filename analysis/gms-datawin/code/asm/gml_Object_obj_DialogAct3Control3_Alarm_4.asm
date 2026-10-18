// gml_Object_obj_DialogAct3Control3_Alarm_4
// 43 instructions, 244 bytes, 1 locals, 0 arguments

00000  push.s            "and if you think you can stop me"
00008  conv.s.v          
00012  call.i            show_message (1 args)
00020  popz.v.d          
00024  push.s            "you have no idea..."
00032  conv.s.v          
00036  call.i            show_message (1 args)
00044  popz.v.d          
00048  push.s            "I could delete your entire fucking system and you wouldn't even realise"
00056  conv.s.v          
00060  call.i            show_message (1 args)
00068  popz.v.d          
00072  push.s            "I'm not fucking around "
00080  pushglb.v         global.Username
00088  add.v.s           
00092  call.i            show_message (1 args)
00100  popz.v.d          
00104  push.s            "just you wait and see..."
00112  conv.s.v          
00116  call.i            show_message (1 args)
00124  popz.v.d          
00128  pushi.i16         1
00132  conv.i.v          
00136  call.i            window_set_fullscreen (1 args)
00144  popz.v.d          
00148  pushi.i16         156
00152  conv.i.v          
00156  call.i            instance_destroy (1 args)
00164  popz.v.d          
00168  pushi.i16         82
00172  conv.i.v          
00176  push.v            self.depth
00184  push.v            self.y
00192  push.v            self.x
00200  call.i            instance_create_depth (4 args)
00208  popz.v.d          
00212  pushi.i16         2552
00216  break             setowner
00220  pushi.i16         180
00224  conv.i.v          
00228  pushi.i16         -1
00232  pushi.i16         5
00236  pop.v.v           alarm [array]
