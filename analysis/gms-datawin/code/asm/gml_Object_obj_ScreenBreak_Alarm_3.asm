// gml_Object_obj_ScreenBreak_Alarm_3
// 13 instructions, 76 bytes, 1 locals, 0 arguments

00000  pushi.i16         0
00004  conv.i.v          
00008  call.i            gml_Script_window_set_visible_w (1 args)
00016  popz.v.d          
00020  call.i            instance_destroy (0 args)
00028  popz.v.d          
00032  pushi.i16         108
00036  conv.i.v          
00040  push.v            self.depth
00048  push.v            self.y
00056  push.v            self.x
00064  call.i            instance_create_depth (4 args)
00072  popz.v.d          
