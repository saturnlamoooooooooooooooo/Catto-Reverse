// gml_Object_obj_GlobalVarMenu_Step_0
// 82 instructions, 436 bytes, 1 locals, 0 arguments

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
00108  bf                label_184
00112  push.v            self.canselect
00120  pushi.i16         1
00124  cmp.i.v           ==
00128  bf                label_184
00132  push.v            self.menu
00140  pushi.i16         1
00144  cmp.i.v           ==
00148  bf                label_184
00152  pushi.i16         48
00156  conv.i.v          
00160  call.i            room_goto (1 args)
00168  popz.v.d          
00172  pushi.i16         0
00176  pop.v.i           self.canselect

label_184:
00184  push.v            self.keyPressUp
00192  conv.v.b          
00196  bf                label_296
00200  pushi.i16         0
00204  conv.i.v          
00208  pushi.i16         1
00212  conv.i.v          
00216  pushi.i16         26
00220  conv.i.v          
00224  call.i            audio_play_sound (3 args)
00232  popz.v.d          
00236  push.v            self.menu
00244  pushi.i16         1
00248  cmp.i.v           >
00252  bf                label_284
00256  push.v            self.menu
00264  pushi.i16         1
00268  sub.i.v           
00272  pop.v.v           self.menu
00280  b                 label_296

label_284:
00284  pushi.i16         7
00288  pop.v.i           self.menu

label_296:
00296  push.v            self.keyPressDown
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
00356  pushi.i16         7
00360  cmp.i.v           <
00364  bf                label_396
00368  push.v            self.menu
00376  pushi.i16         1
00380  add.i.v           
00384  pop.v.v           self.menu
00392  b                 label_408

label_396:
00396  pushi.i16         1
00400  pop.v.i           self.menu

label_408:
00408  push.v            self.keyReleaseEnter
00416  conv.v.b          
00420  bf                label_436
00424  pushi.i16         1
00428  pop.v.i           self.canselect
