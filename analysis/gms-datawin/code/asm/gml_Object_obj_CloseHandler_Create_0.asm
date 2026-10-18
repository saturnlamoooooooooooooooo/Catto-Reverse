// gml_Object_obj_CloseHandler_Create_0
// 20 instructions, 112 bytes, 1 locals, 0 arguments

00000  pushi.i16         18
00004  conv.i.v          
00008  call.i            keyboard_check_direct (1 args)
00016  pushi.i16         115
00020  conv.i.v          
00024  call.i            keyboard_check_direct (1 args)
00032  add.v.v           
00036  pop.v.v           self.keyAltF4
00044  push.i            61536
00052  conv.i.v          
00056  call.i            gml_Script_window_command_hook (1 args)
00064  popz.v.d          
00068  pushi.i16         0
00072  conv.i.v          
00076  push.i            61536
00084  conv.i.v          
00088  call.i            gml_Script_window_command_set_active (2 args)
00096  popz.v.d          
00100  call.i            gml_Script_scr_OneProcess (0 args)
00108  popz.v.d          
