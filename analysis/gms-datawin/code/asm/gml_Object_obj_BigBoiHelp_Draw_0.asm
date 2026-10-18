// gml_Object_obj_BigBoiHelp_Draw_0
// 63 instructions, 316 bytes, 1 locals, 0 arguments

00000  pushi.i16         1
00004  conv.i.v          
00008  call.i            draw_set_font (1 args)
00016  popz.v.d          
00020  pushglb.v         global.Level
00028  pushi.i16         2
00032  cmp.i.v           ==
00036  bf                label_96
00040  pushi.i16         0
00044  conv.i.v          
00048  pushi.i16         1
00052  conv.i.v          
00056  push.i            16777215
00064  conv.i.v          
00068  push.s            "My friend lost all \ntheir biscuits too! \nReally sorry to bother you \nbut can you find them?"
00076  conv.s.v          
00080  call.i            gml_Script_scr_TextSmallXY (4 args)
00088  popz.v.d          
00092  b                 label_316

label_96:
00096  pushglb.v         global.Level
00104  pushi.i16         3
00108  cmp.i.v           ==
00112  bf                label_172
00116  pushi.i16         0
00120  conv.i.v          
00124  pushi.i16         1
00128  conv.i.v          
00132  push.i            16777215
00140  conv.i.v          
00144  push.s            "I'm sorry Catto..."
00152  conv.s.v          
00156  call.i            gml_Script_scr_TextSmallXY (4 args)
00164  popz.v.d          
00168  b                 label_316

label_172:
00172  pushglb.v         global.Level
00180  pushi.i16         4
00184  cmp.i.v           ==
00188  bf                label_264
00192  pushi.i16         6
00196  conv.i.v          
00200  call.i            draw_set_font (1 args)
00208  popz.v.d          
00212  pushi.i16         0
00216  conv.i.v          
00220  pushi.i16         1
00224  conv.i.v          
00228  pushi.i16         255
00232  conv.i.v          
00236  push.s            "DIEDIEDIEDIEDIEDIEDIEDIEDIE\nDIEDIEDIEDIEDIEDIEDIEDIEDIE"
00244  conv.s.v          
00248  call.i            gml_Script_scr_TextSmallXY (4 args)
00256  popz.v.d          
00260  b                 label_316

label_264:
00264  pushi.i16         0
00268  conv.i.v          
00272  pushi.i16         1
00276  conv.i.v          
00280  push.i            16777215
00288  conv.i.v          
00292  push.s            "It's me again, Catto! \nI lost all my biscuits. \nI keep dropping them! Can you \nfind them for me?"
00300  conv.s.v          
00304  call.i            gml_Script_scr_TextSmallXY (4 args)
00312  popz.v.d          
