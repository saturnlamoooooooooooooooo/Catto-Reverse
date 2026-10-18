// gml_Object_obj_Warning_Draw_0
// 167 instructions, 864 bytes, 1 locals, 0 arguments

00000  pushglb.v         global.trueEnded
00008  pushi.i16         1
00012  cmp.i.v           ==
00016  bf                label_236
00020  pushi.i16         3
00024  conv.i.v          
00028  call.i            draw_set_font (1 args)
00036  popz.v.d          
00040  pushi.i16         0
00044  conv.i.v          
00048  pushi.i16         255
00052  conv.i.v          
00056  push.s            "Warning!"
00064  conv.s.v          
00068  call.i            gml_Script_scr_Text (3 args)
00076  popz.v.d          
00080  pushi.i16         1
00084  conv.i.v          
00088  call.i            draw_set_font (1 args)
00096  popz.v.d          
00100  pushi.i16         2
00104  conv.i.v          
00108  push.i            16777215
00116  conv.i.v          
00120  push.s            "This game has loud sounds and flashing images that \nmay trigger epileptic seizures. Don't be a stupid boy and play this \ngame unless you want to die from brain explosion"
00128  conv.s.v          
00132  call.i            gml_Script_scr_Text (3 args)
00140  popz.v.d          
00144  pushi.i16         3
00148  conv.i.v          
00152  push.i            16777215
00160  conv.i.v          
00164  push.s            "Music belongs to SEGA and Nintendo, sound effects are \nroyalty-free (I think?)"
00172  conv.s.v          
00176  call.i            gml_Script_scr_Text (3 args)
00184  popz.v.d          
00188  pushi.i16         5
00192  conv.i.v          
00196  push.i            16777215
00204  conv.i.v          
00208  push.s            "Thanks for playing!"
00216  conv.s.v          
00220  call.i            gml_Script_scr_Text (3 args)
00228  popz.v.d          
00232  b                 label_864

label_236:
00236  pushglb.v         global.hellStage
00244  pushi.i16         4
00248  cmp.i.v           ==
00252  bf                label_428
00256  pushi.i16         3
00260  conv.i.v          
00264  call.i            draw_set_font (1 args)
00272  popz.v.d          
00276  pushi.i16         0
00280  conv.i.v          
00284  pushi.i16         255
00288  conv.i.v          
00292  push.s            "Warning!"
00300  conv.s.v          
00304  call.i            gml_Script_scr_Text (3 args)
00312  popz.v.d          
00316  pushi.i16         1
00320  conv.i.v          
00324  call.i            draw_set_font (1 args)
00332  popz.v.d          
00336  pushi.i16         2
00340  conv.i.v          
00344  push.i            16777215
00352  conv.i.v          
00356  push.s            "this game is not what you think it is \nit is up to you to finish what you started"
00364  conv.s.v          
00368  call.i            gml_Script_scr_Text (3 args)
00376  popz.v.d          
00380  pushi.i16         5
00384  conv.i.v          
00388  push.i            16777215
00396  conv.i.v          
00400  push.s            "Press Enter to continue."
00408  conv.s.v          
00412  call.i            gml_Script_scr_Text (3 args)
00420  popz.v.d          
00424  b                 label_864

label_428:
00428  pushglb.v         global.hellStage
00436  pushi.i16         5
00440  cmp.i.v           ==
00444  bf                label_652
00448  pushi.i16         4
00452  conv.i.v          
00456  call.i            draw_set_font (1 args)
00464  popz.v.d          
00468  pushi.i16         0
00472  conv.i.v          
00476  pushi.i16         255
00480  conv.i.v          
00484  push.s            "I'M SORRY"
00492  conv.s.v          
00496  call.i            gml_Script_scr_Text (3 args)
00504  popz.v.d          
00508  pushi.i16         6
00512  conv.i.v          
00516  call.i            draw_set_font (1 args)
00524  popz.v.d          
00528  pushi.i16         2
00532  conv.i.v          
00536  pushi.i16         255
00540  conv.i.v          
00544  push.s            "åŒãÃƒÆ’¢â‚¬Å¡€šÂ£ÌÉÏÔËÁÆÌÉÏÔËÁÆáÒÚÑÂÙпя╟╨╬╥▐п╠▀šðèæžŠÐÈŽSm¶rg¥sÚÑÂÙпяÖóÞ¢ñëÒÚÑÂÙпÖóÞ¢ñëÒÚÑÂÙп╟╨╬"
00552  conv.s.v          
00556  call.i            gml_Script_scr_Text (3 args)
00564  popz.v.d          
00568  pushi.i16         3
00572  conv.i.v          
00576  pushi.i16         255
00580  conv.i.v          
00584  push.s            "�æ–‡åŒãÃƒÆ’¢â‚¬Å¡€åŒãÃƒÆ’ÖóÞ¢ñëÒÚÑÂÙпя╟╨╬╥▐£ÌÉÏÔËÁÆáÖóÙs∂в√•»¿Ø§яЛПипя╟╨╬╥▐£ÌÉÏÔËпя╟╨╬╥▐£ÌÉÏÔË"
00592  conv.s.v          
00596  call.i            gml_Script_scr_Text (3 args)
00604  popz.v.d          
00608  pushi.i16         5
00612  conv.i.v          
00616  pushi.i16         255
00620  conv.i.v          
00624  push.s            "I'M SORRYI'M SORRYI'M SORRYI'M SORRYI'M SORRYI'M SORRYI'M SORRYI'M SORRYI'M SORRYI'M SORRYI'M SORRYI'M SORRY"
00632  conv.s.v          
00636  call.i            gml_Script_scr_Text (3 args)
00644  popz.v.d          
00648  b                 label_864

label_652:
00652  pushi.i16         3
00656  conv.i.v          
00660  call.i            draw_set_font (1 args)
00668  popz.v.d          
00672  pushi.i16         0
00676  conv.i.v          
00680  pushi.i16         255
00684  conv.i.v          
00688  push.s            "Warning!"
00696  conv.s.v          
00700  call.i            gml_Script_scr_Text (3 args)
00708  popz.v.d          
00712  pushi.i16         1
00716  conv.i.v          
00720  call.i            draw_set_font (1 args)
00728  popz.v.d          
00732  pushi.i16         2
00736  conv.i.v          
00740  push.i            16777215
00748  conv.i.v          
00752  push.s            "This game has loud sounds and flashing images that \nmay trigger epileptic seizures. Don't be a stupid boy and play this \ngame unless you want to die from brain explosion"
00760  conv.s.v          
00764  call.i            gml_Script_scr_Text (3 args)
00772  popz.v.d          
00776  pushi.i16         3
00780  conv.i.v          
00784  push.i            16777215
00792  conv.i.v          
00796  push.s            "Music belongs to SEGA and Nintendo, sound effects are \nroyalty-free (I think?)"
00804  conv.s.v          
00808  call.i            gml_Script_scr_Text (3 args)
00816  popz.v.d          
00820  pushi.i16         5
00824  conv.i.v          
00828  push.i            16777215
00836  conv.i.v          
00840  push.s            "Press Enter to continue."
00848  conv.s.v          
00852  call.i            gml_Script_scr_Text (3 args)
00860  popz.v.d          
