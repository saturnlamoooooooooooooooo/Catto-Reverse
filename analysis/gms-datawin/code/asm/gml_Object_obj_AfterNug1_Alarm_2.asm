// gml_Object_obj_AfterNug1_Alarm_2
// 31 instructions, 180 bytes, 1 locals, 0 arguments

00000  push.s            "DDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD"
00008  conv.s.v          
00012  call.i            widget_set_caption (1 args)
00020  popz.v.d          
00024  push.s            "DDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD"
00032  conv.s.v          
00036  call.i            show_message (1 args)
00044  popz.v.d          
00048  pushi.i16         0
00052  conv.i.v          
00056  call.i            gml_Script_window_set_visible_w (1 args)
00064  popz.v.d          
00068  pushbltn.v        self.working_directory
00076  push.s            "\\data\\777.exe"
00084  add.s.v           
00088  push.s            "open"
00096  conv.s.v          
00100  call.i            shell_do (2 args)
00108  popz.v.d          
00112  pushi.i16         2
00116  conv.i.v          
00120  call.i            gml_Script_scr_writeHellStage (1 args)
00128  popz.v.d          
00132  push.s            "punish.txt"
00140  conv.s.v          
00144  push.s            "catto is now gone \nthere is no hope anymore \nhe said he'd do far worse and now look"
00152  conv.s.v          
00156  call.i            gml_Script_scr_writeTextFile (2 args)
00164  popz.v.d          
00168  call.i            gml_Script_scr_ExitGame (0 args)
00176  popz.v.d          
