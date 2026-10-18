// gml_Object_obj_EnterMenu_Draw_64
// 101 instructions, 528 bytes, 1 locals, 0 arguments

00000  push.d            0.5
00012  conv.d.v          
00016  call.i            draw_set_alpha (1 args)
00024  popz.v.d          
00028  push.i            8388608
00036  conv.i.v          
00040  call.i            draw_set_color (1 args)
00048  popz.v.d          
00052  pushi.i16         0
00056  conv.i.v          
00060  pushbltn.v        self.room_height
00068  pushbltn.v        self.room_width
00076  pushi.i16         0
00080  conv.i.v          
00084  pushi.i16         0
00088  conv.i.v          
00092  call.i            draw_rectangle (5 args)
00100  popz.v.d          
00104  pushi.i16         1
00108  conv.i.v          
00112  call.i            draw_set_alpha (1 args)
00120  popz.v.d          
00124  pushi.i16         1
00128  conv.i.v          
00132  call.i            draw_set_font (1 args)
00140  popz.v.d          
00144  push.v            self.menu
00152  pushi.i16         1
00156  cmp.i.v           ==
00160  bf                label_220
00164  pushi.i16         11
00168  conv.i.v          
00172  pushi.i16         22
00176  conv.i.v          
00180  push.i            65535
00188  conv.i.v          
00192  push.s            "Resume"
00200  conv.s.v          
00204  call.i            gml_Script_scr_TextSmallXY (4 args)
00212  popz.v.d          
00216  b                 label_272

label_220:
00220  pushi.i16         11
00224  conv.i.v          
00228  pushi.i16         22
00232  conv.i.v          
00236  push.i            16777215
00244  conv.i.v          
00248  push.s            "Resume"
00256  conv.s.v          
00260  call.i            gml_Script_scr_TextSmallXY (4 args)
00268  popz.v.d          

label_272:
00272  push.v            self.menu
00280  pushi.i16         2
00284  cmp.i.v           ==
00288  bf                label_348
00292  pushi.i16         12
00296  conv.i.v          
00300  pushi.i16         23
00304  conv.i.v          
00308  push.i            65535
00316  conv.i.v          
00320  push.s            "Restart room"
00328  conv.s.v          
00332  call.i            gml_Script_scr_TextSmallXY (4 args)
00340  popz.v.d          
00344  b                 label_400

label_348:
00348  pushi.i16         12
00352  conv.i.v          
00356  pushi.i16         23
00360  conv.i.v          
00364  push.i            16777215
00372  conv.i.v          
00376  push.s            "Restart room"
00384  conv.s.v          
00388  call.i            gml_Script_scr_TextSmallXY (4 args)
00396  popz.v.d          

label_400:
00400  push.v            self.menu
00408  pushi.i16         3
00412  cmp.i.v           ==
00416  bf                label_476
00420  pushi.i16         13
00424  conv.i.v          
00428  pushi.i16         24
00432  conv.i.v          
00436  push.i            65535
00444  conv.i.v          
00448  push.s            "Go to main menu"
00456  conv.s.v          
00460  call.i            gml_Script_scr_TextSmallXY (4 args)
00468  popz.v.d          
00472  b                 label_528

label_476:
00476  pushi.i16         13
00480  conv.i.v          
00484  pushi.i16         24
00488  conv.i.v          
00492  push.i            16777215
00500  conv.i.v          
00504  push.s            "Go to main menu"
00512  conv.s.v          
00516  call.i            gml_Script_scr_TextSmallXY (4 args)
00524  popz.v.d          
