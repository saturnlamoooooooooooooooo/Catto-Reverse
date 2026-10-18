// gml_Script_scr_CheckState
// 69 instructions, 456 bytes, 0 locals, 0 arguments

00000  push.s            "hello.ini"
00008  conv.s.v          
00012  call.i            file_exists (1 args)
00020  conv.v.b          
00024  not.b.d           
00028  bf                label_216
00032  push.s            "[progress]\nstage = 0\nfakeEnd = 0\ntheEnd = 0"
00040  conv.s.v          
00044  call.i            ini_open_from_string (1 args)
00052  popz.v.d          
00056  pushi.i16         0
00060  conv.i.v          
00064  push.s            "stage"
00072  conv.s.v          
00076  push.s            "progress"
00084  conv.s.v          
00088  call.i            ini_read_real (3 args)
00096  pop.v.v           global.hellStage
00104  pushi.i16         0
00108  conv.i.v          
00112  push.s            "fakeEnd"
00120  conv.s.v          
00124  push.s            "progress"
00132  conv.s.v          
00136  call.i            ini_read_real (3 args)
00144  pop.v.v           global.fakeEnded
00152  pushi.i16         0
00156  conv.i.v          
00160  push.s            "theEnd"
00168  conv.s.v          
00172  push.s            "progress"
00180  conv.s.v          
00184  call.i            ini_read_real (3 args)
00192  pop.v.v           global.trueEnded
00200  call.i            ini_close (0 args)
00208  popz.v.d          
00212  b                 label_396

label_216:
00216  push.s            "hello.ini"
00224  conv.s.v          
00228  call.i            ini_open (1 args)
00236  popz.v.d          
00240  pushi.i16         0
00244  conv.i.v          
00248  push.s            "stage"
00256  conv.s.v          
00260  push.s            "progress"
00268  conv.s.v          
00272  call.i            ini_read_real (3 args)
00280  pop.v.v           global.hellStage
00288  pushi.i16         0
00292  conv.i.v          
00296  push.s            "fakeEnd"
00304  conv.s.v          
00308  push.s            "progress"
00316  conv.s.v          
00320  call.i            ini_read_real (3 args)
00328  pop.v.v           global.fakeEnded
00336  pushi.i16         0
00340  conv.i.v          
00344  push.s            "theEnd"
00352  conv.s.v          
00356  push.s            "progress"
00364  conv.s.v          
00368  call.i            ini_read_real (3 args)
00376  pop.v.v           global.trueEnded
00384  call.i            ini_close (0 args)
00392  popz.v.d          

label_396:
00396  break             setstatic
00400  exit.i.d          
