// gml_Object_obj_DialogSpam_Alarm_0
// 17 instructions, 96 bytes, 1 locals, 0 arguments

00000  push.v            self.profile
00008  push.s            "\\Desktop\\"
00016  add.s.v           
00020  push.s            "\\WHY.txt"
00028  add.s.v           
00032  push.v            self.winDir
00040  push.s            "/notepad.exe"
00048  add.s.v           
00052  call.i            shell_execute (2 args)
00060  popz.v.d          
00064  pushi.i16         2552
00068  break             setowner
00072  pushi.i16         30
00076  conv.i.v          
00080  pushi.i16         -1
00084  pushi.i16         0
00088  pop.v.v           alarm [array]
