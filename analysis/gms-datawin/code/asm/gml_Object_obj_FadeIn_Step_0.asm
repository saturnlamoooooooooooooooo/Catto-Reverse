// gml_Object_obj_FadeIn_Step_0
// 12 instructions, 72 bytes, 1 locals, 0 arguments

00000  push.v            self.disappear
00008  pushi.i16         1
00012  cmp.i.v           ==
00016  bf                label_72
00020  push.v            self.alpha
00028  pushi.i16         0
00032  cmp.i.v           >
00036  bf                label_72
00040  push.v            self.alpha
00048  push.d            0.05
00060  sub.d.v           
00064  pop.v.v           self.alpha
