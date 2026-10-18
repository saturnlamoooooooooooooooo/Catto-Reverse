// gml_Object_obj_PlayerControl_Other_4
// 33 instructions, 168 bytes, 1 locals, 0 arguments

00000  pushglb.v         global.noMenu
00008  pushi.i16         0
00012  cmp.i.v           ==
00016  bf                label_168
00020  pushglb.v         global.RoomID
00028  push.s            "hub"
00036  cmp.s.v           ==
00040  bt                label_68
00044  pushglb.v         global.RoomID
00052  push.s            "hubDay"
00060  cmp.s.v           ==
00064  b                 label_72

label_68:
00068  push.i16          1

label_72:
00072  bf                label_124
00076  pushi.i16         55
00080  conv.i.v          
00084  push.v            self.depth
00092  pushi.i16         10
00096  conv.i.v          
00100  pushi.i16         10
00104  conv.i.v          
00108  call.i            instance_create_depth (4 args)
00116  popz.v.d          
00120  b                 label_168

label_124:
00124  pushi.i16         103
00128  conv.i.v          
00132  push.v            self.depth
00140  pushi.i16         10
00144  conv.i.v          
00148  pushi.i16         10
00152  conv.i.v          
00156  call.i            instance_create_depth (4 args)
00164  popz.v.d          
