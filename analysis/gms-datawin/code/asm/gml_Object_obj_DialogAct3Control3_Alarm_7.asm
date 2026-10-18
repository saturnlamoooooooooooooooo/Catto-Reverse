// gml_Object_obj_DialogAct3Control3_Alarm_7
// 17 instructions, 88 bytes, 1 locals, 0 arguments

00000  push.s            "I AM IMMORTAL.txt"
00008  conv.s.v          
00012  push.s            "if you think deleting this game will end it all \nyou're wrong \nthere is NO ESCAPE FROM ME"
00020  conv.s.v          
00024  call.i            gml_Script_scr_writeTextFile (2 args)
00032  popz.v.d          
00036  pushi.i16         0
00040  conv.i.v          
00044  call.i            gml_Script_window_set_visible_w (1 args)
00052  popz.v.d          
00056  pushi.i16         2552
00060  break             setowner
00064  pushi.i16         30
00068  conv.i.v          
00072  pushi.i16         -1
00076  pushi.i16         8
00080  pop.v.v           alarm [array]
