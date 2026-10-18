// gml_Room_rm_Hell_Create
// 11 instructions, 68 bytes, 1 locals, 0 arguments

00000  pushi.i16         616
00004  pop.v.i           global.RoomID
00012  pushi.i16         1
00016  pop.v.i           global.noMenu
00024  pushi.i16         72
00028  conv.i.v          
00032  push.v            self.depth
00040  push.v            self.y
00048  push.v            self.x
00056  call.i            instance_create_depth (4 args)
00064  popz.v.d          
