// gml_Room_rm_More_Create
// 11 instructions, 72 bytes, 1 locals, 0 arguments

00000  push.s            "nosound"
00008  pop.v.s           global.RoomID
00016  pushi.i16         1
00020  pop.v.i           global.noMenu
00028  pushi.i16         72
00032  conv.i.v          
00036  push.v            self.depth
00044  push.v            self.y
00052  push.v            self.x
00060  call.i            instance_create_depth (4 args)
00068  popz.v.d          
