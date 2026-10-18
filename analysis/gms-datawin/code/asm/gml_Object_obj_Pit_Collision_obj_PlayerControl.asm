// gml_Object_obj_Pit_Collision_obj_PlayerControl
// 75 instructions, 372 bytes, 1 locals, 0 arguments

00000  pushglb.v         global.hellStage
00008  pushi.i16         1
00012  cmp.i.v           >=
00016  bt                label_40
00020  pushglb.v         global.Level3Passed
00028  pushi.i16         1
00032  cmp.i.v           ==
00036  b                 label_44

label_40:
00040  push.i16          1

label_44:
00044  bf                label_72
00048  pushi.i16         13
00052  conv.i.v          
00056  call.i            room_goto (1 args)
00064  popz.v.d          
00068  b                 label_372

label_72:
00072  pushi.i16         0
00076  pop.v.i           global.canMove
00084  pushglb.v         global.Lives
00092  pushi.i16         0
00096  cmp.i.v           ==
00100  bf                label_268
00104  call.i            audio_stop_all (0 args)
00112  popz.v.d          
00116  pushi.i16         0
00120  conv.i.v          
00124  pushi.i16         1
00128  conv.i.v          
00132  pushi.i16         33
00136  conv.i.v          
00140  call.i            audio_play_sound (3 args)
00148  popz.v.d          
00152  pushi.i16         0
00156  conv.i.v          
00160  pushi.i16         1
00164  conv.i.v          
00168  pushi.i16         6
00172  conv.i.v          
00176  call.i            audio_play_sound (3 args)
00184  popz.v.d          
00188  pushi.i16         127
00192  conv.i.v          
00196  push.v            self.depth
00204  push.v            self.y
00212  push.v            self.x
00220  call.i            instance_create_depth (4 args)
00228  popz.v.d          
00232  pushi.i16         2552
00236  break             setowner
00240  pushi.i16         750
00244  conv.i.v          
00248  pushi.i16         -1
00252  pushi.i16         1
00256  pop.v.v           alarm [array]
00264  b                 label_372

label_268:
00268  call.i            audio_stop_all (0 args)
00276  popz.v.d          
00280  pushi.i16         0
00284  conv.i.v          
00288  pushi.i16         1
00292  conv.i.v          
00296  pushi.i16         33
00300  conv.i.v          
00304  call.i            audio_play_sound (3 args)
00312  popz.v.d          
00316  pushi.i16         2552
00320  break             setowner
00324  pushi.i16         120
00328  conv.i.v          
00332  pushi.i16         -1
00336  pushi.i16         0
00340  pop.v.v           alarm [array]
00348  push.v            global.Lives
00356  pushi.i16         1
00360  sub.i.v           
00364  pop.v.v           global.Lives
