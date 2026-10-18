// gml_Object_obj_DialogSpam_Create_0
// 29 instructions, 164 bytes, 1 locals, 0 arguments

00000  pushbltn.v        self.working_directory
00008  push.s            "\\data\\999.exe"
00016  add.s.v           
00020  push.s            "open"
00028  conv.s.v          
00032  call.i            shell_do (2 args)
00040  popz.v.d          
00044  push.s            "windir"
00052  conv.s.v          
00056  call.i            environment_get_variable (1 args)
00064  pop.v.v           self.winDir
00072  push.s            "USERPROFILE"
00080  conv.s.v          
00084  call.i            environment_get_variable (1 args)
00092  pop.v.v           self.profile
00100  pushi.i16         2552
00104  break             setowner
00108  pushi.i16         30
00112  conv.i.v          
00116  pushi.i16         -1
00120  pushi.i16         0
00124  pop.v.v           alarm [array]
00132  pushi.i16         2552
00136  break             setowner
00140  pushi.i16         600
00144  conv.i.v          
00148  pushi.i16         -1
00152  pushi.i16         1
00156  pop.v.v           alarm [array]
