// gml_GlobalScript_scr_TextXY
// 58 instructions, 324 bytes, 1 locals, 0 arguments

00000  b                 label_276
00004  push.v            arg.argument2
00012  pushi.i16         60
00016  mul.i.v           
00020  pop.v.v           self.xPos
00028  push.v            arg.argument3
00036  pushi.i16         60
00040  mul.i.v           
00044  pop.v.v           self.yPos
00052  pushi.i16         1
00056  conv.i.v          
00060  pushi.i16         0
00064  conv.i.v          
00068  pushi.i16         0
00072  conv.i.v          
00076  pushi.i16         0
00080  conv.i.v          
00084  pushi.i16         0
00088  conv.i.v          
00092  push.v            arg.argument0
00100  push.v            self.y
00108  push.v            self.yPos
00116  add.v.v           
00120  push.v            self.x
00128  push.v            self.xPos
00136  add.v.v           
00140  call.i            draw_text_color (8 args)
00148  popz.v.d          
00152  pushi.i16         1
00156  conv.i.v          
00160  push.v            arg.argument1
00168  push.v            arg.argument1
00176  push.v            arg.argument1
00184  push.v            arg.argument1
00192  push.v            arg.argument0
00200  push.v            self.y
00208  push.v            self.yPos
00216  add.v.v           
00220  pushi.i16         2
00224  add.i.v           
00228  push.v            self.x
00236  push.v            self.xPos
00244  add.v.v           
00248  pushi.i16         2
00252  add.i.v           
00256  call.i            draw_text_color (8 args)
00264  popz.v.d          
00268  break             setstatic
00272  exit.i.d          

label_276:
00276  push.i            [function] gml_Script_scr_TextXY
00284  conv.i.v          
00288  pushi.i16         -1
00292  conv.i.v          
00296  call.i            method (2 args)
00304  dup.v.d           0
00308  pushi.i16         -1
00312  pop.v.v           scr_TextXY [stacktop]
00320  popz.v.d          
