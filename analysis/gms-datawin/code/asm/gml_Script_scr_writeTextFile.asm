// gml_Script_scr_writeTextFile
// 40 instructions, 328 bytes, 1 locals, 2 arguments

00000  push.v            arg.argument0
00008  pop.v.v           self.str
00016  push.v            arg.argument1
00024  pop.v.v           self.name
00032  push.s            "USERPROFILE"
00040  conv.s.v          
00044  call.i            environment_get_variable (1 args)
00052  pop.v.v           self.profile
00060  push.v            self.profile
00068  push.s            "\\Desktop\\"
00076  add.s.v           
00080  push.v            self.name
00088  add.v.v           
00092  call.i            file_text_open_write (1 args)
00100  pop.v.v           local.file
00108  push.v            self.str
00116  pushloc.v         local.file
00124  call.i            file_text_write_string (2 args)
00132  popz.v.d          
00136  pushloc.v         local.file
00144  call.i            file_text_close (1 args)
00152  popz.v.d          
00156  pushbltn.v        self.working_directory
00164  pop.v.v           self.workingDir
00172  push.v            self.workingDir
00180  push.s            "\\"
00188  add.s.v           
00192  push.v            self.name
00200  add.v.v           
00204  call.i            file_text_open_write (1 args)
00212  pop.v.v           local.file
00220  push.v            self.str
00228  pushloc.v         local.file
00236  call.i            file_text_write_string (2 args)
00244  popz.v.d          
00248  pushloc.v         local.file
00256  call.i            file_text_close (1 args)
00264  popz.v.d          
00268  break             setstatic
00272  exit.i.d          
