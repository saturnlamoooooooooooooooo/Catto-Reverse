// gml_Object_obj_StartControl2_Alarm_1
// 8 instructions, 52 bytes, 1 locals, 0 arguments

00000  push.s            "progression"
00008  conv.s.v          
00012  call.i            widget_set_caption (1 args)
00020  popz.v.d          
00024  push.s            "have you found it?"
00032  conv.s.v          
00036  call.i            show_question_async (1 args)
00044  pop.v.v           self.ret
