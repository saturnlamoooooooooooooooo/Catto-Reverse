// gml_Object_obj_Understood_Alarm_0
// 28 instructions, 160 bytes, 1 locals, 0 arguments

00000  push.s            "what if this was all just a dream...?"
00008  conv.s.v          
00012  call.i            show_message (1 args)
00020  popz.v.d          
00024  push.s            "what if I'm ok...?"
00032  conv.s.v          
00036  call.i            show_message (1 args)
00044  popz.v.d          
00048  pushglb.v         global.Username
00056  push.s            "?"
00064  add.s.v           
00068  call.i            show_message (1 args)
00076  popz.v.d          
00080  push.s            "am I ok...?"
00088  conv.s.v          
00092  call.i            show_message (1 args)
00100  popz.v.d          
00104  push.s            "I feel like I'm waking up..."
00112  conv.s.v          
00116  call.i            show_message (1 args)
00124  popz.v.d          
00128  pushi.i16         2552
00132  break             setowner
00136  pushi.i16         5
00140  conv.i.v          
00144  pushi.i16         -1
00148  pushi.i16         1
00152  pop.v.v           alarm [array]
