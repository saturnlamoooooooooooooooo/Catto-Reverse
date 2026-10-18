// gml_Object_obj_MusicControl_Other_4
// 230 instructions, 1080 bytes, 1 locals, 0 arguments

00000  pushglb.v         global.RoomID
00008  dup.v.d           0
00012  push.s            "title"
00020  cmp.s.v           ==
00024  bt                label_280
00028  dup.v.d           0
00032  push.s            "titleFUCKED"
00040  cmp.s.v           ==
00044  bt                label_336
00048  dup.v.d           0
00052  push.s            "catto1title"
00060  cmp.s.v           ==
00064  bt                label_392
00068  dup.v.d           0
00072  push.s            "catto1"
00080  cmp.s.v           ==
00084  bt                label_448
00088  dup.v.d           0
00092  push.s            "catto2title"
00100  cmp.s.v           ==
00104  bt                label_504
00108  dup.v.d           0
00112  push.s            "catto2"
00120  cmp.s.v           ==
00124  bt                label_560
00128  dup.v.d           0
00132  pushi.i16         1
00136  cmp.i.v           ==
00140  bt                label_616
00144  dup.v.d           0
00148  push.s            "hub"
00156  cmp.s.v           ==
00160  bt                label_672
00164  dup.v.d           0
00168  push.s            "hubDay"
00176  cmp.s.v           ==
00180  bt                label_728
00184  dup.v.d           0
00188  pushi.i16         666
00192  cmp.i.v           ==
00196  bt                label_784
00200  dup.v.d           0
00204  pushi.i16         616
00208  cmp.i.v           ==
00212  bt                label_840
00216  dup.v.d           0
00220  pushi.i16         333
00224  cmp.i.v           ==
00228  bt                label_896
00232  dup.v.d           0
00236  push.s            "debug"
00244  cmp.s.v           ==
00248  bt                label_952
00252  dup.v.d           0
00256  push.s            "nosound"
00264  cmp.s.v           ==
00268  bt                label_1008
00272  b                 label_1028
00276  b                 label_1076

label_280:
00280  call.i            audio_stop_all (0 args)
00288  popz.v.d          
00292  pushi.i16         0
00296  conv.i.v          
00300  pushi.i16         1
00304  conv.i.v          
00308  pushi.i16         19
00312  conv.i.v          
00316  call.i            audio_play_sound (3 args)
00324  popz.v.d          
00328  popz.v.d          
00332  exit.i.d          

label_336:
00336  call.i            audio_stop_all (0 args)
00344  popz.v.d          
00348  pushi.i16         0
00352  conv.i.v          
00356  pushi.i16         1
00360  conv.i.v          
00364  pushi.i16         2
00368  conv.i.v          
00372  call.i            audio_play_sound (3 args)
00380  popz.v.d          
00384  popz.v.d          
00388  exit.i.d          

label_392:
00392  call.i            audio_stop_all (0 args)
00400  popz.v.d          
00404  pushi.i16         0
00408  conv.i.v          
00412  pushi.i16         1
00416  conv.i.v          
00420  pushi.i16         18
00424  conv.i.v          
00428  call.i            audio_play_sound (3 args)
00436  popz.v.d          
00440  popz.v.d          
00444  exit.i.d          

label_448:
00448  call.i            audio_stop_all (0 args)
00456  popz.v.d          
00460  pushi.i16         0
00464  conv.i.v          
00468  pushi.i16         1
00472  conv.i.v          
00476  pushi.i16         11
00480  conv.i.v          
00484  call.i            audio_play_sound (3 args)
00492  popz.v.d          
00496  popz.v.d          
00500  exit.i.d          

label_504:
00504  call.i            audio_stop_all (0 args)
00512  popz.v.d          
00516  pushi.i16         0
00520  conv.i.v          
00524  pushi.i16         1
00528  conv.i.v          
00532  pushi.i16         5
00536  conv.i.v          
00540  call.i            audio_play_sound (3 args)
00548  popz.v.d          
00552  popz.v.d          
00556  exit.i.d          

