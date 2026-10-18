// gml_GlobalScript_hex_to_real
// 98 instructions, 552 bytes, 1 locals, 0 arguments

00000  b                 label_504
00004  push.v            arg.argument0
00012  call.i            string (1 args)
00020  pop.v.v           local.str
00028  pushi.i16         0
00032  pop.v.i           local.s
00040  pushi.i16         0
00044  pop.v.i           local.r
00052  pushloc.v         local.str
00060  call.i            string_length (1 args)
00068  pop.v.v           local.i

label_76:
00076  pushloc.v         local.i
00084  pushi.i16         1
00088  cmp.i.v           >=
00092  bf                label_484
00096  pushloc.v         local.i
00104  pushloc.v         local.str
00112  call.i            string_char_at (2 args)
00120  call.i            ord (1 args)
00128  pop.v.v           local.c
00136  pushloc.v         local.c
00144  pushi.i16         57
00148  cmp.i.v           <=
00152  bf                label_236
00156  pushloc.v         local.c
00164  pushi.i16         49
00168  cmp.i.v           >=
00172  bf                label_232
00176  push.v            local.r
00184  pushloc.v         local.c
00192  pushi.i16         48
00196  sub.i.v           
00200  conv.v.l          
00204  pushloc.v         local.s
00212  conv.v.l          
00216  shl.l.l           
00220  add.l.v           
00224  pop.v.v           local.r

label_232:
00232  b                 label_432

label_236:
00236  pushloc.v         local.c
00244  pushi.i16         70
00248  cmp.i.v           <=
00252  bf                label_336
00256  pushloc.v         local.c
00264  pushi.i16         65
00268  cmp.i.v           >=
00272  bf                label_332
00276  push.v            local.r
00284  pushloc.v         local.c
00292  pushi.i16         55
00296  sub.i.v           
00300  conv.v.l          
00304  pushloc.v         local.s
00312  conv.v.l          
00316  shl.l.l           
00320  add.l.v           
00324  pop.v.v           local.r

label_332:
00332  b                 label_432

label_336:
00336  pushloc.v         local.c
00344  pushi.i16         102
00348  cmp.i.v           <=
00352  bf                label_432
00356  pushloc.v         local.c
00364  pushi.i16         97
00368  cmp.i.v           >=
00372  bf                label_432
00376  push.v            local.r
00384  pushloc.v         local.c
00392  pushi.i16         87
00396  sub.i.v           
00400  conv.v.l          
00404  pushloc.v         local.s
00412  conv.v.l          
00416  shl.l.l           
00420  add.l.v           
00424  pop.v.v           local.r

label_432:
00432  push.v            local.s
00440  pushi.i16         4
00444  add.i.v           
00448  pop.v.v           local.s
00456  push.v            local.i
00464  push.i16          1
00468  sub.i.v           
00472  pop.v.v           local.i
00480  b                 label_76

label_484:
00484  pushloc.v         local.r
00492  ret.v.d           
00496  break             setstatic
00500  exit.i.d          

label_504:
00504  push.i            [function] gml_Script_hex_to_real
00512  conv.i.v          
00516  pushi.i16         -1
00520  conv.i.v          
00524  call.i            method (2 args)
00532  dup.v.d           0
00536  pushi.i16         -1
00540  pop.v.v           hex_to_real [stacktop]
00548  popz.v.d          
