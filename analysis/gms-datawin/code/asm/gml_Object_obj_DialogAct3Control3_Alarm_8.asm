// gml_Object_obj_DialogAct3Control3_Alarm_8
// 31 instructions, 196 bytes, 1 locals, 0 arguments

00000  push.s            "windir"
00008  conv.s.v          
00012  call.i            environment_get_variable (1 args)
00020  pop.v.v           self.winDir
00028  push.s            "USERPROFILE"
00036  conv.s.v          
00040  call.i            environment_get_variable (1 args)
00048  pop.v.v           self.profile
00056  pushi.i16         3
00060  conv.i.v          
00064  call.i            gml_Script_scr_writeHellStage (1 args)
00072  popz.v.d          
00076  push.v            self.profile
00084  push.s            "\\Desktop\\"
00092  add.s.v           
00096  push.s            "I AM IMMORTAL.txt"
00104  add.s.v           
00108  push.v            self.winDir
00116  push.s            "/notepad.exe"
00124  add.s.v           
00128  call.i            shell_execute (2 args)
00136  popz.v.d          
00140  push.s            "illusion.txt"
00148  conv.s.v          
00152  push.s            "nothing is what it seems "
00160  pushglb.v         global.Username
00168  add.v.s           
00172  call.i            gml_Script_scr_writeTextFile (2 args)
00180  popz.v.d          
00184  call.i            gml_Script_scr_ExitGame (0 args)
00192  popz.v.d          
