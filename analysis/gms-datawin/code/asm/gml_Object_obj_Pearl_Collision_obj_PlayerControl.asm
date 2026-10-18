// gml_Object_obj_Pearl_Collision_obj_PlayerControl
// 31 instructions, 156 bytes, 1 locals, 0 arguments

00000  call.i            instance_destroy (0 args)
00008  popz.v.d          
00012  pushglb.v         global.Pearls
00020  pushi.i16         24
00024  cmp.i.v           ==
00028  bf                label_72
00032  pushi.i16         0
00036  conv.i.v          
00040  pushi.i16         1
00044  conv.i.v          
00048  pushi.i16         29
00052  conv.i.v          
00056  call.i            audio_play_sound (3 args)
00064  popz.v.d          
00068  b                 label_108

label_72:
00072  pushi.i16         0
00076  conv.i.v          
00080  pushi.i16         1
00084  conv.i.v          
00088  pushi.i16         28
00092  conv.i.v          
00096  call.i            audio_play_sound (3 args)
00104  popz.v.d          

label_108:
00108  push.v            global.Pearls
00116  pushi.i16         1
00120  add.i.v           
00124  pop.v.v           global.Pearls
00132  push.v            global.Score
00140  pushi.i16         150
00144  add.i.v           
00148  pop.v.v           global.Score
