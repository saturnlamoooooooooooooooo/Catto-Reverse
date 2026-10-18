// gml_GlobalScript_scr_Text
// 52 instructions, 284 bytes, 1 locals, 0 arguments

00000  b                 label_236
00004  push.v            arg.argument2
00012  pushi.i16         60
00016  mul.i.v           
00020  pop.v.v           self.yPos
00028  pushi.i16         1
00032  conv.i.v          
00036  pushi.i16         0
00040  conv.i.v          
00044  pushi.i16         0
00048  conv.i.v          
00052  pushi.i16         0
00056  conv.i.v          
00060  pushi.i16         0
00064  conv.i.v          
00068  push.v            arg.argument0
00076  push.v            self.y
00084  push.v            self.yPos
00092  add.v.v           
00096  push.v            self.x
00104  pushi.i16         4
00108  add.i.v           
00112  call.i            draw_text_color (8 args)
00120  popz.v.d          
00124  pushi.i16         1
00128  conv.i.v          
00132  push.v            arg.argument1
00140  push.v            arg.argument1
00148  push.v            arg.argument1
00156  push.v            arg.argument1
00164  push.v            arg.argument0
00172  push.v            self.y
00180  push.v            self.yPos
00188  add.v.v           
00192  pushi.i16         2
00196  add.i.v           
00200  push.v            self.x
00208  pushi.i16         6
00212  add.i.v           
00216  call.i            draw_text_color (8 args)
00224  popz.v.d          
00228  break             setstatic
00232  exit.i.d          

label_236:
00236  push.i            [function] gml_Script_scr_Text
00244  conv.i.v          
00248  pushi.i16         -1
00252  conv.i.v          
00256  call.i            method (2 args)
00264  dup.v.d           0
00268  pushi.i16         -1
00272  pop.v.v           scr_Text [stacktop]
00280  popz.v.d          
