// gml_Object_obj_Level4Trigger_Alarm_1
// 24 instructions, 152 bytes, 1 locals, 0 arguments

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
00076  push.s            "DIEDIEDIEDIEDIEDIE.txt"
00084  add.s.v           
00088  push.v            self.winDir
00096  push.s            "/notepad.exe"
00104  add.s.v           
00108  call.i            shell_execute (2 args)
00116  popz.v.d          
00120  pushi.i16         1
00124  conv.i.v          
00128  call.i            gml_Script_scr_writeHellStage (1 args)
00136  popz.v.d          
00140  call.i            gml_Script_scr_ExitGame (0 args)
00148  popz.v.d          
