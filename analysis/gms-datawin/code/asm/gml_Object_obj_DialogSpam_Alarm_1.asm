// gml_Object_obj_DialogSpam_Alarm_1
// 12 instructions, 68 bytes, 1 locals, 0 arguments

00000  pushi.i16         5
00004  conv.i.v          
00008  call.i            gml_Script_scr_writeHellStage (1 args)
00016  popz.v.d          
00020  push.s            "no more.txt"
00028  conv.s.v          
00032  push.s            "no more"
00040  conv.s.v          
00044  call.i            gml_Script_scr_writeTextFile (2 args)
00052  popz.v.d          
00056  call.i            gml_Script_scr_ExitGame (0 args)
00064  popz.v.d          
