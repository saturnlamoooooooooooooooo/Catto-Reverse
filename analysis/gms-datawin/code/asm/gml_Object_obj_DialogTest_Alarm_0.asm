// gml_Object_obj_DialogTest_Alarm_0
// 10 instructions, 64 bytes, 1 locals, 0 arguments

00000  push.s            "so"
00008  conv.s.v          
00012  call.i            widget_set_caption (1 args)
00020  popz.v.d          
00024  push.s            ""
00032  conv.s.v          
00036  push.s            "what's the code?"
00044  conv.s.v          
00048  call.i            get_string_async (2 args)
00056  pop.v.v           self.ret
