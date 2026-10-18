// gml_Object_obj_TitleMenuCatto2_Step_0
// 100 instructions, 524 bytes, 1 locals, 0 arguments

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
00108  bf                label_272
00112  push.v            self.canselect
00120  pushi.i16         1
00124  cmp.i.v           ==
00128  bf                label_272
00132  push.v            self.menu
00140  pushi.i16         1
00144  cmp.i.v           ==
00148  bf                label_184
00152  pushi.i16         47
00156  conv.i.v          
00160  call.i            room_goto (1 args)
00168  popz.v.d          
00172  pushi.i16         0
00176  pop.v.i           self.canselect

label_184:
00184  push.v            self.menu
00192  pushi.i16         2
00196  cmp.i.v           ==
00200  bf                label_240
00204  pushi.i16         0
00208  conv.i.v          
00212  pushi.i16         1
00216  conv.i.v          
00220  pushi.i16         26
00224  conv.i.v          
00228  call.i            audio_play_sound (3 args)
00236  popz.v.d          

label_240:
00240  push.v            self.menu
00248  pushi.i16         3
00252  cmp.i.v           ==
00256  bf                label_272
00260  call.i            gml_Script_scr_ExitGame (0 args)
00268  popz.v.d          

label_272:
00272  push.v            self.keyPressUp
00280  conv.v.b          
00284  bf                label_384
00288  pushi.i16         0
00292  conv.i.v          
00296  pushi.i16         1
00300  conv.i.v          
00304  pushi.i16         26
00308  conv.i.v          
00312  call.i            audio_play_sound (3 args)
00320  popz.v.d          
00324  push.v            self.menu
00332  pushi.i16         1
00336  cmp.i.v           >
00340  bf                label_372
00344  push.v            self.menu
00352  pushi.i16         1
00356  sub.i.v           
00360  pop.v.v           self.menu
00368  b                 label_384

label_372:
00372  pushi.i16         3
00376  pop.v.i           self.menu

label_384:
00384  push.v            self.keyPressDown
00392  conv.v.b          
00396  bf                label_496
00400  pushi.i16         0
00404  conv.i.v          
00408  pushi.i16         1
00412  conv.i.v          
00416  pushi.i16         26
00420  conv.i.v          
00424  call.i            audio_play_sound (3 args)
00432  popz.v.d          
00436  push.v            self.menu
00444  pushi.i16         3
00448  cmp.i.v           <
00452  bf                label_484
00456  push.v            self.menu
00464  pushi.i16         1
00468  add.i.v           
00472  pop.v.v           self.menu
00480  b                 label_496

label_484:
00484  pushi.i16         1
00488  pop.v.i           self.menu

label_496:
00496  push.v            self.keyReleaseEnter
00504  conv.v.b          
00508  bf                label_524
00512  pushi.i16         1
00516  pop.v.i           self.canselect
