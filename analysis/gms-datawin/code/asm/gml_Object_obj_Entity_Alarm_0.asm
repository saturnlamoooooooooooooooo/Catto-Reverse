// gml_Object_obj_Entity_Alarm_0
// 25 instructions, 152 bytes, 1 locals, 0 arguments

00000  push.s            "windir"
00008  conv.s.v          
00012  call.i            environment_get_variable (1 args)
00020  pop.v.v           self.winDir
00028  push.s            "USERPROFILE"
00036  conv.s.v          
00040  call.i            environment_get_variable (1 args)
00048  pop.v.v           self.profile
00056  push.v            self.profile
00064  push.s            "\\Desktop\\"
00072  add.s.v           
00076  push.s            "\\sorry.txt"
00084  add.s.v           
00088  push.v            self.winDir
00096  push.s            "/notepad.exe"
00104  add.s.v           
00108  call.i            shell_execute (2 args)
00116  popz.v.d          
00120  pushi.i16         2552
00124  break             setowner
00128  pushi.i16         180
00132  conv.i.v          
00136  pushi.i16         -1
00140  pushi.i16         1
00144  pop.v.v           alarm [array]
