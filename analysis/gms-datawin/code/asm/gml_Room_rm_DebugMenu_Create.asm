// gml_Room_rm_DebugMenu_Create
// 9 instructions, 60 bytes, 1 locals, 0 arguments

00000  push.s            "debug"
00008  pop.v.s           global.RoomID
00016  pushi.i16         98
00020  conv.i.v          
00024  push.v            self.depth
00032  push.v            self.y
00040  push.v            self.x
00048  call.i            instance_create_depth (4 args)
00056  popz.v.d          
