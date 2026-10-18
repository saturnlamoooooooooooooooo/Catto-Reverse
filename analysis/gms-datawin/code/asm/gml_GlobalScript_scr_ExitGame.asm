// gml_GlobalScript_scr_ExitGame
// 23 instructions, 132 bytes, 1 locals, 0 arguments

00000  b                 label_84
00004  push.s            "windir"
00012  conv.s.v          
00016  call.i            environment_get_variable (1 args)
00024  pop.v.v           local.winDir
00032  pushloc.v         local.winDir
00040  push.s            "\\temp\\catto.cma"
00048  add.s.v           
00052  call.i            file_delete (1 args)
00060  popz.v.d          
00064  call.i            game_end (0 args)
00072  popz.v.d          
00076  break             setstatic
00080  exit.i.d          

label_84:
00084  push.i            [function] gml_Script_scr_ExitGame
00092  conv.i.v          
00096  pushi.i16         -1
00100  conv.i.v          
00104  call.i            method (2 args)
00112  dup.v.d           0
00116  pushi.i16         -1
00120  pop.v.v           scr_ExitGame [stacktop]
00128  popz.v.d          
