// gml_Object_obj_ToLoadScreen_Collision_obj_PlayerControl
// 50 instructions, 276 bytes, 1 locals, 0 arguments

00000  pushi.i16         130
00004  conv.i.v          
00008  push.v            self.depth
00016  push.v            self.y
00024  push.v            self.x
00032  call.i            instance_create_depth (4 args)
00040  popz.v.d          
00044  pushglb.v         global.Level
00052  pushi.i16         1
00056  cmp.i.v           ==
00060  bf                label_104
00064  pushi.i16         1
00068  pop.v.i           global.Level1Passed
00076  pushi.i16         0
00080  pop.v.i           global.Level2Passed
00088  pushi.i16         0
00092  pop.v.i           global.Level3Passed
00100  b                 label_244

label_104:
00104  pushglb.v         global.Level
00112  pushi.i16         2
00116  cmp.i.v           ==
00120  bf                label_164
00124  pushi.i16         0
00128  pop.v.i           global.Level1Passed
00136  pushi.i16         1
00140  pop.v.i           global.Level2Passed
00148  pushi.i16         0
00152  pop.v.i           global.Level3Passed
00160  b                 label_244

label_164:
00164  pushglb.v         global.Level
00172  pushi.i16         3
00176  cmp.i.v           ==
00180  bf                label_244
00184  pushi.i16         0
00188  pop.v.i           global.Level1Passed
00196  pushi.i16         0
00200  pop.v.i           global.Level2Passed
00208  pushi.i16         1
00212  pop.v.i           global.Level3Passed
00220  push.s            "DIEDIEDIEDIEDIEDIEDIEDIEDIEDIEDIEDIE"
00228  conv.s.v          
00232  call.i            widget_set_caption (1 args)
00240  popz.v.d          

label_244:
00244  pushi.i16         2552
00248  break             setowner
00252  pushi.i16         2
00256  conv.i.v          
00260  pushi.i16         -1
00264  pushi.i16         0
00268  pop.v.v           alarm [array]
