// gml_Script_window_command_run
// 20 instructions, 120 bytes, 3 locals, 0 arguments

00000  pushi.i16         -1
00004  pushi.i16         0
00008  push.v            argument [array]
00016  pop.v.v           local.wp
00024  pushbltn.v        self.argument_count
00032  pushi.i16         1
00036  cmp.i.v           >
00040  bf                label_72
00044  pushi.i16         -1
00048  pushi.i16         1
00052  push.v            argument [array]
00060  pop.v.v           local.lp
00068  b                 label_84

label_72:
00072  pushi.i16         0
00076  pop.v.i           local.lp

label_84:
00084  pushloc.v         local.lp
00092  pushloc.v         local.wp
00100  call.i            window_handle (0 args)
00108  call.i            window_command_run_raw (3 args)
00116  ret.v.d           
