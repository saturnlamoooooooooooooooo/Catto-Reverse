// gml_Script_scr_writeTryCount
// 17 instructions, 156 bytes, 0 locals, 1 arguments

00000  push.v            arg.argument0
00008  pop.v.v           self.tryCount
00016  push.s            "try.ini"
00024  conv.s.v          
00028  call.i            ini_open (1 args)
00036  popz.v.d          
00040  push.v            self.tryCount
00048  push.s            "trying"
00056  conv.s.v          
00060  push.s            "keep"
00068  conv.s.v          
00072  call.i            ini_write_real (3 args)
00080  popz.v.d          
00084  call.i            ini_close (0 args)
00092  popz.v.d          
00096  break             setstatic
00100  exit.i.d          
