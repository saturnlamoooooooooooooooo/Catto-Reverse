// gml_GlobalScript_scr_InitMisc
// 95 instructions, 536 bytes, 1 locals, 0 arguments

00000  b                 label_488
00004  pushglb.v         global.trueEnded
00012  pushi.i16         1
00016  cmp.i.v           ==
00020  bf                label_84
00024  push.s            "Thank you "
00032  pushglb.v         global.Username
00040  add.v.s           
00044  call.i            window_set_caption (1 args)
00052  popz.v.d          
00056  pushi.i16         9
00060  pop.v.i           global.Lives
00068  pushi.i16         1
00072  pop.v.i           global.Character
00080  b                 label_424

label_84:
00084  pushglb.v         global.tryCount
00092  pushi.i16         2
00096  cmp.i.v           ==
00100  bf                label_156
00104  push.s            "dreaming"
00112  conv.s.v          
00116  call.i            window_set_caption (1 args)
00124  popz.v.d          
00128  pushi.i16         9
00132  pop.v.i           global.Lives
00140  pushi.i16         1
00144  pop.v.i           global.Character
00152  b                 label_424

label_156:
00156  pushglb.v         global.hellStage
00164  pushi.i16         2
00168  cmp.i.v           ==
00172  bf                label_228
00176  push.s            "The Adventures of Catto Boi"
00184  conv.s.v          
00188  call.i            window_set_caption (1 args)
00196  popz.v.d          
00200  pushi.i16         9
00204  pop.v.i           global.Lives
00212  pushi.i16         1
00216  pop.v.i           global.Character
00224  b                 label_424

label_228:
00228  pushglb.v         global.hellStage
00236  pushi.i16         3
00240  cmp.i.v           ==
00244  bf                label_300
00248  push.s            "Catto Boi's Bizarre Adventure"
00256  conv.s.v          
00260  call.i            window_set_caption (1 args)
00268  popz.v.d          
00272  pushi.i16         9
00276  pop.v.i           global.Lives
00284  pushi.i16         1
00288  pop.v.i           global.Character
00296  b                 label_424

label_300:
00300  pushglb.v         global.hellStage
00308  pushi.i16         5
00312  cmp.i.v           ==
00316  bf                label_376
00320  push.s            "I'M SORRYI'M SORRYI'M SORRYI'M SORRYI'M SORRYI'M SORRYI'M SORRYI'M SORRYI'M SORRYI'M SORRYI'M SORRY"
00328  conv.s.v          
00332  call.i            window_set_caption (1 args)
00340  popz.v.d          
00344  push.s            "I'M SORRY"
00352  pop.v.s           global.Lives
00360  pushi.i16         666
00364  pop.v.i           global.Character
00372  b                 label_424

label_376:
00376  push.s            "Catto Boi: Journey to Catto Land"
00384  conv.s.v          
00388  call.i            window_set_caption (1 args)
00396  popz.v.d          
00400  pushi.i16         9
00404  pop.v.i           global.Lives
00412  pushi.i16         1
00416  pop.v.i           global.Character

label_424:
00424  call.i            audio_stop_all (0 args)
00432  popz.v.d          
00436  pushi.i16         129
00440  conv.i.v          
00444  push.v            self.depth
00452  push.v            self.y
00460  push.v            self.x
00468  call.i            instance_create_depth (4 args)
00476  popz.v.d          
00480  break             setstatic
00484  exit.i.d          

label_488:
00488  push.i            [function] gml_Script_scr_InitMisc
00496  conv.i.v          
00500  pushi.i16         -1
00504  conv.i.v          
00508  call.i            method (2 args)
00516  dup.v.d           0
00520  pushi.i16         -1
00524  pop.v.v           scr_InitMisc [stacktop]
00532  popz.v.d          
