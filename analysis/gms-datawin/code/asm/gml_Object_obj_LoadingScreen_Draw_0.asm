// gml_Object_obj_LoadingScreen_Draw_0
// 172 instructions, 912 bytes, 1 locals, 0 arguments

00000  pushglb.v         global.Level3Passed
00008  pushi.i16         1
00012  cmp.i.v           ==
00016  bf                label_232
00020  pushi.i16         0
00024  conv.i.v          
00028  call.i            draw_set_font (1 args)
00036  popz.v.d          
00040  pushi.i16         0
00044  conv.i.v          
00048  pushi.i16         255
00052  conv.i.v          
00056  push.s            "DIEDIEDIEDIEDIEDIEDIEDIEDIEIEDIEDIEDIEDIEDIEDIEDIEDIE"
00064  conv.s.v          
00068  call.i            gml_Script_scr_Text (3 args)
00076  popz.v.d          
00080  pushi.i16         5
00084  conv.i.v          
00088  call.i            draw_set_font (1 args)
00096  popz.v.d          
00100  pushi.i16         4
00104  conv.i.v          
00108  pushi.i16         255
00112  conv.i.v          
00116  pushglb.v         global.levelName
00124  call.i            gml_Script_scr_TextSmall (3 args)
00132  popz.v.d          
00136  pushi.i16         6
00140  conv.i.v          
00144  call.i            draw_set_font (1 args)
00152  popz.v.d          
00156  pushi.i16         3
00160  conv.i.v          
00164  pushi.i16         255
00168  conv.i.v          
00172  push.v            self.mission
00180  call.i            gml_Script_scr_Text (3 args)
00188  popz.v.d          
00192  pushi.i16         10
00196  conv.i.v          
00200  pushi.i16         255
00204  conv.i.v          
00208  push.v            self.chosenMessage
00216  call.i            gml_Script_scr_Text (3 args)
00224  popz.v.d          
00228  b                 label_912

label_232:
00232  pushglb.v         global.hellStage
00240  pushi.i16         2
00244  cmp.i.v           ==
00248  bf                label_440
00252  pushi.i16         3
00256  conv.i.v          
00260  call.i            draw_set_font (1 args)
00268  popz.v.d          
00272  pushi.i16         0
00276  conv.i.v          
00280  push.i            4235519
00288  conv.i.v          
00292  push.s            "Loading..."
00300  conv.s.v          
00304  call.i            gml_Script_scr_Text (3 args)
00312  popz.v.d          
00316  pushi.i16         2
00320  conv.i.v          
00324  call.i            draw_set_font (1 args)
00332  popz.v.d          
00336  pushi.i16         4
00340  conv.i.v          
00344  push.i            65535
00352  conv.i.v          
00356  pushglb.v         global.levelName
00364  call.i            gml_Script_scr_TextSmall (3 args)
00372  popz.v.d          
00376  pushi.i16         1
00380  conv.i.v          
00384  call.i            draw_set_font (1 args)
00392  popz.v.d          
00396  pushi.i16         10
00400  conv.i.v          
00404  push.i            16777215
00412  conv.i.v          
00416  push.v            self.chosenMessage
00424  call.i            gml_Script_scr_Text (3 args)
00432  popz.v.d          
00436  b                 label_912

label_440:
00440  pushglb.v         global.hellStage
00448  pushi.i16         3
00452  cmp.i.v           ==
00456  bf                label_688
00460  pushi.i16         3
00464  conv.i.v          
00468  call.i            draw_set_font (1 args)
00476  popz.v.d          
00480  pushi.i16         0
00484  conv.i.v          
00488  push.i            16711935
00496  conv.i.v          
00500  push.s            "Loading..."
00508  conv.s.v          
00512  call.i            gml_Script_scr_Text (3 args)
00520  popz.v.d          
00524  pushi.i16         2
00528  conv.i.v          
00532  call.i            draw_set_font (1 args)
00540  popz.v.d          
00544  pushi.i16         4
00548  conv.i.v          
00552  push.i            65280
00560  conv.i.v          
00564  pushglb.v         global.levelName
00572  call.i            gml_Script_scr_TextSmall (3 args)
00580  popz.v.d          
00584  pushi.i16         1
00588  conv.i.v          
00592  call.i            draw_set_font (1 args)
00600  popz.v.d          
00604  pushi.i16         3
00608  conv.i.v          
00612  push.i            16777215
00620  conv.i.v          
00624  push.v            self.mission
00632  call.i            gml_Script_scr_Text (3 args)
00640  popz.v.d          
00644  pushi.i16         10
00648  conv.i.v          
00652  push.i            16777215
00660  conv.i.v          
00664  push.v            self.chosenMessage
00672  call.i            gml_Script_scr_Text (3 args)
00680  popz.v.d          
00684  b                 label_912

label_688:
00688  pushi.i16         3
00692  conv.i.v          
00696  call.i            draw_set_font (1 args)
00704  popz.v.d          
00708  pushi.i16         0
00712  conv.i.v          
00716  push.i            8388736
00724  conv.i.v          
00728  push.s            "Loading..."
00736  conv.s.v          
00740  call.i            gml_Script_scr_Text (3 args)
00748  popz.v.d          
00752  pushi.i16         2
00756  conv.i.v          
00760  call.i            draw_set_font (1 args)
00768  popz.v.d          
00772  pushi.i16         4
00776  conv.i.v          
00780  push.i            16711935
00788  conv.i.v          
00792  pushglb.v         global.levelName
00800  call.i            gml_Script_scr_TextSmall (3 args)
00808  popz.v.d          
00812  pushi.i16         1
00816  conv.i.v          
00820  call.i            draw_set_font (1 args)
00828  popz.v.d          
00832  pushi.i16         3
00836  conv.i.v          
00840  push.i            16777215
00848  conv.i.v          
00852  push.v            self.mission
00860  call.i            gml_Script_scr_Text (3 args)
00868  popz.v.d          
00872  pushi.i16         10
00876  conv.i.v          
00880  push.i            16777215
00888  conv.i.v          
00892  push.v            self.chosenMessage
00900  call.i            gml_Script_scr_Text (3 args)
00908  popz.v.d          
