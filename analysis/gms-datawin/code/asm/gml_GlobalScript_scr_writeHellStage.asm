// gml_GlobalScript_scr_writeHellStage
// 28 instructions, 164 bytes, 1 locals, 0 arguments

00000  b                 label_116
00004  push.v            arg.argument0
00012  call.i            int64 (1 args)
00020  pop.v.v           self.hellStage
00028  push.s            "hello.ini"
00036  conv.s.v          
00040  call.i            ini_open (1 args)
00048  popz.v.d          
00052  push.v            self.hellStage
00060  push.s            "stage"
00068  conv.s.v          
00072  push.s            "progress"
00080  conv.s.v          
00084  call.i            ini_write_real (3 args)
00092  popz.v.d          
00096  call.i            ini_close (0 args)
00104  popz.v.d          
00108  break             setstatic
00112  exit.i.d          

label_116:
00116  push.i            [function] gml_Script_scr_writeHellStage
00124  conv.i.v          
00128  pushi.i16         -1
00132  conv.i.v          
00136  call.i            method (2 args)
00144  dup.v.d           0
00148  pushi.i16         -1
00152  pop.v.v           scr_writeHellStage [stacktop]
00160  popz.v.d          
