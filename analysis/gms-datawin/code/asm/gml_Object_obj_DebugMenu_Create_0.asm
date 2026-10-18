// gml_Object_obj_DebugMenu_Create_0
// 13 instructions, 68 bytes, 1 locals, 0 arguments

00000  pushi.i16         1
00004  pop.v.i           self.canselect
00012  pushi.i16         0
00016  pop.v.i           self.menu
00024  pushi.i16         97
00028  conv.i.v          
00032  push.v            self.depth
00040  pushi.i16         0
00044  conv.i.v          
00048  pushi.i16         0
00052  conv.i.v          
00056  call.i            instance_create_depth (4 args)
00064  popz.v.d          
