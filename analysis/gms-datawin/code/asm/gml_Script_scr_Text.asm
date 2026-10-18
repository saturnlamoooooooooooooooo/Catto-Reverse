// gml_Script_scr_Text
// 42 instructions, 284 bytes, 0 locals, 3 arguments

00000  push.v            arg.argument2
00008  pushi.i16         60
00012  mul.i.v           
00016  pop.v.v           self.yPos
00024  pushi.i16         1
00028  conv.i.v          
00032  pushi.i16         0
00036  conv.i.v          
00040  pushi.i16         0
00044  conv.i.v          
00048  pushi.i16         0
00052  conv.i.v          
00056  pushi.i16         0
00060  conv.i.v          
00064  push.v            arg.argument0
00072  push.v            self.y
00080  push.v            self.yPos
00088  add.v.v           
00092  push.v            self.x
00100  pushi.i16         4
00104  add.i.v           
00108  call.i            draw_text_color (8 args)
00116  popz.v.d          
00120  pushi.i16         1
00124  conv.i.v          
00128  push.v            arg.argument1
00136  push.v            arg.argument1
00144  push.v            arg.argument1
00152  push.v            arg.argument1
00160  push.v            arg.argument0
00168  push.v            self.y
00176  push.v            self.yPos
00184  add.v.v           
00188  pushi.i16         2
00192  add.i.v           
00196  push.v            self.x
00204  pushi.i16         6
00208  add.i.v           
00212  call.i            draw_text_color (8 args)
00220  popz.v.d          
00224  break             setstatic
00228  exit.i.d          
