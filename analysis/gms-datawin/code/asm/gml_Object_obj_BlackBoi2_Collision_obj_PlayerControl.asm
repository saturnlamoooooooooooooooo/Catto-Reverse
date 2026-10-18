// gml_Object_obj_BlackBoi2_Collision_obj_PlayerControl
// 21 instructions, 108 bytes, 1 locals, 0 arguments

00000  push.v            self.touched
00008  pushi.i16         1
00012  cmp.i.v           ==
00016  bf                label_28
00020  exit.i.d          
00024  b                 label_108

label_28:
00028  pushi.i16         1
00032  pop.v.i           self.touched
00040  pushi.i16         37
00044  pop.v.i           self.sprite_index
00052  pushi.i16         1
00056  pop.v.i           self.image_xscale
00064  pushi.i16         14
00068  pop.v.i           self.hspeed
00076  pushi.i16         2552
00080  break             setowner
00084  pushi.i16         60
00088  conv.i.v          
00092  pushi.i16         -1
00096  pushi.i16         0
00100  pop.v.v           alarm [array]
