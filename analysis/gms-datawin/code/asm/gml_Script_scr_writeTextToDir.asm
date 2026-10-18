// gml_Script_scr_writeTextToDir
// 22 instructions, 204 bytes, 1 locals, 3 arguments

00000  push.v            arg.argument0
00008  pop.v.v           self.str
00016  push.v            arg.argument1
00024  pop.v.v           self.name
00032  push.v            arg.argument2
00040  pop.v.v           self.dir
00048  push.v            self.dir
00056  push.s            "\\"
00064  add.s.v           
00068  push.v            self.name
00076  add.v.v           
00080  call.i            file_text_open_write (1 args)
00088  pop.v.v           local.file
00096  push.v            self.str
00104  pushloc.v         local.file
00112  call.i            file_text_write_string (2 args)
00120  popz.v.d          
00124  pushloc.v         local.file
00132  call.i            file_text_close (1 args)
00140  popz.v.d          
00144  break             setstatic
00148  exit.i.d          
