// gml_Object_obj_PlayerControl_Step_0
// 435 instructions, 2512 bytes, 2 locals, 0 arguments

00000  pushi.i16         38
00004  conv.i.v          
00008  call.i            keyboard_check_pressed (1 args)
00016  pop.v.v           self.keyup
00024  pushi.i16         38
00028  conv.i.v          
00032  call.i            keyboard_check_released (1 args)
00040  pop.v.v           self.keyreleaseup
00048  pushi.i16         37
00052  conv.i.v          
00056  call.i            keyboard_check (1 args)
00064  pop.v.v           self.keyleft
00072  pushi.i16         39
00076  conv.i.v          
00080  call.i            keyboard_check (1 args)
00088  pop.v.v           self.keyright
00096  pushi.i16         13
00100  conv.i.v          
00104  call.i            keyboard_check_pressed (1 args)
00112  pop.v.v           self.keyenter
00120  pushi.i16         17
00124  conv.i.v          
00128  call.i            keyboard_check_pressed (1 args)
00136  pop.v.v           self.keyaction
00144  call.i            gml_Script_scr_Camera (0 args)
00152  popz.v.d          
00156  call.i            gml_Script_scr_Parallax (0 args)
00164  popz.v.d          
00168  push.v            self.keyenter
00176  conv.v.b          
00180  bf                label_300
00184  pushglb.v         global.canMove
00192  pushi.i16         1
00196  cmp.i.v           ==
00200  bf                label_300
00204  pushglb.v         global.noMenu
00212  pushi.i16         0
00216  cmp.i.v           ==
00220  bf                label_300
00224  pushi.i16         0
00228  conv.i.v          
00232  call.i            instance_deactivate_all (1 args)
00240  popz.v.d          
00244  call.i            audio_pause_all (0 args)
00252  popz.v.d          
00256  pushi.i16         137
00260  conv.i.v          
00264  push.v            self.depth
00272  pushi.i16         0
00276  conv.i.v          
00280  pushi.i16         0
00284  conv.i.v          
00288  call.i            instance_create_depth (4 args)
00296  popz.v.d          

label_300:
00300  pushglb.v         global.canMove
00308  pushi.i16         1
00312  cmp.i.v           ==
00316  bf                label_1836
00320  push.v            self.keyleft
00328  neg.v.d           
00332  push.v            self.keyright
00340  add.v.v           
00344  pop.v.v           local.move
00352  push.v            self.keyleft
00360  conv.v.b          
00364  bf                label_380
00368  pushi.i16         180
00372  pop.v.i           self.direction

label_380:
00380  push.v            self.keyright
00388  conv.v.b          
00392  bf                label_408
00396  pushi.i16         0
00400  pop.v.i           self.direction

label_408:
00408  pushloc.v         local.move
00416  pushi.i16         0
00420  cmp.i.v           !=
00424  bf                label_460
00428  pushloc.v         local.move
00436  push.v            self.movespeed
00444  mul.v.v           
00448  pop.v.v           self.hsp
00456  b                 label_492

label_460:
00460  push.v            self.hsp
00468  push.d            0.82
00480  mul.d.v           
00484  pop.v.v           self.hsp

label_492:
00492  push.v            self.vsp
00500  pushi.i16         15
00504  cmp.i.v           <
00508  bf                label_540
00512  push.v            self.vsp
00520  push.v            self.grav
00528  add.v.v           
00532  pop.v.v           self.vsp

label_540:
00540  pushi.i16         106
00544  conv.i.v          
00548  push.v            self.y
00556  pushi.i16         1
00560  add.i.v           
00564  push.v            self.x
00572  call.i            place_meeting (3 args)
00580  conv.v.b          
00584  bf                label_620
00588  push.v            self.keyup
00596  push.v            self.jumpspeed
00604  neg.v.d           
00608  mul.v.v           
00612  pop.v.v           self.vsp

label_620:
00620  push.v            self.keyup
00628  conv.v.b          
00632  bf                label_680
00636  push.v            self.y
00644  pushi.i16         1
00648  add.i.v           
00652  push.v            self.x
00660  call.i            place_free (2 args)
00668  conv.v.b          
00672  not.b.d           
00676  b                 label_684

label_680:
00680  push.i16          0

label_684:
00684  bf                label_724
00688  pushi.i16         0
00692  conv.i.v          
00696  pushi.i16         2
00700  conv.i.v          
00704  push.v            self.soundJump
00712  call.i            audio_play_sound (3 args)
00720  popz.v.d          

label_724:
00724  push.v            self.keyreleaseup
00732  conv.v.b          
00736  bf                label_784
00740  push.v            self.vsp
00748  pushi.i16         0
00752  cmp.i.v           <
00756  bf                label_784
00760  push.v            self.vsp
00768  pushi.i16         3
00772  div.i.v           
00776  pop.v.v           self.vsp

label_784:
00784  pushi.i16         106
00788  conv.i.v          
00792  push.v            self.y
00800  push.v            self.x
00808  push.v            self.hsp
00816  add.v.v           
00820  call.i            place_meeting (3 args)
00828  conv.v.b          
00832  bf                label_952

