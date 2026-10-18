// gml_Script_scr_Init
// 103 instructions, 616 bytes, 0 locals, 0 arguments

00000  call.i            gml_Script_scr_CheckState (0 args)
00008  popz.v.d          
00012  call.i            gml_Script_scr_CheckTry (0 args)
00020  popz.v.d          
00024  push.s            "USERNAME"
00032  conv.s.v          
00036  call.i            environment_get_variable (1 args)
00044  pop.v.v           global.Username
00052  call.i            gml_Script_scr_InitMisc (0 args)
00060  popz.v.d          
00064  call.i            randomize (0 args)
00072  popz.v.d          
00076  pushglb.v         global.trueEnded
00084  pushi.i16         0
00088  cmp.i.v           ==
00092  bf                label_252
00096  pushglb.v         global.fakeEnded
00104  pushi.i16         1
00108  cmp.i.v           ==
00112  bf                label_140
00116  pushi.i16         18
00120  conv.i.v          
00124  call.i            room_goto (1 args)
00132  popz.v.d          
00136  b                 label_248

label_140:
00140  pushglb.v         global.hellStage
00148  pushi.i16         1
00152  cmp.i.v           ==
00156  bf                label_184
00160  pushi.i16         0
00164  conv.i.v          
00168  call.i            room_goto (1 args)
00176  popz.v.d          
00180  b                 label_248

label_184:
00184  pushglb.v         global.hellStage
00192  pushi.i16         4
00196  cmp.i.v           ==
00200  bf                label_228
00204  pushi.i16         28
00208  conv.i.v          
00212  call.i            room_goto (1 args)
00220  popz.v.d          
00224  b                 label_248

label_228:
00228  pushi.i16         46
00232  conv.i.v          
00236  call.i            room_goto (1 args)
00244  popz.v.d          

label_248:
00248  b                 label_272

label_252:
00252  pushi.i16         46
00256  conv.i.v          
00260  call.i            room_goto (1 args)
00268  popz.v.d          

label_272:
00272  pushglb.v         global.fakeEnded
00280  pushi.i16         1
00284  cmp.i.v           ==
00288  bf                label_360
00292  pushglb.v         global.tryCount
00300  pushi.i16         2
00304  cmp.i.v           ==
00308  bf                label_336
00312  pushi.i16         3
00316  conv.i.v          
00320  call.i            room_goto (1 args)
00328  popz.v.d          
00332  b                 label_360

label_336:
00336  push.v            global.tryCount
00344  push.i16          1
00348  add.i.v           
00352  pop.v.v           global.tryCount

label_360:
00360  pushglb.v         global.tryCount
00368  call.i            gml_Script_scr_writeTryCount (1 args)
00376  popz.v.d          
00380  pushi.i16         1
00384  conv.i.v          
00388  call.i            draw_set_font (1 args)
00396  popz.v.d          
00400  pushi.i16         0
00404  pop.v.i           global.RoomID
00412  pushi.i16         1
00416  pop.v.i           global.canMove
00424  pushi.i16         0
00428  pop.v.i           global.noMenu
00436  push.s            ""
00444  pop.v.s           global.levelName
00452  pushi.i16         0
00456  pop.v.i           global.Score
00464  pushi.i16         0
00468  pop.v.i           global.Level
00476  pushi.i16         0
00480  pop.v.i           global.Level1Passed
00488  pushi.i16         0
00492  pop.v.i           global.Level2Passed
00500  pushi.i16         0
00504  pop.v.i           global.Level3Passed
00512  pushi.i16         39
00516  conv.i.v          
00520  push.v            self.depth
00528  push.v            self.y
00536  push.v            self.x
00544  call.i            instance_create_depth (4 args)
00552  popz.v.d          
00556  break             setstatic
00560  exit.i.d          
