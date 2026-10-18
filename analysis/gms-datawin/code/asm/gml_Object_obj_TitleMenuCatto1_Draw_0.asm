// gml_Object_obj_TitleMenuCatto1_Draw_0
// 46 instructions, 244 bytes, 1 locals, 0 arguments

00000  pushi.i16         3
00004  conv.i.v          
00008  call.i            draw_set_font (1 args)
00016  popz.v.d          
00020  push.v            self.menu
00028  pushi.i16         1
00032  cmp.i.v           ==
00036  bf                label_88
00040  pushi.i16         0
00044  conv.i.v          
00048  push.i            65535
00056  conv.i.v          
00060  push.s            "Play"
00068  conv.s.v          
00072  call.i            gml_Script_scr_Text (3 args)
00080  popz.v.d          
00084  b                 label_132

label_88:
00088  pushi.i16         0
00092  conv.i.v          
00096  push.i            16777215
00104  conv.i.v          
00108  push.s            "Play"
00116  conv.s.v          
00120  call.i            gml_Script_scr_Text (3 args)
00128  popz.v.d          

label_132:
00132  push.v            self.menu
00140  pushi.i16         2
00144  cmp.i.v           ==
00148  bf                label_200
00152  pushi.i16         1
00156  conv.i.v          
00160  push.i            65535
00168  conv.i.v          
00172  push.s            "Exit game"
00180  conv.s.v          
00184  call.i            gml_Script_scr_Text (3 args)
00192  popz.v.d          
00196  b                 label_244

label_200:
00200  pushi.i16         1
00204  conv.i.v          
00208  push.i            16777215
00216  conv.i.v          
00220  push.s            "Exit game"
00228  conv.s.v          
00232  call.i            gml_Script_scr_Text (3 args)
00240  popz.v.d          
