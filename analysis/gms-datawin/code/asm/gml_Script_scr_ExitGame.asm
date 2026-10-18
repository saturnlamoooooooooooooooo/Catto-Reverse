// gml_Script_scr_ExitGame
// 13 instructions, 132 bytes, 1 locals, 0 arguments

00000  push.s            "windir"
00008  conv.s.v          
00012  call.i            environment_get_variable (1 args)
00020  pop.v.v           local.winDir
00028  pushloc.v         local.winDir
00036  push.s            "\\temp\\catto.cma"
00044  add.s.v           
00048  call.i            file_delete (1 args)
00056  popz.v.d          
00060  call.i            game_end (0 args)
00068  popz.v.d          
00072  break             setstatic
00076  exit.i.d          
