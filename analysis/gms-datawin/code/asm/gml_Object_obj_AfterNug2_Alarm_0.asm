// gml_Object_obj_AfterNug2_Alarm_0
// 22 instructions, 120 bytes, 1 locals, 0 arguments

00000  push.s            "deja vu?"
00008  conv.s.v          
00012  call.i            widget_set_caption (1 args)
00020  popz.v.d          
00024  pushi.i16         160
00028  conv.i.v          
00032  push.v            self.depth
00040  push.v            self.y
00048  push.v            self.x
00056  call.i            instance_create_depth (4 args)
00064  popz.v.d          
00068  pushi.i16         1
00072  conv.i.v          
00076  call.i            gml_Script_window_set_visible_w (1 args)
00084  popz.v.d          
00088  pushi.i16         2552
00092  break             setowner
00096  pushi.i16         5
00100  conv.i.v          
00104  pushi.i16         -1
00108  pushi.i16         1
00112  pop.v.v           alarm [array]
