// gml_Object_obj_Timer2_Create_0
// 13 instructions, 68 bytes, 1 locals, 0 arguments

00000  push.s            "it can't be over can it.txt"
00008  conv.s.v          
00012  push.s            "can't \nkeep \ntrying \ngetting \nweaker \nguilt \nshame"
00020  conv.s.v          
00024  call.i            gml_Script_scr_writeTextFile (2 args)
00032  popz.v.d          
00036  pushi.i16         2552
00040  break             setowner
00044  pushi.i16         1200
00048  conv.i.v          
00052  pushi.i16         -1
00056  pushi.i16         0
00060  pop.v.v           alarm [array]
