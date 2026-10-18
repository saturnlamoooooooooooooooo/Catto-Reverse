// gml_GlobalScript_scr_Init
// 113 instructions, 616 bytes, 1 locals, 0 arguments

00000  b                 label_568
00004  call.i            gml_Script_scr_CheckState (0 args)
00012  popz.v.d          
00016  call.i            gml_Script_scr_CheckTry (0 args)
00024  popz.v.d          
00028  push.s            "USERNAME"
00036  conv.s.v          
00040  call.i            environment_get_variable (1 args)
00048  pop.v.v           global.Username
00056  call.i            gml_Script_scr_InitMisc (0 args)
00064  popz.v.d          
00068  call.i            randomize (0 args)
00076  popz.v.d          
00080  pushglb.v         global.trueEnded
00088  pushi.i16         0
00092  cmp.i.v           ==
00096  bf                label_256
00100  pushglb.v         global.fakeEnded
00108  pushi.i16         1
00112  cmp.i.v           ==
00116  bf                label_144
00120  pushi.i16         18
00124  conv.i.v          
00128  call.i            room_goto (1 args)
00136  popz.v.d          
00140  b                 label_252

label_144:
00144  pushglb.v         global.hellStage
00152  pushi.i16         1
00156  cmp.i.v           ==
00160  bf                label_188
00164  pushi.i16         0
00168  conv.i.v          
00172  call.i            room_goto (1 args)
00180  popz.v.d          
00184  b                 label_252

label_188:
00188  pushglb.v         global.hellStage
00196  pushi.i16         4
00200  cmp.i.v           ==
00204  bf                label_232
00208  pushi.i16         28
00212  conv.i.v          
00216  call.i            room_goto (1 args)
00224  popz.v.d          
00228  b                 label_252

label_232:
00232  pushi.i16         46
00236  conv.i.v          
00240  call.i            room_goto (1 args)
00248  popz.v.d          

label_252:
00252  b                 label_276

label_256:
00256  pushi.i16         46
00260  conv.i.v          
00264  call.i            room_goto (1 args)
00272  popz.v.d          

label_276:
00276  pushglb.v         global.fakeEnded
00284  pushi.i16         1
00288  cmp.i.v           ==
00292  bf                label_364
00296  pushglb.v         global.tryCount
00304  pushi.i16         2
00308  cmp.i.v           ==
00312  bf                label_340
00316  pushi.i16         3
00320  conv.i.v          
00324  call.i            room_goto (1 args)
00332  popz.v.d          
00336  b                 label_364

label_340:
00340  push.v            global.tryCount
00348  push.i16          1
00352  add.i.v           
00356  pop.v.v           global.tryCount

label_364:
00364  pushglb.v         global.tryCount
00372  call.i            gml_Script_scr_writeTryCount (1 args)
00380  popz.v.d          
00384  pushi.i16         1
00388  conv.i.v          
00392  call.i            draw_set_font (1 args)
00400  popz.v.d          
00404  pushi.i16         0
00408  pop.v.i           global.RoomID
00416  pushi.i16         1
00420  pop.v.i           global.canMove
00428  pushi.i16         0
00432  pop.v.i           global.noMenu
00440  push.s            ""
00448  pop.v.s           global.levelName
00456  pushi.i16         0
00460  pop.v.i           global.Score
00468  pushi.i16         0
00472  pop.v.i           global.Level
00480  pushi.i16         0
00484  pop.v.i           global.Level1Passed
00492  pushi.i16         0
00496  pop.v.i           global.Level2Passed
00504  pushi.i16         0
00508  pop.v.i           global.Level3Passed
00516  pushi.i16         39
00520  conv.i.v          
00524  push.v            self.depth
00532  push.v            self.y
00540  push.v            self.x
00548  call.i            instance_create_depth (4 args)
00556  popz.v.d          
00560  break             setstatic
00564  exit.i.d          

label_568:
00568  push.i            [function] gml_Script_scr_Init
00576  conv.i.v          
00580  pushi.i16         -1
00584  conv.i.v          
00588  call.i            method (2 args)
00596  dup.v.d           0
00600  pushi.i16         -1
00604  pop.v.v           scr_Init [stacktop]
00612  popz.v.d          
