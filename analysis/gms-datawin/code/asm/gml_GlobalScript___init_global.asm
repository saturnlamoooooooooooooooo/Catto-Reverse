// gml_GlobalScript___init_global
// 22 instructions, 108 bytes, 1 locals, 0 arguments

00000  b                 label_60
00004  pushi.i16         0
00008  conv.i.v          
00012  pushi.i16         1
00016  conv.i.v          
00020  call.i            layer_force_draw_depth (2 args)
00028  popz.v.d          
00032  pushi.i16         0
00036  conv.i.v          
00040  call.i            draw_set_colour (1 args)
00048  popz.v.d          
00052  break             setstatic
00056  exit.i.d          

label_60:
00060  push.i            [function] gml_Script___init_global
00068  conv.i.v          
00072  pushi.i16         -1
00076  conv.i.v          
00080  call.i            method (2 args)
00088  dup.v.d           0
00092  pushi.i16         -1
00096  pop.v.v           __init_global [stacktop]
00104  popz.v.d          
