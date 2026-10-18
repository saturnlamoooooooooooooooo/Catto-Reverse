// gml_Object_obj_BigBoiDialog_Draw_0
// 32 instructions, 164 bytes, 1 locals, 0 arguments

00000  pushi.i16         1
00004  conv.i.v          
00008  call.i            draw_set_font (1 args)
00016  popz.v.d          
00020  pushglb.v         global.Level
00028  pushi.i16         1
00032  cmp.i.v           ==
00036  bf                label_92
00040  pushi.i16         0
00044  conv.i.v          
00048  pushi.i16         1
00052  conv.i.v          
00056  push.i            16777215
00064  conv.i.v          
00068  push.s            "Hi Catto Boi! \nHaven't seen you in a while! \nHow's it going?"
00076  conv.s.v          
00080  call.i            gml_Script_scr_TextSmallXY (4 args)
00088  popz.v.d          

label_92:
00092  pushglb.v         global.Level
00100  pushi.i16         2
00104  cmp.i.v           ==
00108  bf                label_164
00112  pushi.i16         0
00116  conv.i.v          
00120  pushi.i16         1
00124  conv.i.v          
00128  push.i            16777215
00136  conv.i.v          
00140  push.s            "Good morning Catto! \nMy friend lost their pearls again and I was \nabout to ask you to find them but \nmy friend found them anyway!"
00148  conv.s.v          
00152  call.i            gml_Script_scr_TextSmallXY (4 args)
00160  popz.v.d          
