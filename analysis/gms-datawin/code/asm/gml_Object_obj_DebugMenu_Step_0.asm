// gml_Object_obj_DebugMenu_Step_0
// 169 instructions, 924 bytes, 1 locals, 0 arguments

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
00108  bf                label_672
00112  push.v            self.canselect
00120  pushi.i16         1
00124  cmp.i.v           ==
00128  bf                label_672
00132  push.v            self.menu
00140  pushi.i16         1
00144  cmp.i.v           ==
00148  bf                label_184
00152  pushi.i16         16
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
00204  pushi.i16         33
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
00256  push.v            self.rm_Act2Menu
00264  call.i            room_goto (1 args)
00272  popz.v.d          
00276  pushi.i16         0
00280  pop.v.i           self.canselect

label_288:
00288  push.v            self.menu
00296  pushi.i16         4
00300  cmp.i.v           ==
00304  bf                label_340
00308  push.v            self.rm_Act3Menu
00316  call.i            room_goto (1 args)
00324  popz.v.d          
00328  pushi.i16         0
00332  pop.v.i           self.canselect

label_340:
00340  push.v            self.menu
00348  pushi.i16         5
00352  cmp.i.v           ==
00356  bf                label_392
00360  push.v            self.rm_Act4Menu
00368  call.i            room_goto (1 args)
00376  popz.v.d          
00380  pushi.i16         0
00384  pop.v.i           self.canselect

label_392:
00392  push.v            self.menu
00400  pushi.i16         6
00404  cmp.i.v           ==
00408  bf                label_444
00412  push.v            self.rm_Act5Menu
00420  call.i            room_goto (1 args)
00428  popz.v.d          
00432  pushi.i16         0
00436  pop.v.i           self.canselect

label_444:
00444  push.v            self.menu
00452  pushi.i16         7
00456  cmp.i.v           ==
00460  bf                label_672
00464  pushglb.v         global.hellStage
00472  pushi.i16         1
00476  cmp.i.v           ==
00480  bf                label_508
00484  push.v            self.rm_TitleScreen1
00492  call.i            room_goto (1 args)
00500  popz.v.d          
00504  b                 label_660

label_508:
00508  pushglb.v         global.hellStage
00516  pushi.i16         2
00520  cmp.i.v           ==
00524  bf                label_552
00528  push.v            self.rm_TitleScreen2
00536  call.i            room_goto (1 args)
00544  popz.v.d          
00548  b                 label_660

label_552:
00552  pushglb.v         global.hellStage
00560  pushi.i16         3
00564  cmp.i.v           ==
00568  bf                label_596
00572  push.v            self.rm_TitleScreen3
00580  call.i            room_goto (1 args)
00588  popz.v.d          
00592  b                 label_660

label_596:
00596  pushglb.v         global.hellStage
00604  pushi.i16         4
00608  cmp.i.v           ==
00612  bf                label_640
00616  push.v            self.rm_TitleScreen4
00624  call.i            room_goto (1 args)
00632  popz.v.d          
00636  b                 label_660

label_640:
00640  push.v            self.rm_TitleScreen1
00648  call.i            room_goto (1 args)
00656  popz.v.d          

label_660:
00660  pushi.i16         0
00664  pop.v.i           self.canselect

label_672:
00672  push.v            self.keyPressUp
00680  conv.v.b          
00684  bf                label_784
00688  pushi.i16         0
00692  conv.i.v          
00696  pushi.i16         1
00700  conv.i.v          
00704  pushi.i16         26
00708  conv.i.v          
00712  call.i            audio_play_sound (3 args)
00720  popz.v.d          
00724  push.v            self.menu
00732  pushi.i16         1
00736  cmp.i.v           >
00740  bf                label_772
00744  push.v            self.menu
00752  pushi.i16         1
00756  sub.i.v           
00760  pop.v.v           self.menu
00768  b                 label_784

label_772:
00772  pushi.i16         7
00776  pop.v.i           self.menu

label_784:
00784  push.v            self.keyPressDown
00792  conv.v.b          
00796  bf                label_896
00800  pushi.i16         0
00804  conv.i.v          
00808  pushi.i16         1
00812  conv.i.v          
00816  pushi.i16         26
00820  conv.i.v          
00824  call.i            audio_play_sound (3 args)
00832  popz.v.d          
00836  push.v            self.menu
00844  pushi.i16         7
00848  cmp.i.v           <
00852  bf                label_884
00856  push.v            self.menu
00864  pushi.i16         1
00868  add.i.v           
00872  pop.v.v           self.menu
00880  b                 label_896

label_884:
00884  pushi.i16         1
00888  pop.v.i           self.menu

label_896:
00896  push.v            self.keyReleaseEnter
00904  conv.v.b          
00908  bf                label_924
00912  pushi.i16         1
00916  pop.v.i           self.canselect
