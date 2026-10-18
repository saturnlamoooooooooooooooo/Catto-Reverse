// gml_Object_obj_PlayerSpawn_Other_4
// 31 instructions, 180 bytes, 1 locals, 0 arguments

00000  pushglb.v         global.Character
00008  pushi.i16         0
00012  cmp.i.v           ==
00016  bf                label_68
00020  pushi.i16         123
00024  conv.i.v          
00028  push.v            self.depth
00036  push.v            self.y
00044  push.v            self.x
00052  call.i            instance_create_depth (4 args)
00060  popz.v.d          
00064  b                 label_180

label_68:
00068  pushglb.v         global.Character
00076  pushi.i16         666
00080  cmp.i.v           ==
00084  bf                label_136
00088  pushi.i16         124
00092  conv.i.v          
00096  push.v            self.depth
00104  push.v            self.y
00112  push.v            self.x
00120  call.i            instance_create_depth (4 args)
00128  popz.v.d          
00132  b                 label_180

label_136:
00136  pushi.i16         121
00140  conv.i.v          
00144  push.v            self.depth
00152  push.v            self.y
00160  push.v            self.x
00168  call.i            instance_create_depth (4 args)
00176  popz.v.d          
