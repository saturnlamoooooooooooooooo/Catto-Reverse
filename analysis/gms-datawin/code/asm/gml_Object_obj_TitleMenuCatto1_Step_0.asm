// gml_Object_obj_TitleMenuCatto1_Step_0
// 95 instructions, 492 bytes, 1 locals, 0 arguments

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
00108  bf                label_240
00112  push.v            self.canselect
00120  pushi.i16         1
00124  cmp.i.v           ==
00128  bf                label_240
00132  push.v            self.menu
00140  dup.v.d           0
00144  pushi.i16         1
00148  cmp.i.v           ==
00152  bt                label_176
00156  dup.v.d           0
00160  pushi.i16         2
00164  cmp.i.v           ==
00168  bt                label_216
00172  b                 label_236

label_176:
00176  pushi.i16         47
00180  conv.i.v          
00184  call.i            room_goto (1 args)
00192  popz.v.d          
00196  pushi.i16         0
00200  pop.v.i           self.canselect
00208  popz.v.d          
00212  exit.i.d          

label_216:
00216  call.i            gml_Script_scr_ExitGame (0 args)
00224  popz.v.d          
00228  popz.v.d          
00232  exit.i.d          

label_236:
00236  popz.v.d          

label_240:
00240  push.v            self.keyPressUp
00248  conv.v.b          
00252  bf                label_352
00256  pushi.i16         0
00260  conv.i.v          
00264  pushi.i16         1
00268  conv.i.v          
00272  pushi.i16         26
00276  conv.i.v          
00280  call.i            audio_play_sound (3 args)
00288  popz.v.d          
00292  push.v            self.menu
00300  pushi.i16         1
00304  cmp.i.v           >
00308  bf                label_340
00312  push.v            self.menu
00320  pushi.i16         1
00324  sub.i.v           
00328  pop.v.v           self.menu
00336  b                 label_352

label_340:
00340  pushi.i16         2
00344  pop.v.i           self.menu

label_352:
00352  push.v            self.keyPressDown
00360  conv.v.b          
00364  bf                label_464
00368  pushi.i16         0
00372  conv.i.v          
00376  pushi.i16         1
00380  conv.i.v          
00384  pushi.i16         26
00388  conv.i.v          
00392  call.i            audio_play_sound (3 args)
00400  popz.v.d          
00404  push.v            self.menu
00412  pushi.i16         2
00416  cmp.i.v           <
00420  bf                label_452
00424  push.v            self.menu
00432  pushi.i16         1
00436  add.i.v           
00440  pop.v.v           self.menu
00448  b                 label_464

label_452:
00452  pushi.i16         1
00456  pop.v.i           self.menu

label_464:
00464  push.v            self.keyReleaseEnter
00472  conv.v.b          
00476  bf                label_492
00480  pushi.i16         1
00484  pop.v.i           self.canselect
