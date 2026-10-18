// gml_Object_obj_StartControl_Alarm_2
// 43 instructions, 252 bytes, 1 locals, 0 arguments

00000  push.s            "you're back once again"
00008  conv.s.v          
00012  call.i            show_message (1 args)
00020  popz.v.d          
00024  push.s            "I'm now in your world, "
00032  pushglb.v         global.Username
00040  add.v.s           
00044  call.i            show_message (1 args)
00052  popz.v.d          
00056  push.s            "just remember"
00064  conv.s.v          
00068  call.i            show_message (1 args)
00076  popz.v.d          
00080  push.s            "I can do"
00088  conv.s.v          
00092  call.i            show_message (1 args)
00100  popz.v.d          
00104  push.s            "whatever I want"
00112  conv.s.v          
00116  call.i            show_message (1 args)
00124  popz.v.d          
00128  push.s            "whenever I want"
00136  conv.s.v          
00140  call.i            show_message (1 args)
00148  popz.v.d          
00152  push.s            "I can do things like this:"
00160  conv.s.v          
00164  call.i            show_message (1 args)
00172  popz.v.d          
00176  pushbltn.v        self.working_directory
00184  push.s            "\\data\\333.exe"
00192  add.s.v           
00196  push.s            "open"
00204  conv.s.v          
00208  call.i            shell_do (2 args)
00216  popz.v.d          
00220  pushi.i16         2552
00224  break             setowner
00228  pushi.i16         360
00232  conv.i.v          
00236  pushi.i16         -1
00240  pushi.i16         3
00244  pop.v.v           alarm [array]
