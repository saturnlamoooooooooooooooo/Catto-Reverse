// gml_Script_window_command_set_active
// 5 instructions, 36 bytes, 1 locals, 0 arguments

00000  pushbltn.v        self.argument1
00008  pushbltn.v        self.argument0
00016  call.i            window_handle (0 args)
00024  call.i            window_command_set_active_raw (3 args)
00032  ret.v.d           