label_560:
00560  call.i            audio_stop_all (0 args)
00568  popz.v.d          
00572  pushi.i16         0
00576  conv.i.v          
00580  pushi.i16         1
00584  conv.i.v          
00588  pushi.i16         15
00592  conv.i.v          
00596  call.i            audio_play_sound (3 args)
00604  popz.v.d          
00608  popz.v.d          
00612  exit.i.d          

label_616:
00616  call.i            audio_stop_all (0 args)
00624  popz.v.d          
00628  pushi.i16         1
00632  conv.i.v          
00636  pushi.i16         1
00640  conv.i.v          
00644  pushi.i16         24
00648  conv.i.v          
00652  call.i            audio_play_sound (3 args)
00660  popz.v.d          
00664  popz.v.d          
00668  exit.i.d          

label_672:
00672  call.i            audio_stop_all (0 args)
00680  popz.v.d          
00684  pushi.i16         1
00688  conv.i.v          
00692  pushi.i16         1
00696  conv.i.v          
00700  pushi.i16         39
00704  conv.i.v          
00708  call.i            audio_play_sound (3 args)
00716  popz.v.d          
00720  popz.v.d          
00724  exit.i.d          

label_728:
00728  call.i            audio_stop_all (0 args)
00736  popz.v.d          
00740  pushi.i16         1
00744  conv.i.v          
00748  pushi.i16         1
00752  conv.i.v          
00756  pushi.i16         12
00760  conv.i.v          
00764  call.i            audio_play_sound (3 args)
00772  popz.v.d          
00776  popz.v.d          
00780  exit.i.d          

label_784:
00784  call.i            audio_stop_all (0 args)
00792  popz.v.d          
00796  pushi.i16         1
00800  conv.i.v          
00804  pushi.i16         1
00808  conv.i.v          
00812  pushi.i16         1
00816  conv.i.v          
00820  call.i            audio_play_sound (3 args)
00828  popz.v.d          
00832  popz.v.d          
00836  exit.i.d          

label_840:
00840  call.i            audio_stop_all (0 args)
00848  popz.v.d          
00852  pushi.i16         1
00856  conv.i.v          
00860  pushi.i16         1
00864  conv.i.v          
00868  pushi.i16         14
00872  conv.i.v          
00876  call.i            audio_play_sound (3 args)
00884  popz.v.d          
00888  popz.v.d          
00892  exit.i.d          

label_896:
00896  call.i            audio_stop_all (0 args)
00904  popz.v.d          
00908  pushi.i16         1
00912  conv.i.v          
00916  pushi.i16         1
00920  conv.i.v          
00924  pushi.i16         16
00928  conv.i.v          
00932  call.i            audio_play_sound (3 args)
00940  popz.v.d          
00944  popz.v.d          
00948  exit.i.d          

label_952:
00952  call.i            audio_stop_all (0 args)
00960  popz.v.d          
00964  pushi.i16         1
00968  conv.i.v          
00972  pushi.i16         1
00976  conv.i.v          
00980  pushi.i16         0
00984  conv.i.v          
00988  call.i            audio_play_sound (3 args)
00996  popz.v.d          
01000  popz.v.d          
01004  exit.i.d          

label_1008:
01008  call.i            audio_stop_all (0 args)
01016  popz.v.d          
01020  popz.v.d          
01024  exit.i.d          

label_1028:
01028  call.i            audio_stop_all (0 args)
01036  popz.v.d          
01040  pushi.i16         1
01044  conv.i.v          
01048  pushi.i16         1
01052  conv.i.v          
01056  pushi.i16         17
01060  conv.i.v          
01064  call.i            audio_play_sound (3 args)
01072  popz.v.d          

label_1076:
01076  popz.v.d          
