// gml_Script_hex_to_real
// 88 instructions, 552 bytes, 5 locals, 1 arguments

00000  push.v            arg.argument0
00008  call.i            string (1 args)
00016  pop.v.v           local.str
00024  pushi.i16         0
00028  pop.v.i           local.s
00036  pushi.i16         0
00040  pop.v.i           local.r
00048  pushloc.v         local.str
00056  call.i            string_length (1 args)
00064  pop.v.v           local.i

label_72:
00072  pushloc.v         local.i
00080  pushi.i16         1
00084  cmp.i.v           >=
00088  bf                label_480
00092  pushloc.v         local.i
00100  pushloc.v         local.str
00108  call.i            string_char_at (2 args)
00116  call.i            ord (1 args)
00124  pop.v.v           local.c
00132  pushloc.v         local.c
00140  pushi.i16         57
00144  cmp.i.v           <=
00148  bf                label_232
00152  pushloc.v         local.c
00160  pushi.i16         49
00164  cmp.i.v           >=
00168  bf                label_228
00172  push.v            local.r
00180  pushloc.v         local.c
00188  pushi.i16         48
00192  sub.i.v           
00196  conv.v.l          
00200  pushloc.v         local.s
00208  conv.v.l          
00212  shl.l.l           
00216  add.l.v           
00220  pop.v.v           local.r

label_228:
00228  b                 label_428

label_232:
00232  pushloc.v         local.c
00240  pushi.i16         70
00244  cmp.i.v           <=
00248  bf                label_332
00252  pushloc.v         local.c
00260  pushi.i16         65
00264  cmp.i.v           >=
00268  bf                label_328
00272  push.v            local.r
00280  pushloc.v         local.c
00288  pushi.i16         55
00292  sub.i.v           
00296  conv.v.l          
00300  pushloc.v         local.s
00308  conv.v.l          
00312  shl.l.l           
00316  add.l.v           
00320  pop.v.v           local.r

label_328:
00328  b                 label_428

label_332:
00332  pushloc.v         local.c
00340  pushi.i16         102
00344  cmp.i.v           <=
00348  bf                label_428
00352  pushloc.v         local.c
00360  pushi.i16         97
00364  cmp.i.v           >=
00368  bf                label_428
00372  push.v            local.r
00380  pushloc.v         local.c
00388  pushi.i16         87
00392  sub.i.v           
00396  conv.v.l          
00400  pushloc.v         local.s
00408  conv.v.l          
00412  shl.l.l           
00416  add.l.v           
00420  pop.v.v           local.r

label_428:
00428  push.v            local.s
00436  pushi.i16         4
00440  add.i.v           
00444  pop.v.v           local.s
00452  push.v            local.i
00460  push.i16          1
00464  sub.i.v           
00468  pop.v.v           local.i
00476  b                 label_72

label_480:
00480  pushloc.v         local.r
00488  ret.v.d           
00492  break             setstatic
00496  exit.i.d          
