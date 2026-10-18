// gml_GlobalScript_scr_writeTextToDir
// 32 instructions, 204 bytes, 1 locals, 0 arguments

00000  b                 label_156
00004  push.v            arg.argument0
00012  pop.v.v           self.str
00020  push.v            arg.argument1
00028  pop.v.v           self.name
00036  push.v            arg.argument2
00044  pop.v.v           self.dir
00052  push.v            self.dir
00060  push.s            "\\"
00068  add.s.v           
00072  push.v            self.name
00080  add.v.v           
00084  call.i            file_text_open_write (1 args)
00092  pop.v.v           local.file
00100  push.v            self.str
00108  pushloc.v         local.file
00116  call.i            file_text_write_string (2 args)
00124  popz.v.d          
00128  pushloc.v         local.file
00136  call.i            file_text_close (1 args)
00144  popz.v.d          
00148  break             setstatic
00152  exit.i.d          

label_156:
00156  push.i            [function] gml_Script_scr_writeTextToDir
00164  conv.i.v          
00168  pushi.i16         -1
00172  conv.i.v          
00176  call.i            method (2 args)
00184  dup.v.d           0
00188  pushi.i16         -1
00192  pop.v.v           scr_writeTextToDir [stacktop]
00200  popz.v.d          
