// gml_Object_obj_NeedMorePrompt_Draw_0
// 54 instructions, 276 bytes, 1 locals, 0 arguments

00000  pushi.i16         1
00004  conv.i.v          
00008  call.i            draw_set_font (1 args)
00016  popz.v.d          
00020  pushglb.v         global.Level
00028  pushi.i16         4
00032  cmp.i.v           ==
00036  bf                label_112
00040  pushi.i16         6
00044  conv.i.v          
00048  call.i            draw_set_font (1 args)
00056  popz.v.d          
00060  pushi.i16         0
00064  conv.i.v          
00068  pushi.i16         1
00072  conv.i.v          
00076  pushi.i16         255
00080  conv.i.v          
00084  push.s            "DIEDIEDIEDIEDIEDIEDIEDIEDIEDIEDIEDIE"
00092  conv.s.v          
00096  call.i            gml_Script_scr_TextSmallXY (4 args)
00104  popz.v.d          
00108  b                 label_276

label_112:
00112  pushglb.v         global.TinyBisc
00120  pushi.i16         25
00124  cmp.i.v           ==
00128  bf                label_188
00132  pushi.i16         0
00136  conv.i.v          
00140  pushi.i16         1
00144  conv.i.v          
00148  push.i            16777215
00156  conv.i.v          
00160  push.s            "You are free to go through!"
00168  conv.s.v          
00172  call.i            gml_Script_scr_TextSmallXY (4 args)
00180  popz.v.d          
00184  b                 label_276

label_188:
00188  pushi.i16         0
00192  conv.i.v          
00196  pushi.i16         1
00200  conv.i.v          
00204  push.i            16777215
00212  conv.i.v          
00216  push.s            "Collect "
00224  pushi.i16         25
00228  pushglb.v         global.TinyBisc
00236  sub.v.i           
00240  call.i            string (1 args)
00248  add.v.s           
00252  push.s            " more biscuits!"
00260  add.s.v           
00264  call.i            gml_Script_scr_TextSmallXY (4 args)
00272  popz.v.d          
