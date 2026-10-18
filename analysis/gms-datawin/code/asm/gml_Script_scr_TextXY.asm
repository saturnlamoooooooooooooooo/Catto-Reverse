// gml_Script_scr_TextXY
// 48 instructions, 324 bytes, 0 locals, 4 arguments

00000  push.v            arg.argument2
00008  pushi.i16         60
00012  mul.i.v           
00016  pop.v.v           self.xPos
00024  push.v            arg.argument3
00032  pushi.i16         60
00036  mul.i.v           
00040  pop.v.v           self.yPos
00048  pushi.i16         1
00052  conv.i.v          
00056  pushi.i16         0
00060  conv.i.v          
00064  pushi.i16         0
00068  conv.i.v          
00072  pushi.i16         0
00076  conv.i.v          
00080  pushi.i16         0
00084  conv.i.v          
00088  push.v            arg.argument0
00096  push.v            self.y
00104  push.v            self.yPos
00112  add.v.v           
00116  push.v            self.x
00124  push.v            self.xPos
00132  add.v.v           
00136  call.i            draw_text_color (8 args)
00144  popz.v.d          
00148  pushi.i16         1
00152  conv.i.v          
00156  push.v            arg.argument1
00164  push.v            arg.argument1
00172  push.v            arg.argument1
00180  push.v            arg.argument1
00188  push.v            arg.argument0
00196  push.v            self.y
00204  push.v            self.yPos
00212  add.v.v           
00216  pushi.i16         2
00220  add.i.v           
00224  push.v            self.x
00232  push.v            self.xPos
00240  add.v.v           
00244  pushi.i16         2
00248  add.i.v           
00252  call.i            draw_text_color (8 args)
00260  popz.v.d          
00264  break             setstatic
00268  exit.i.d          
