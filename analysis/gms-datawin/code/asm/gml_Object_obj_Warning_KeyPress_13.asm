// gml_Object_obj_Warning_KeyPress_13
// 40 instructions, 196 bytes, 1 locals, 0 arguments

00000  pushglb.v         global.trueEnded
00008  pushi.i16         1
00012  cmp.i.v           ==
00016  bf                label_44
00020  pushi.i16         2
00024  conv.i.v          
00028  call.i            room_goto (1 args)
00036  popz.v.d          
00040  b                 label_196

label_44:
00044  pushglb.v         global.hellStage
00052  pushi.i16         2
00056  cmp.i.v           ==
00060  bf                label_88
00064  pushi.i16         26
00068  conv.i.v          
00072  call.i            room_goto (1 args)
00080  popz.v.d          
00084  b                 label_196

label_88:
00088  pushglb.v         global.hellStage
00096  pushi.i16         3
00100  cmp.i.v           ==
00104  bf                label_132
00108  pushi.i16         38
00112  conv.i.v          
00116  call.i            room_goto (1 args)
00124  popz.v.d          
00128  b                 label_196

label_132:
00132  pushglb.v         global.hellStage
00140  pushi.i16         5
00144  cmp.i.v           ==
00148  bf                label_176
00152  pushi.i16         15
00156  conv.i.v          
00160  call.i            room_goto (1 args)
00168  popz.v.d          
00172  b                 label_196

label_176:
00176  pushi.i16         2
00180  conv.i.v          
00184  call.i            room_goto (1 args)
00192  popz.v.d          
