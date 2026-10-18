// gml_Object_obj_BigBoi_Create_0
// 27 instructions, 144 bytes, 1 locals, 0 arguments

00000  pushglb.v         global.hellStage
00008  pushi.i16         4
00012  cmp.i.v           <
00016  bf                label_84
00020  pushi.i16         144
00024  conv.i.v          
00028  push.v            self.depth
00036  push.v            self.y
00044  pushi.i16         92
00048  sub.i.v           
00052  push.v            self.x
00060  pushi.i16         256
00064  sub.i.v           
00068  call.i            instance_create_depth (4 args)
00076  popz.v.d          
00080  b                 label_144

label_84:
00084  pushi.i16         80
00088  conv.i.v          
00092  push.v            self.depth
00100  push.v            self.y
00108  pushi.i16         92
00112  sub.i.v           
00116  push.v            self.x
00124  pushi.i16         256
00128  sub.i.v           
00132  call.i            instance_create_depth (4 args)
00140  popz.v.d          
