// gml_Object_obj_FadeIn_Draw_64
// 21 instructions, 112 bytes, 1 locals, 0 arguments

00000  push.v            self.alpha
00008  call.i            draw_set_alpha (1 args)
00016  popz.v.d          
00020  pushi.i16         0
00024  conv.i.v          
00028  call.i            draw_set_color (1 args)
00036  popz.v.d          
00040  pushi.i16         0
00044  conv.i.v          
00048  pushbltn.v        self.room_height
00056  pushbltn.v        self.room_width
00064  pushi.i16         0
00068  conv.i.v          
00072  pushi.i16         0
00076  conv.i.v          
00080  call.i            draw_rectangle (5 args)
00088  popz.v.d          
00092  pushi.i16         1
00096  conv.i.v          
00100  call.i            draw_set_alpha (1 args)
00108  popz.v.d          
