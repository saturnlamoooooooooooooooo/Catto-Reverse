// gml_Object_obj_LevelTitlePause_Create_0
// 11 instructions, 56 bytes, 1 locals, 0 arguments

00000  pushi.i16         -200
00004  pop.v.i           self.depth
00012  pushi.i16         1
00016  conv.i.v          
00020  call.i            path_end (0 args)
00028  pushi.i16         30
00032  conv.i.v          
00036  pushi.i16         0
00040  conv.i.v          
00044  call.i            path_start (4 args)
00052  popz.v.d          
