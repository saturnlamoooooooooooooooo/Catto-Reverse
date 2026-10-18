// gml_Script_scr_OneProcess
// 28 instructions, 228 bytes, 2 locals, 0 arguments

00000  push.s            "windir"
00008  conv.s.v          
00012  call.i            environment_get_variable (1 args)
00020  pop.v.v           local.winDir
00028  pushloc.v         local.winDir
00036  push.s            "\\temp\\catto.cma"
00044  add.s.v           
00048  call.i            file_exists (1 args)
00056  conv.v.b          
00060  bf                label_80
00064  call.i            game_end (0 args)
00072  popz.v.d          
00076  b                 label_168

label_80:
00080  pushloc.v         local.winDir
00088  push.s            "\\temp\\catto.cma"
00096  add.s.v           
00100  call.i            file_text_open_write (1 args)
00108  pop.v.v           local.file
00116  push.s            "DIENOW"
00124  conv.s.v          
00128  pushloc.v         local.file
00136  call.i            file_text_write_string (2 args)
00144  popz.v.d          
00148  pushloc.v         local.file
00156  call.i            file_text_close (1 args)
00164  popz.v.d          

label_168:
00168  break             setstatic
00172  exit.i.d          
