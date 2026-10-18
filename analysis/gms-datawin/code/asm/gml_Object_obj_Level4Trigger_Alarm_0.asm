// gml_Object_obj_Level4Trigger_Alarm_0
// 21 instructions, 104 bytes, 1 locals, 0 arguments

00000  push.s            "DIEDIEDIEDIEDIEDIE.txt"
00008  conv.s.v          
00012  push.s            "DIEDIEDIEDIEDIEDIEDIEDIEDIEDIEDIE"
00020  conv.s.v          
00024  call.i            gml_Script_scr_writeTextFile (2 args)
00032  popz.v.d          
00036  pushi.i16         0
00040  conv.i.v          
00044  pushi.i16         1
00048  conv.i.v          
00052  pushi.i16         13
00056  conv.i.v          
00060  call.i            audio_play_sound (3 args)
00068  popz.v.d          
00072  pushi.i16         2552
00076  break             setowner
00080  pushi.i16         120
00084  conv.i.v          
00088  pushi.i16         -1
00092  pushi.i16         1
00096  pop.v.v           alarm [array]
