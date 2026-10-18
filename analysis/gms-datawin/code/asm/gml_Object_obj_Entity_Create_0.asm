// gml_Object_obj_Entity_Create_0
// 28 instructions, 160 bytes, 1 locals, 0 arguments

00000  push.s            "sorry.txt"
00008  conv.s.v          
00012  push.s            "I sabotaged everything \nI'm so sorry \nI didn't think he would see me... \nI didn't think he would notice... \nI'M SORRYYYYYYYYYYYYYYYYYYYYYYYYYY"
00020  conv.s.v          
00024  call.i            gml_Script_scr_writeTextFile (2 args)
00032  popz.v.d          
00036  push.s            "really.txt"
00044  conv.s.v          
00048  push.s            "He has finally won "
00056  pushglb.v         global.Username
00064  add.v.s           
00068  push.s            "\nI can't do anything anymore \nThere is no escape anymore"
00076  add.s.v           
00080  call.i            gml_Script_scr_writeTextFile (2 args)
00088  popz.v.d          
00092  push.s            "WHY.txt"
00100  conv.s.v          
00104  push.s            "I'm sorry..."
00112  conv.s.v          
00116  call.i            gml_Script_scr_writeTextFile (2 args)
00124  popz.v.d          
00128  pushi.i16         2552
00132  break             setowner
00136  pushi.i16         240
00140  conv.i.v          
00144  pushi.i16         -1
00148  pushi.i16         0
00152  pop.v.v           alarm [array]
