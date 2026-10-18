// gml_GlobalScript_scr_CheckTry
// 47 instructions, 264 bytes, 1 locals, 0 arguments

00000  b                 label_216
00004  push.s            "try.ini"
00012  conv.s.v          
00016  call.i            file_exists (1 args)
00024  conv.v.b          
00028  not.b.d           
00032  bf                label_124
00036  push.s            "[keep]\ntrying = 0"
00044  conv.s.v          
00048  call.i            ini_open_from_string (1 args)
00056  popz.v.d          
00060  pushi.i16         0
00064  conv.i.v          
00068  push.s            "trying"
00076  conv.s.v          
00080  push.s            "keep"
00088  conv.s.v          
00092  call.i            ini_read_real (3 args)
00100  pop.v.v           global.tryCount
00108  call.i            ini_close (0 args)
00116  popz.v.d          
00120  b                 label_208

label_124:
00124  push.s            "try.ini"
00132  conv.s.v          
00136  call.i            ini_open (1 args)
00144  popz.v.d          
00148  pushi.i16         0
00152  conv.i.v          
00156  push.s            "trying"
00164  conv.s.v          
00168  push.s            "keep"
00176  conv.s.v          
00180  call.i            ini_read_real (3 args)
00188  pop.v.v           global.tryCount
00196  call.i            ini_close (0 args)
00204  popz.v.d          

label_208:
00208  break             setstatic
00212  exit.i.d          

label_216:
00216  push.i            [function] gml_Script_scr_CheckTry
00224  conv.i.v          
00228  pushi.i16         -1
00232  conv.i.v          
00236  call.i            method (2 args)
00244  dup.v.d           0
00248  pushi.i16         -1
00252  pop.v.v           scr_CheckTry [stacktop]
00260  popz.v.d          
