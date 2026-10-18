// gml_Object_obj_StartControl2_Alarm_2
// 15 instructions, 92 bytes, 1 locals, 0 arguments

00000  push.s            "I'll take your word for it..."
00008  conv.s.v          
00012  call.i            show_message (1 args)
00020  popz.v.d          
00024  push.s            "just to test you, I'll ask you to put in the code in the following dialog box."
00032  conv.s.v          
00036  call.i            show_message (1 args)
00044  popz.v.d          
00048  pushi.i16         77
00052  conv.i.v          
00056  push.v            self.depth
00064  push.v            self.y
00072  push.v            self.x
00080  call.i            instance_create_depth (4 args)
00088  popz.v.d          
