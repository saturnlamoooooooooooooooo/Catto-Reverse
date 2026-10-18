// gml_GlobalScript_scr_writeTrueEnd
// 27 instructions, 156 bytes, 1 locals, 0 arguments

00000  b                 label_108
00004  push.v            arg.argument0
00012  pop.v.v           self.theEnd
00020  push.s            "hello.ini"
00028  conv.s.v          
00032  call.i            ini_open (1 args)
00040  popz.v.d          
00044  push.v            self.theEnd
00052  push.s            "theEnd"
00060  conv.s.v          
00064  push.s            "progress"
00072  conv.s.v          
00076  call.i            ini_write_real (3 args)
00084  popz.v.d          
00088  call.i            ini_close (0 args)
00096  popz.v.d          
00100  break             setstatic
00104  exit.i.d          

label_108:
00108  push.i            [function] gml_Script_scr_writeTrueEnd
00116  conv.i.v          
00120  pushi.i16         -1
00124  conv.i.v          
00128  call.i            method (2 args)
00136  dup.v.d           0
00140  pushi.i16         -1
00144  pop.v.v           scr_writeTrueEnd [stacktop]
00152  popz.v.d          
