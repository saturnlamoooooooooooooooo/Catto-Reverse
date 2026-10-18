// gml_Object_obj_Act1Menu_Draw_0
// 129 instructions, 660 bytes, 1 locals, 0 arguments

00000  pushi.i16         1
00004  conv.i.v          
00008  call.i            draw_set_font (1 args)
00016  popz.v.d          
00020  push.v            self.menu
00028  pushi.i16         1
00032  cmp.i.v           ==
00036  bf                label_96
00040  pushi.i16         6
00044  conv.i.v          
00048  pushi.i16         2
00052  conv.i.v          
00056  push.i            65535
00064  conv.i.v          
00068  push.s            "Go to Level 1 - Spring Hills"
00076  conv.s.v          
00080  call.i            gml_Script_scr_TextSmallXY (4 args)
00088  popz.v.d          
00092  b                 label_148

label_96:
00096  pushi.i16         6
00100  conv.i.v          
00104  pushi.i16         2
00108  conv.i.v          
00112  push.i            16777215
00120  conv.i.v          
00124  push.s            "Go to Level 1 - Spring Hills"
00132  conv.s.v          
00136  call.i            gml_Script_scr_TextSmallXY (4 args)
00144  popz.v.d          

label_148:
00148  push.v            self.menu
00156  pushi.i16         2
00160  cmp.i.v           ==
00164  bf                label_224
00168  pushi.i16         7
00172  conv.i.v          
00176  pushi.i16         2
00180  conv.i.v          
00184  push.i            65535
00192  conv.i.v          
00196  push.s            "Go to Level 2 - Sunset Side"
00204  conv.s.v          
00208  call.i            gml_Script_scr_TextSmallXY (4 args)
00216  popz.v.d          
00220  b                 label_276

label_224:
00224  pushi.i16         7
00228  conv.i.v          
00232  pushi.i16         2
00236  conv.i.v          
00240  push.i            16777215
00248  conv.i.v          
00252  push.s            "Go to Level 2 - Sunset Side"
00260  conv.s.v          
00264  call.i            gml_Script_scr_TextSmallXY (4 args)
00272  popz.v.d          

label_276:
00276  push.v            self.menu
00284  pushi.i16         3
00288  cmp.i.v           ==
00292  bf                label_352
00296  pushi.i16         8
00300  conv.i.v          
00304  pushi.i16         2
00308  conv.i.v          
00312  push.i            65535
00320  conv.i.v          
00324  push.s            "Go to Level 3 - Winter Sky"
00332  conv.s.v          
00336  call.i            gml_Script_scr_TextSmallXY (4 args)
00344  popz.v.d          
00348  b                 label_404

label_352:
00352  pushi.i16         8
00356  conv.i.v          
00360  pushi.i16         2
00364  conv.i.v          
00368  push.i            16777215
00376  conv.i.v          
00380  push.s            "Go to Level 3 - Winter Sky"
00388  conv.s.v          
00392  call.i            gml_Script_scr_TextSmallXY (4 args)
00400  popz.v.d          

label_404:
00404  push.v            self.menu
00412  pushi.i16         4
00416  cmp.i.v           ==
00420  bf                label_480
00424  pushi.i16         9
00428  conv.i.v          
00432  pushi.i16         2
00436  conv.i.v          
00440  push.i            65535
00448  conv.i.v          
00452  push.s            "Test fake crash"
00460  conv.s.v          
00464  call.i            gml_Script_scr_TextSmallXY (4 args)
00472  popz.v.d          
00476  b                 label_532

label_480:
00480  pushi.i16         9
00484  conv.i.v          
00488  pushi.i16         2
00492  conv.i.v          
00496  push.i            16777215
00504  conv.i.v          
00508  push.s            "Test fake crash"
00516  conv.s.v          
00520  call.i            gml_Script_scr_TextSmallXY (4 args)
00528  popz.v.d          

label_532:
00532  push.v            self.menu
00540  pushi.i16         5
00544  cmp.i.v           ==
00548  bf                label_608
00552  pushi.i16         10
00556  conv.i.v          
00560  pushi.i16         2
00564  conv.i.v          
00568  push.i            65535
00576  conv.i.v          
00580  push.s            "Exit back to debug menu"
00588  conv.s.v          
00592  call.i            gml_Script_scr_TextSmallXY (4 args)
00600  popz.v.d          
00604  b                 label_660

label_608:
00608  pushi.i16         10
00612  conv.i.v          
00616  pushi.i16         2
00620  conv.i.v          
00624  push.i            16777215
00632  conv.i.v          
00636  push.s            "Exit back to debug menu"
00644  conv.s.v          
00648  call.i            gml_Script_scr_TextSmallXY (4 args)
00656  popz.v.d          