label_836:
00836  pushi.i16         106
00840  conv.i.v          
00844  push.v            self.y
00852  push.v            self.x
00860  push.v            self.hsp
00868  call.i            sign (1 args)
00876  add.v.v           
00880  call.i            place_meeting (3 args)
00888  conv.v.b          
00892  not.b.d           
00896  bf                label_940
00900  push.v            self.x
00908  push.v            self.hsp
00916  call.i            sign (1 args)
00924  add.v.v           
00928  pop.v.v           self.x
00936  b                 label_836

label_940:
00940  pushi.i16         0
00944  pop.v.i           self.hsp

label_952:
00952  push.v            self.x
00960  push.v            self.hsp
00968  add.v.v           
00972  pop.v.v           self.x
00980  pushi.i16         106
00984  conv.i.v          
00988  push.v            self.y
00996  push.v            self.vsp
01004  add.v.v           
01008  push.v            self.x
01016  call.i            place_meeting (3 args)
01024  conv.v.b          
01028  bf                label_1148

label_1032:
01032  pushi.i16         106
01036  conv.i.v          
01040  push.v            self.y
01048  push.v            self.vsp
01056  call.i            sign (1 args)
01064  add.v.v           
01068  push.v            self.x
01076  call.i            place_meeting (3 args)
01084  conv.v.b          
01088  not.b.d           
01092  bf                label_1136
01096  push.v            self.y
01104  push.v            self.vsp
01112  call.i            sign (1 args)
01120  add.v.v           
01124  pop.v.v           self.y
01132  b                 label_1032

label_1136:
01136  pushi.i16         0
01140  pop.v.i           self.vsp

label_1148:
01148  push.v            self.y
01156  push.v            self.vsp
01164  add.v.v           
01168  pop.v.v           self.y
01176  push.v            self.y
01184  pushi.i16         1
01188  add.i.v           
01192  push.v            self.x
01200  call.i            place_free (2 args)
01208  conv.v.b          
01212  not.b.d           
01216  bf                label_1572
01220  push.v            self.hsp
01228  pushi.i16         1
01232  cmp.i.v           >=
01236  bf                label_1300
01240  push.v            self.spriteRun
01248  pop.v.v           self.sprite_index
01256  pushi.i16         1
01260  pop.v.i           self.image_xscale
01268  push.v            self.hsp
01276  pushi.i16         8
01280  conv.i.d          
01284  div.d.v           
01288  pop.v.v           self.image_speed
01296  b                 label_1568

label_1300:
01300  push.v            self.hsp
01308  pushi.i16         -1
01312  cmp.i.v           <=
01316  bf                label_1380
01320  push.v            self.spriteRun
01328  pop.v.v           self.sprite_index
01336  pushi.i16         -1
01340  pop.v.i           self.image_xscale
01348  push.v            self.hsp
01356  pushi.i16         -8
01360  conv.i.d          
01364  div.d.v           
01368  pop.v.v           self.image_speed
01376  b                 label_1568

label_1380:
01380  push.v            self.hsp
01388  push.d            0.1
01400  cmp.d.v           <=
01404  bt                label_1436
01408  push.v            self.hsp
01416  push.d            -0.1
01428  cmp.d.v           >=
01432  b                 label_1440

label_1436:
01436  push.i16          1

label_1440:
01440  bf                label_1568
01444  push.v            self.direction
01452  pushi.i16         0
01456  cmp.i.v           ==
01460  bf                label_1508
01464  push.v            self.spriteStand
01472  pop.v.v           self.sprite_index
01480  pushi.i16         1
01484  pop.v.i           self.image_xscale
01492  pushi.i16         1
01496  pop.v.i           self.image_speed
01504  b                 label_1568

label_1508:
01508  push.v            self.direction
01516  pushi.i16         180
01520  cmp.i.v           ==
01524  bf                label_1568
01528  push.v            self.spriteStand
01536  pop.v.v           self.sprite_index
01544  pushi.i16         -1
01548  pop.v.i           self.image_xscale
01556  pushi.i16         -1
01560  pop.v.i           self.image_speed

label_1568:
01568  b                 label_1832

label_1572:
01572  push.v            self.y
01580  pushi.i16         1
01584  add.i.v           
01588  push.v            self.x
01596  call.i            place_free (2 args)
01604  conv.v.b          
01608  bf                label_1832
01612  push.v            self.hsp
01620  pushi.i16         1
01624  cmp.i.v           >=
01628  bf                label_1676
01632  push.v            self.spriteJump
01640  pop.v.v           self.sprite_index
01648  pushi.i16         1
01652  pop.v.i           self.image_xscale
01660  pushi.i16         1
01664  pop.v.i           self.image_speed
01672  b                 label_1832

