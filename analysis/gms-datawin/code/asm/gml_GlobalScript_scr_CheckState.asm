// gml_GlobalScript_scr_CheckState
// 79 instructions, 456 bytes, 1 locals, 0 arguments

00000  b                 label_408
00004  push.s            "hello.ini"
00012  conv.s.v          
00016  call.i            file_exists (1 args)
00024  conv.v.b          
00028  not.b.d           
00032  bf                label_220
00036  push.s            "[progress]\nstage = 0\nfakeEnd = 0\ntheEnd = 0"
00044  conv.s.v          
00048  call.i            ini_open_from_string (1 args)
00056  popz.v.d          
00060  pushi.i16         0
00064  conv.i.v          
00068  push.s            "stage"
00076  conv.s.v          
00080  push.s            "progress"
00088  conv.s.v          
00092  call.i            ini_read_real (3 args)
00100  pop.v.v           global.hellStage
00108  pushi.i16         0
00112  conv.i.v          
00116  push.s            "fakeEnd"
00124  conv.s.v          
00128  push.s            "progress"
00136  conv.s.v          
00140  call.i            ini_read_real (3 args)
00148  pop.v.v           global.fakeEnded
00156  pushi.i16         0
00160  conv.i.v          
00164  push.s            "theEnd"
00172  conv.s.v          
00176  push.s            "progress"
00184  conv.s.v          
00188  call.i            ini_read_real (3 args)
00196  pop.v.v           global.trueEnded
00204  call.i            ini_close (0 args)
00212  popz.v.d          
00216  b                 label_400

label_220:
00220  push.s            "hello.ini"
00228  conv.s.v          
00232  call.i            ini_open (1 args)
00240  popz.v.d          
00244  pushi.i16         0
00248  conv.i.v          
00252  push.s            "stage"
00260  conv.s.v          
00264  push.s            "progress"
00272  conv.s.v          
00276  call.i            ini_read_real (3 args)
00284  pop.v.v           global.hellStage
00292  pushi.i16         0
00296  conv.i.v          
00300  push.s            "fakeEnd"
00308  conv.s.v          
00312  push.s            "progress"
00320  conv.s.v          
00324  call.i            ini_read_real (3 args)
00332  pop.v.v           global.fakeEnded
00340  pushi.i16         0
00344  conv.i.v          
00348  push.s            "theEnd"
00356  conv.s.v          
00360  push.s            "progress"
00368  conv.s.v          
00372  call.i            ini_read_real (3 args)
00380  pop.v.v           global.trueEnded
00388  call.i            ini_close (0 args)
00396  popz.v.d          

label_400:
00400  break             setstatic
00404  exit.i.d          

label_408:
00408  push.i            [function] gml_Script_scr_CheckState
00416  conv.i.v          
00420  pushi.i16         -1
00424  conv.i.v          
00428  call.i            method (2 args)
00436  dup.v.d           0
00440  pushi.i16         -1
00444  pop.v.v           scr_CheckState [stacktop]
00452  popz.v.d          
