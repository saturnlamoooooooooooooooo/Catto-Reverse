// gml_Script_scr_writeHellStage
// 18 instructions, 164 bytes, 0 locals, 1 arguments

00000  push.v            arg.argument0
00008  call.i            int64 (1 args)
00016  pop.v.v           self.hellStage
00024  push.s            "hello.ini"
00032  conv.s.v          
00036  call.i            ini_open (1 args)
00044  popz.v.d          
00048  push.v            self.hellStage
00056  push.s            "stage"
00064  conv.s.v          
00068  push.s            "progress"
00076  conv.s.v          
00080  call.i            ini_write_real (3 args)
00088  popz.v.d          
00092  call.i            ini_close (0 args)
00100  popz.v.d          
00104  break             setstatic
00108  exit.i.d          