label_1676:
01676  push.v            self.hsp
01684  pushi.i16         -1
01688  cmp.i.v           <=
01692  bf                label_1740
01696  push.v            self.spriteJump
01704  pop.v.v           self.sprite_index
01712  pushi.i16         -1
01716  pop.v.i           self.image_xscale
01724  pushi.i16         -1
01728  pop.v.i           self.image_speed
01736  b                 label_1832

label_1740:
01740  push.v            self.hsp
01748  push.d            0.1
01760  cmp.d.v           <=
01764  bt                label_1796
01768  push.v            self.hsp
01776  push.d            -0.1
01788  cmp.d.v           >=
01792  b                 label_1800

label_1796:
01796  push.i16          1

label_1800:
01800  bf                label_1832
01804  push.v            self.spriteJump
01812  pop.v.v           self.sprite_index
01820  pushi.i16         1
01824  pop.v.i           self.image_speed

label_1832:
01832  b                 label_1924

label_1836:
01836  pushi.i16         0
01840  pop.v.i           self.hsp
01848  push.v            self.y
01856  pushi.i16         1
01860  add.i.v           
01864  push.v            self.x
01872  call.i            place_free (2 args)
01880  conv.v.b          
01884  bf                label_1908
01888  push.v            self.spriteJump
01896  pop.v.v           self.sprite_index
01904  b                 label_1924

label_1908:
01908  push.v            self.spriteStand
01916  pop.v.v           self.sprite_index

label_1924:
01924  push.v            self.keyaction
01932  conv.v.b          
01936  bf                label_1960
01940  push.v            self.actionPerform
01948  pushi.i16         0
01952  cmp.i.v           ==
01956  b                 label_1964

label_1960:
01960  push.i16          0

label_1964:
01964  bf                label_2508
01968  pushglb.v         global.Level3Passed
01976  pushi.i16         0
01980  cmp.i.v           ==
01984  bf                label_2008
01988  pushglb.v         global.hellStage
01996  pushi.i16         1
02000  cmp.i.v           <
02004  b                 label_2012

label_2008:
02008  push.i16          0

label_2012:
02012  bf                label_2504
02016  pushi.i16         0
02020  pop.v.i           global.canMove
02028  call.i            audio_pause_all (0 args)
02036  popz.v.d          
02040  pushi.i16         0
02044  conv.i.v          
02048  pushi.i16         1
02052  conv.i.v          
02056  push.v            self.actionSound
02064  call.i            audio_play_sound (3 args)
02072  popz.v.d          
02076  pushi.i16         1
02080  pop.v.i           self.actionPerform
02088  pushi.i16         2552
02092  break             setowner
02096  push.v            self.actionAudioDuration
02104  pushi.i16         -1
02108  pushi.i16         0
02112  pop.v.v           alarm [array]
02120  push.v            self.y
02128  pushi.i16         1
02132  add.i.v           
02136  push.v            self.x
02144  call.i            place_free (2 args)
02152  conv.v.b          
02156  not.b.d           
02160  bf                label_2316
02164  push.v            self.direction
02172  pushi.i16         0
02176  cmp.i.v           ==
02180  bf                label_2240
02184  push.v            self.spriteAction
02192  pop.v.v           self.sprite_index
02200  pushi.i16         0
02204  pop.v.i           self.image_index
02212  pushi.i16         1
02216  pop.v.i           self.image_xscale
02224  pushi.i16         1
02228  pop.v.i           self.image_speed
02236  b                 label_2312

label_2240:
02240  push.v            self.direction
02248  pushi.i16         180
02252  cmp.i.v           ==
02256  bf                label_2312
02260  push.v            self.spriteAction
02268  pop.v.v           self.sprite_index
02276  pushi.i16         0
02280  pop.v.i           self.image_index
02288  pushi.i16         -1
02292  pop.v.i           self.image_xscale
02300  pushi.i16         -1
02304  pop.v.i           self.image_speed

label_2312:
02312  b                 label_2504

label_2316:
02316  push.v            self.y
02324  pushi.i16         1
02328  add.i.v           
02332  push.v            self.x
02340  call.i            place_free (2 args)
02348  conv.v.b          
02352  bf                label_2504
02356  push.v            self.direction
02364  pushi.i16         0
02368  cmp.i.v           ==
02372  bf                label_2432
02376  push.v            self.spriteAction2
02384  pop.v.v           self.sprite_index
02392  pushi.i16         0
02396  pop.v.i           self.image_index
02404  pushi.i16         1
02408  pop.v.i           self.image_xscale
02416  pushi.i16         1
02420  pop.v.i           self.image_speed
02428  b                 label_2504

label_2432:
02432  push.v            self.direction
02440  pushi.i16         180
02444  cmp.i.v           ==
02448  bf                label_2504
02452  push.v            self.spriteAction2
02460  pop.v.v           self.sprite_index
02468  pushi.i16         0
02472  pop.v.i           self.image_index
02480  pushi.i16         -1
02484  pop.v.i           self.image_xscale
02492  pushi.i16         -1
02496  pop.v.i           self.image_speed

label_2504:
02504  b                 label_2512

label_2508:
02508  exit.i.d          
