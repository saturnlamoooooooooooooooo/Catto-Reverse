// gml_Script_scr_CheckTry
// 37 instructions, 264 bytes, 0 locals, 0 arguments

00000  push.s            "try.ini"
00008  conv.s.v          
00012  call.i            file_exists (1 args)
00020  conv.v.b          
00024  not.b.d           
00028  bf                label_120
00032  push.s            "[keep]\ntrying = 0"
00040  conv.s.v          
00044  call.i            ini_open_from_string (1 args)
00052  popz.v.d          
00056  pushi.i16         0
00060  conv.i.v          
00064  push.s            "trying"
00072  conv.s.v          
00076  push.s            "keep"
00084  conv.s.v          
00088  call.i            ini_read_real (3 args)
00096  pop.v.v           global.tryCount
00104  call.i            ini_close (0 args)
00112  popz.v.d          
00116  b                 label_204

label_120:
00120  push.s            "try.ini"
00128  conv.s.v          
00132  call.i            ini_open (1 args)
00140  popz.v.d          
00144  pushi.i16         0
00148  conv.i.v          
00152  push.s            "trying"
00160  conv.s.v          
00164  push.s            "keep"
00172  conv.s.v          
00176  call.i            ini_read_real (3 args)
00184  pop.v.v           global.tryCount
00192  call.i            ini_close (0 args)
00200  popz.v.d          

label_204:
00204  break             setstatic
00208  exit.i.d          
