// gml_GlobalScript_scr_writeTextFile
// 50 instructions, 328 bytes, 1 locals, 0 arguments

00000  b                 label_280
00004  push.v            arg.argument0
00012  pop.v.v           self.str
00020  push.v            arg.argument1
00028  pop.v.v           self.name
00036  push.s            "USERPROFILE"
00044  conv.s.v          
00048  call.i            environment_get_variable (1 args)
00056  pop.v.v           self.profile
00064  push.v            self.profile
00072  push.s            "\\Desktop\\"
00080  add.s.v           
00084  push.v            self.name
00092  add.v.v           
00096  call.i            file_text_open_write (1 args)
00104  pop.v.v           local.file
00112  push.v            self.str
00120  pushloc.v         local.file
00128  call.i            file_text_write_string (2 args)
00136  popz.v.d          
00140  pushloc.v         local.file
00148  call.i            file_text_close (1 args)
00156  popz.v.d          
00160  pushbltn.v        self.working_directory
00168  pop.v.v           self.workingDir
00176  push.v            self.workingDir
00184  push.s            "\\"
00192  add.s.v           
00196  push.v            self.name
00204  add.v.v           
00208  call.i            file_text_open_write (1 args)
00216  pop.v.v           local.file
00224  push.v            self.str
00232  pushloc.v         local.file
00240  call.i            file_text_write_string (2 args)
00248  popz.v.d          
00252  pushloc.v         local.file
00260  call.i            file_text_close (1 args)
00268  popz.v.d          
00272  break             setstatic
00276  exit.i.d          

label_280:
00280  push.i            [function] gml_Script_scr_writeTextFile
00288  conv.i.v          
00292  pushi.i16         -1
00296  conv.i.v          
00300  call.i            method (2 args)
00308  dup.v.d           0
00312  pushi.i16         -1
00316  pop.v.v           scr_writeTextFile [stacktop]
00324  popz.v.d          
