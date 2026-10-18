// gml_GlobalScript_macros
// 12 instructions, 60 bytes, 1 locals, 0 arguments

00000  b                 label_12
00004  break             setstatic
00008  exit.i.d          

label_12:
00012  push.i            [function] gml_Script_macros
00020  conv.i.v          
00024  pushi.i16         -1
00028  conv.i.v          
00032  call.i            method (2 args)
00040  dup.v.d           0
00044  pushi.i16         -1
00048  pop.v.v           macros [stacktop]
00056  popz.v.d          
