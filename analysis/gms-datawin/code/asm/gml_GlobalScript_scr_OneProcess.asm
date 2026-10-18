// gml_GlobalScript_scr_OneProcess
// 38 instructions, 228 bytes, 1 locals, 0 arguments

00000  b                 label_180
00004  push.s            "windir"
00012  conv.s.v          
00016  call.i            environment_get_variable (1 args)
00024  pop.v.v           local.winDir
00032  pushloc.v         local.winDir
00040  push.s            "\\temp\\catto.cma"
00048  add.s.v           
00052  call.i            file_exists (1 args)
00060  conv.v.b          
00064  bf                label_84
00068  call.i            game_end (0 args)
00076  popz.v.d          
00080  b                 label_172

label_84:
00084  pushloc.v         local.winDir
00092  push.s            "\\temp\\catto.cma"
00100  add.s.v           
00104  call.i            file_text_open_write (1 args)
00112  pop.v.v           local.file
00120  push.s            "DIENOW"
00128  conv.s.v          
00132  pushloc.v         local.file
00140  call.i            file_text_write_string (2 args)
00148  popz.v.d          
00152  pushloc.v         local.file
00160  call.i            file_text_close (1 args)
00168  popz.v.d          

label_172:
00172  break             setstatic
00176  exit.i.d          

label_180:
00180  push.i            [function] gml_Script_scr_OneProcess
00188  conv.i.v          
00192  pushi.i16         -1
00196  conv.i.v          
00200  call.i            method (2 args)
00208  dup.v.d           0
00212  pushi.i16         -1
00216  pop.v.v           scr_OneProcess [stacktop]
00224  popz.v.d          
