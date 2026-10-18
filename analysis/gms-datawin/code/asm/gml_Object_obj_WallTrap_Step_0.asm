// gml_Object_obj_WallTrap_Step_0
// 23 instructions, 128 bytes, 1 locals, 0 arguments

00000  pushglb.v         global.Pearls
00008  pushi.i16         25
00012  cmp.i.v           ==
00016  bf                label_44
00020  call.i            @@This@@ (0 args)
00028  call.i            instance_destroy (1 args)
00036  popz.v.d          
00040  b                 label_128

label_44:
00044  pushglb.v         global.TinyBisc
00052  pushi.i16         25
00056  cmp.i.v           ==
00060  bf                label_88
00064  call.i            @@This@@ (0 args)
00072  call.i            instance_destroy (1 args)
00080  popz.v.d          
00084  b                 label_128

label_88:
00088  pushglb.v         global.CatFood
00096  pushi.i16         5
00100  cmp.i.v           ==
00104  bf                label_128
00108  call.i            @@This@@ (0 args)
00116  call.i            instance_destroy (1 args)
00124  popz.v.d          
