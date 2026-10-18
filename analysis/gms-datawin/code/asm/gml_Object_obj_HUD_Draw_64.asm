// gml_Object_obj_HUD_Draw_64
// 155 instructions, 836 bytes, 1 locals, 0 arguments

00000  pushi.i16         1
00004  conv.i.v          
00008  call.i            draw_set_font (1 args)
00016  popz.v.d          
00020  pushglb.v         global.hellStage
00028  pushi.i16         2
00032  cmp.i.v           ==
00036  bf                label_300
00040  pushi.i16         0
00044  conv.i.v          
00048  pushi.i16         0
00052  conv.i.v          
00056  pushi.i16         0
00060  conv.i.v          
00064  pushi.i16         69
00068  conv.i.v          
00072  call.i            draw_sprite (4 args)
00080  popz.v.d          
00084  pushi.i16         1
00088  conv.i.v          
00092  pushi.i16         3
00096  conv.i.v          
00100  push.i            16777215
00108  conv.i.v          
00112  push.s            "x "
00120  pushglb.v         global.Lives
00128  call.i            string (1 args)
00136  add.v.s           
00140  call.i            gml_Script_scr_TextSmallXY (4 args)
00148  popz.v.d          
00152  pushi.i16         4
00156  conv.i.v          
00160  pushi.i16         3
00164  conv.i.v          
00168  push.i            16777215
00176  conv.i.v          
00180  pushglb.v         global.CatFood
00188  call.i            string (1 args)
00196  push.s            "/"
00204  add.s.v           
00208  push.v            self.FoodTotal
00216  call.i            string (1 args)
00224  add.v.v           
00228  call.i            gml_Script_scr_TextSmallXY (4 args)
00236  popz.v.d          
00240  pushi.i16         7
00244  conv.i.v          
00248  pushi.i16         3
00252  conv.i.v          
00256  push.i            16777215
00264  conv.i.v          
00268  pushglb.v         global.Score
00276  call.i            string (1 args)
00284  call.i            gml_Script_scr_TextSmallXY (4 args)
00292  popz.v.d          
00296  b                 label_836

label_300:
00300  pushglb.v         global.hellStage
00308  pushi.i16         3
00312  cmp.i.v           ==
00316  bf                label_580
00320  pushi.i16         0
00324  conv.i.v          
00328  pushi.i16         0
00332  conv.i.v          
00336  pushi.i16         0
00340  conv.i.v          
00344  pushi.i16         61
00348  conv.i.v          
00352  call.i            draw_sprite (4 args)
00360  popz.v.d          
00364  pushi.i16         1
00368  conv.i.v          
00372  pushi.i16         3
00376  conv.i.v          
00380  push.i            16777215
00388  conv.i.v          
00392  push.s            "x "
00400  pushglb.v         global.Lives
00408  call.i            string (1 args)
00416  add.v.s           
00420  call.i            gml_Script_scr_TextSmallXY (4 args)
00428  popz.v.d          
00432  pushi.i16         4
00436  conv.i.v          
00440  pushi.i16         3
00444  conv.i.v          
00448  push.i            16777215
00456  conv.i.v          
00460  pushglb.v         global.Pearls
00468  call.i            string (1 args)
00476  push.s            "/"
00484  add.s.v           
00488  push.v            self.PearlTotal
00496  call.i            string (1 args)
00504  add.v.v           
00508  call.i            gml_Script_scr_TextSmallXY (4 args)
00516  popz.v.d          
00520  pushi.i16         7
00524  conv.i.v          
00528  pushi.i16         3
00532  conv.i.v          
00536  push.i            16777215
00544  conv.i.v          
00548  pushglb.v         global.Score
00556  call.i            string (1 args)
00564  call.i            gml_Script_scr_TextSmallXY (4 args)
00572  popz.v.d          
00576  b                 label_836

label_580:
00580  pushi.i16         0
00584  conv.i.v          
00588  pushi.i16         0
00592  conv.i.v          
00596  pushi.i16         0
00600  conv.i.v          
00604  pushi.i16         49
00608  conv.i.v          
00612  call.i            draw_sprite (4 args)
00620  popz.v.d          
00624  pushi.i16         1
00628  conv.i.v          
00632  pushi.i16         3
00636  conv.i.v          
00640  push.i            16777215
00648  conv.i.v          
00652  push.s            "x "
00660  pushglb.v         global.Lives
00668  call.i            string (1 args)
00676  add.v.s           
00680  call.i            gml_Script_scr_TextSmallXY (4 args)
00688  popz.v.d          
00692  pushi.i16         4
00696  conv.i.v          
00700  pushi.i16         3
00704  conv.i.v          
00708  push.i            16777215
00716  conv.i.v          
00720  pushglb.v         global.TinyBisc
00728  call.i            string (1 args)
00736  push.s            "/"
00744  add.s.v           
00748  push.v            self.TinyTotal
00756  call.i            string (1 args)
00764  add.v.v           
00768  call.i            gml_Script_scr_TextSmallXY (4 args)
00776  popz.v.d          
00780  pushi.i16         7
00784  conv.i.v          
00788  pushi.i16         3
00792  conv.i.v          
00796  push.i            16777215
00804  conv.i.v          
00808  pushglb.v         global.Score
00816  call.i            string (1 args)
00824  call.i            gml_Script_scr_TextSmallXY (4 args)
00832  popz.v.d          
