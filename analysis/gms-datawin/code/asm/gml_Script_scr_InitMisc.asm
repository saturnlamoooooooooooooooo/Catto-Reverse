// gml_Script_scr_InitMisc
// 85 instructions, 536 bytes, 0 locals, 0 arguments

00000  pushglb.v         global.trueEnded
00008  pushi.i16         1
00012  cmp.i.v           ==
00016  bf                label_80
00020  push.s            "Thank you "
00028  pushglb.v         global.Username
00036  add.v.s           
00040  call.i            window_set_caption (1 args)
00048  popz.v.d          
00052  pushi.i16         9
00056  pop.v.i           global.Lives
00064  pushi.i16         1
00068  pop.v.i           global.Character
00076  b                 label_420

label_80:
00080  pushglb.v         global.tryCount
00088  pushi.i16         2
00092  cmp.i.v           ==
00096  bf                label_152
00100  push.s            "dreaming"
00108  conv.s.v          
00112  call.i            window_set_caption (1 args)
00120  popz.v.d          
00124  pushi.i16         9
00128  pop.v.i           global.Lives
00136  pushi.i16         1
00140  pop.v.i           global.Character
00148  b                 label_420

label_152:
00152  pushglb.v         global.hellStage
00160  pushi.i16         2
00164  cmp.i.v           ==
00168  bf                label_224
00172  push.s            "The Adventures of Catto Boi"
00180  conv.s.v          
00184  call.i            window_set_caption (1 args)
00192  popz.v.d          
00196  pushi.i16         9
00200  pop.v.i           global.Lives
00208  pushi.i16         1
00212  pop.v.i           global.Character
00220  b                 label_420

label_224:
00224  pushglb.v         global.hellStage
00232  pushi.i16         3
00236  cmp.i.v           ==
00240  bf                label_296
00244  push.s            "Catto Boi's Bizarre Adventure"
00252  conv.s.v          
00256  call.i            window_set_caption (1 args)
00264  popz.v.d          
00268  pushi.i16         9
00272  pop.v.i           global.Lives
00280  pushi.i16         1
00284  pop.v.i           global.Character
00292  b                 label_420

label_296:
00296  pushglb.v         global.hellStage
00304  pushi.i16         5
00308  cmp.i.v           ==
00312  bf                label_372
00316  push.s            "I'M SORRYI'M SORRYI'M SORRYI'M SORRYI'M SORRYI'M SORRYI'M SORRYI'M SORRYI'M SORRYI'M SORRYI'M SORRY"
00324  conv.s.v          
00328  call.i            window_set_caption (1 args)
00336  popz.v.d          
00340  push.s            "I'M SORRY"
00348  pop.v.s           global.Lives
00356  pushi.i16         666
00360  pop.v.i           global.Character
00368  b                 label_420

label_372:
00372  push.s            "Catto Boi: Journey to Catto Land"
00380  conv.s.v          
00384  call.i            window_set_caption (1 args)
00392  popz.v.d          
00396  pushi.i16         9
00400  pop.v.i           global.Lives
00408  pushi.i16         1
00412  pop.v.i           global.Character

label_420:
00420  call.i            audio_stop_all (0 args)
00428  popz.v.d          
00432  pushi.i16         129
00436  conv.i.v          
00440  push.v            self.depth
00448  push.v            self.y
00456  push.v            self.x
00464  call.i            instance_create_depth (4 args)
00472  popz.v.d          
00476  break             setstatic
00480  exit.i.d          
