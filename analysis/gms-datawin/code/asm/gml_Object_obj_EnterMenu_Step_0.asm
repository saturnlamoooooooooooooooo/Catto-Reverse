// gml_Object_obj_EnterMenu_Step_0
// 124 instructions, 656 bytes, 1 locals, 0 arguments

00000  pushi.i16         13
00004  conv.i.v          
00008  call.i            keyboard_check_pressed (1 args)
00016  pop.v.v           self.keyPressEnter
00024  pushi.i16         13
00028  conv.i.v          
00032  call.i            keyboard_check_released (1 args)
00040  pop.v.v           self.keyReleaseEnter
00048  pushi.i16         38
00052  conv.i.v          
00056  call.i            keyboard_check_pressed (1 args)
00064  pop.v.v           self.keyPressUp
00072  pushi.i16         40
00076  conv.i.v          
00080  call.i            keyboard_check_pressed (1 args)
00088  pop.v.v           self.keyPressDown
00096  push.v            self.keyPressEnter
00104  conv.v.b          
00108  bf                label_404
00112  push.v            self.canselect
00120  pushi.i16         1
00124  cmp.i.v           ==
00128  bf                label_404
00132  push.v            self.menu
00140  pushi.i16         1
00144  cmp.i.v           ==
00148  bf                label_220
00152  call.i            audio_resume_all (0 args)
00160  popz.v.d          
00164  call.i            instance_destroy (0 args)
00172  popz.v.d          
00176  pushi.i16         147
00180  conv.i.v          
00184  call.i            instance_destroy (1 args)
00192  popz.v.d          
00196  call.i            instance_activate_all (0 args)
00204  popz.v.d          
00208  pushi.i16         0
00212  pop.v.i           self.canselect

label_220:
00220  push.v            self.menu
00228  pushi.i16         2
00232  cmp.i.v           ==
00236  bf                label_264
00240  call.i            room_restart (0 args)
00248  popz.v.d          
00252  pushi.i16         0
00256  pop.v.i           self.canselect

label_264:
00264  push.v            self.menu
00272  pushi.i16         3
00276  cmp.i.v           ==
00280  bf                label_404
00284  pushglb.v         global.hellStage
00292  pushi.i16         2
00296  cmp.i.v           ==
00300  bf                label_328
00304  pushi.i16         26
00308  conv.i.v          
00312  call.i            room_goto (1 args)
00320  popz.v.d          
00324  b                 label_392

label_328:
00328  pushglb.v         global.hellStage
00336  pushi.i16         3
00340  cmp.i.v           ==
00344  bf                label_372
00348  pushi.i16         38
00352  conv.i.v          
00356  call.i            room_goto (1 args)
00364  popz.v.d          
00368  b                 label_392

label_372:
00372  pushi.i16         2
00376  conv.i.v          
00380  call.i            room_goto (1 args)
00388  popz.v.d          

label_392:
00392  pushi.i16         0
00396  pop.v.i           self.canselect

label_404:
00404  push.v            self.keyPressUp
00412  conv.v.b          
00416  bf                label_516
00420  pushi.i16         0
00424  conv.i.v          
00428  pushi.i16         1
00432  conv.i.v          
00436  pushi.i16         26
00440  conv.i.v          
00444  call.i            audio_play_sound (3 args)
00452  popz.v.d          
00456  push.v            self.menu
00464  pushi.i16         1
00468  cmp.i.v           >
00472  bf                label_504
00476  push.v            self.menu
00484  pushi.i16         1
00488  sub.i.v           
00492  pop.v.v           self.menu
00500  b                 label_516

label_504:
00504  pushi.i16         3
00508  pop.v.i           self.menu

label_516:
00516  push.v            self.keyPressDown
00524  conv.v.b          
00528  bf                label_628
00532  pushi.i16         0
00536  conv.i.v          
00540  pushi.i16         1
00544  conv.i.v          
00548  pushi.i16         26
00552  conv.i.v          
00556  call.i            audio_play_sound (3 args)
00564  popz.v.d          
00568  push.v            self.menu
00576  pushi.i16         3
00580  cmp.i.v           <
00584  bf                label_616
00588  push.v            self.menu
00596  pushi.i16         1
00600  add.i.v           
00604  pop.v.v           self.menu
00612  b                 label_628

label_616:
00616  pushi.i16         1
00620  pop.v.i           self.menu

label_628:
00628  push.v            self.keyReleaseEnter
00636  conv.v.b          
00640  bf                label_656
00644  pushi.i16         1
00648  pop.v.i           self.canselect
