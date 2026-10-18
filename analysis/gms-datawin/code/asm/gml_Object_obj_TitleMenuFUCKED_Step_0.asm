// gml_Object_obj_TitleMenuFUCKED_Step_0
// 106 instructions, 548 bytes, 1 locals, 0 arguments

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
00108  bf                label_296
00112  push.v            self.canselect
00120  pushi.i16         1
00124  cmp.i.v           ==
00128  bf                label_296
00132  push.v            self.menu
00140  pushi.i16         1
00144  cmp.i.v           ==
00148  bf                label_184
00152  pushi.i16         18
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
00256  bf                label_296
00260  pushi.i16         0
00264  conv.i.v          
00268  pushi.i16         1
00272  conv.i.v          
00276  pushi.i16         26
00280  conv.i.v          
00284  call.i            audio_play_sound (3 args)
00292  popz.v.d          

label_296:
00296  push.v            self.keyPressUp
00304  conv.v.b          
00308  bf                label_408
00312  pushi.i16         0
00316  conv.i.v          
00320  pushi.i16         1
00324  conv.i.v          
00328  pushi.i16         26
00332  conv.i.v          
00336  call.i            audio_play_sound (3 args)
00344  popz.v.d          
00348  push.v            self.menu
00356  pushi.i16         1
00360  cmp.i.v           >
00364  bf                label_396
00368  push.v            self.menu
00376  pushi.i16         1
00380  sub.i.v           
00384  pop.v.v           self.menu
00392  b                 label_408

label_396:
00396  pushi.i16         3
00400  pop.v.i           self.menu

label_408:
00408  push.v            self.keyPressDown
00416  conv.v.b          
00420  bf                label_520
00424  pushi.i16         0
00428  conv.i.v          
00432  pushi.i16         1
00436  conv.i.v          
00440  pushi.i16         26
00444  conv.i.v          
00448  call.i            audio_play_sound (3 args)
00456  popz.v.d          
00460  push.v            self.menu
00468  pushi.i16         3
00472  cmp.i.v           <
00476  bf                label_508
00480  push.v            self.menu
00488  pushi.i16         1
00492  add.i.v           
00496  pop.v.v           self.menu
00504  b                 label_520

label_508:
00508  pushi.i16         1
00512  pop.v.i           self.menu

label_520:
00520  push.v            self.keyReleaseEnter
00528  conv.v.b          
00532  bf                label_548
00536  pushi.i16         1
00540  pop.v.i           self.canselect
