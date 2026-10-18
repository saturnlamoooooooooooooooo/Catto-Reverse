// gml_Object_obj_Locked_Draw_0
// 56 instructions, 300 bytes, 1 locals, 0 arguments

00000  pushi.i16         4
00004  conv.i.v          
00008  call.i            draw_set_font (1 args)
00016  popz.v.d          
00020  push.v            self.winDir
00028  push.s            "\\temp\\1.cma"
00036  add.s.v           
00040  call.i            file_exists (1 args)
00048  conv.v.b          
00052  not.b.d           
00056  bf                label_100
00060  push.v            self.winDir
00068  push.s            "\\temp\\2.cma"
00076  add.s.v           
00080  call.i            file_exists (1 args)
00088  conv.v.b          
00092  not.b.d           
00096  b                 label_104

label_100:
00100  push.i16          0

label_104:
00104  bf                label_164
00108  pushi.i16         0
00112  conv.i.v          
00116  pushi.i16         0
00120  conv.i.v          
00124  push.i            65535
00132  conv.i.v          
00136  push.s            "0/2"
00144  conv.s.v          
00148  call.i            gml_Script_scr_TextXY (4 args)
00156  popz.v.d          
00160  b                 label_300

label_164:
00164  push.v            self.winDir
00172  push.s            "\\temp\\1.cma"
00180  add.s.v           
00184  call.i            file_exists (1 args)
00192  conv.v.b          
00196  bf                label_240
00200  push.v            self.winDir
00208  push.s            "\\temp\\2.cma"
00216  add.s.v           
00220  call.i            file_exists (1 args)
00228  conv.v.b          
00232  not.b.d           
00236  b                 label_244

label_240:
00240  push.i16          0

label_244:
00244  bf                label_300
00248  pushi.i16         0
00252  conv.i.v          
00256  pushi.i16         0
00260  conv.i.v          
00264  push.i            65535
00272  conv.i.v          
00276  push.s            "1/2"
00284  conv.s.v          
00288  call.i            gml_Script_scr_TextXY (4 args)
00296  popz.v.d          
