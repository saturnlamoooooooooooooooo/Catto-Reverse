// gml_Object_obj_EnterMenu_Create_0
// 22 instructions, 112 bytes, 1 locals, 0 arguments

00000  pushi.i16         0
00004  pop.v.i           self.canselect
00012  pushi.i16         0
00016  pop.v.i           self.menu
00024  pushi.i16         147
00028  conv.i.v          
00032  push.v            self.depth
00040  pushi.i16         0
00044  conv.i.v          
00048  pushi.i16         0
00052  conv.i.v          
00056  call.i            instance_create_depth (4 args)
00064  popz.v.d          
00068  pushi.i16         1
00072  conv.i.v          
00076  call.i            path_end (0 args)
00084  pushi.i16         30
00088  conv.i.v          
00092  pushi.i16         1
00096  conv.i.v          
00100  call.i            path_start (4 args)
00108  popz.v.d          
