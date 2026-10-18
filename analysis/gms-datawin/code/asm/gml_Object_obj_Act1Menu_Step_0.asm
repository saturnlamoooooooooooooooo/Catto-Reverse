// gml_Object_obj_Act1Menu_Step_0
// 121 instructions, 644 bytes, 1 locals, 0 arguments

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
00108  bf                label_392
00112  push.v            self.canselect
00120  pushi.i16         1
00124  cmp.i.v           ==
00128  bf                label_392
00132  push.v            self.menu
00140  pushi.i16         1
00144  cmp.i.v           ==
00148  bf                label_184
00152  pushi.i16         30
00156  conv.i.v          
00160  call.i            room_goto (1 args)
00168  popz.v.d          
00172  pushi.i16         0
00176  pop.v.i           self.canselect

label_184:
00184  push.v            self.menu
00192  pushi.i16         2
00196  cmp.i.v           ==
00200  bf                label_236
00204  pushi.i16         22
00208  conv.i.v          
00212  call.i            room_goto (1 args)
00220  popz.v.d          
00224  pushi.i16         0
00228  pop.v.i           self.canselect

label_236:
00236  push.v            self.menu
00244  pushi.i16         3
00248  cmp.i.v           ==
00252  bf                label_288
00256  pushi.i16         40
00260  conv.i.v          
00264  call.i            room_goto (1 args)
00272  popz.v.d          
00276  pushi.i16         0
00280  pop.v.i           self.canselect

label_288:
00288  push.v            self.menu
00296  pushi.i16         4
00300  cmp.i.v           ==
00304  bf                label_340
00308  push.v            self.rm_RedCrash
00316  call.i            room_goto (1 args)
00324  popz.v.d          
00328  pushi.i16         0
00332  pop.v.i           self.canselect

label_340:
00340  push.v            self.menu
00348  pushi.i16         5
00352  cmp.i.v           ==
00356  bf                label_392
00360  pushi.i16         48
00364  conv.i.v          
00368  call.i            room_goto (1 args)
00376  popz.v.d          
00380  pushi.i16         0
00384  pop.v.i           self.canselect

label_392:
00392  push.v            self.keyPressUp
00400  conv.v.b          
00404  bf                label_504
00408  pushi.i16         0
00412  conv.i.v          
00416  pushi.i16         1
00420  conv.i.v          
00424  pushi.i16         26
00428  conv.i.v          
00432  call.i            audio_play_sound (3 args)
00440  popz.v.d          
00444  push.v            self.menu
00452  pushi.i16         1
00456  cmp.i.v           >
00460  bf                label_492
00464  push.v            self.menu
00472  pushi.i16         1
00476  sub.i.v           
00480  pop.v.v           self.menu
00488  b                 label_504

label_492:
00492  pushi.i16         5
00496  pop.v.i           self.menu

label_504:
00504  push.v            self.keyPressDown
00512  conv.v.b          
00516  bf                label_616
00520  pushi.i16         0
00524  conv.i.v          
00528  pushi.i16         1
00532  conv.i.v          
00536  pushi.i16         26
00540  conv.i.v          
00544  call.i            audio_play_sound (3 args)
00552  popz.v.d          
00556  push.v            self.menu
00564  pushi.i16         5
00568  cmp.i.v           <
00572  bf                label_604
00576  push.v            self.menu
00584  pushi.i16         1
00588  add.i.v           
00592  pop.v.v           self.menu
00600  b                 label_616

label_604:
00604  pushi.i16         1
00608  pop.v.i           self.menu

label_616:
00616  push.v            self.keyReleaseEnter
00624  conv.v.b          
00628  bf                label_644
00632  pushi.i16         1
00636  pop.v.i           self.canselect
