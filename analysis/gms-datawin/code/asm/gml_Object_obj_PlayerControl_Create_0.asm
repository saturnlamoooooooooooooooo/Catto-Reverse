// gml_Object_obj_PlayerControl_Create_0
// 21 instructions, 136 bytes, 1 locals, 0 arguments

00000  pushi.i16         -100
00004  pop.v.i           self.depth
00012  pushi.i16         0
00016  pop.v.i           self.direction
00024  push.d            0.35
00036  pop.v.d           self.grav
00044  pushi.i16         12
00048  pop.v.i           self.jumpspeed
00056  pushi.i16         7
00060  pop.v.i           self.movespeed
00068  pushi.i16         15
00072  pop.v.i           self.vsp
00080  pushi.i16         0
00084  pop.v.i           self.hsp
00092  pushi.i16         129
00096  conv.i.v          
00100  push.v            self.depth
00108  push.v            self.y
00116  push.v            self.x
00124  call.i            instance_create_depth (4 args)
00132  popz.v.d          
