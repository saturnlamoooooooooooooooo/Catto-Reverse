// gml_Object_obj_Freeze_Alarm_0
// 9 instructions, 52 bytes, 1 locals, 0 arguments

00000  pushi.i16         0
00004  conv.i.v          
00008  push.v            self.depth
00016  push.v            obj_PlayerControl.y
00024  push.v            obj_PlayerControl.x
00032  pushi.i16         1000
00036  add.i.v           
00040  call.i            instance_create_depth (4 args)
00048  popz.v.d          
