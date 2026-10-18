// gml_Object_obj_NeedMorePromptCatto2_Draw_0
// 35 instructions, 184 bytes, 1 locals, 0 arguments

00000  pushi.i16         1
00004  conv.i.v          
00008  call.i            draw_set_font (1 args)
00016  popz.v.d          
00020  pushglb.v         global.Pearls
00028  pushi.i16         25
00032  cmp.i.v           ==
00036  bf                label_96
00040  pushi.i16         0
00044  conv.i.v          
00048  pushi.i16         1
00052  conv.i.v          
00056  push.i            16777215
00064  conv.i.v          
00068  push.s            "You are free to go through!"
00076  conv.s.v          
00080  call.i            gml_Script_scr_TextSmallXY (4 args)
00088  popz.v.d          
00092  b                 label_184

label_96:
00096  pushi.i16         0
00100  conv.i.v          
00104  pushi.i16         1
00108  conv.i.v          
00112  push.i            16777215
00120  conv.i.v          
00124  push.s            "Collect "
00132  pushi.i16         25
00136  pushglb.v         global.Pearls
00144  sub.v.i           
00148  call.i            string (1 args)
00156  add.v.s           
00160  push.s            " more pearls!"
00168  add.s.v           
00172  call.i            gml_Script_scr_TextSmallXY (4 args)
00180  popz.v.d          
