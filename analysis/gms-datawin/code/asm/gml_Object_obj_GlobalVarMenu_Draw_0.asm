// gml_Object_obj_GlobalVarMenu_Draw_0
// 103 instructions, 568 bytes, 1 locals, 0 arguments

00000  pushi.i16         1
00004  conv.i.v          
00008  call.i            draw_set_font (1 args)
00016  popz.v.d          
00020  pushi.i16         6
00024  conv.i.v          
00028  pushi.i16         2
00032  conv.i.v          
00036  push.i            16777215
00044  conv.i.v          
00048  push.s            "Ended state: "
00056  pushglb.v         global.ended
00064  call.i            string (1 args)
00072  add.v.s           
00076  call.i            gml_Script_scr_TextSmallXY (4 args)
00084  popz.v.d          
00088  pushi.i16         7
00092  conv.i.v          
00096  pushi.i16         2
00100  conv.i.v          
00104  push.i            16777215
00112  conv.i.v          
00116  push.s            "Room ID: "
00124  pushglb.v         global.RoomID
00132  call.i            string (1 args)
00140  add.v.s           
00144  call.i            gml_Script_scr_TextSmallXY (4 args)
00152  popz.v.d          
00156  pushi.i16         8
00160  conv.i.v          
00164  pushi.i16         2
00168  conv.i.v          
00172  push.i            16777215
00180  conv.i.v          
00184  push.s            "Current act (from 0 - 4): "
00192  pushglb.v         global.hellStage
00200  call.i            string (1 args)
00208  add.v.s           
00212  call.i            gml_Script_scr_TextSmallXY (4 args)
00220  popz.v.d          
00224  pushi.i16         9
00228  conv.i.v          
00232  pushi.i16         2
00236  conv.i.v          
00240  push.i            16777215
00248  conv.i.v          
00252  push.s            "Working directory: "
00260  pushbltn.v        self.working_directory
00268  call.i            string (1 args)
00276  add.v.s           
00280  call.i            gml_Script_scr_TextSmallXY (4 args)
00288  popz.v.d          
00292  pushi.i16         10
00296  conv.i.v          
00300  pushi.i16         2
00304  conv.i.v          
00308  push.i            16777215
00316  conv.i.v          
00320  push.s            "User directory: "
00328  push.s            "USERPROFILE"
00336  conv.s.v          
00340  call.i            environment_get_variable (1 args)
00348  call.i            string (1 args)
00356  add.v.s           
00360  call.i            gml_Script_scr_TextSmallXY (4 args)
00368  popz.v.d          
00372  pushi.i16         11
00376  conv.i.v          
00380  pushi.i16         2
00384  conv.i.v          
00388  push.i            16777215
00396  conv.i.v          
00400  push.s            "Total score: "
00408  pushglb.v         global.Score
00416  call.i            string (1 args)
00424  add.v.s           
00428  call.i            gml_Script_scr_TextSmallXY (4 args)
00436  popz.v.d          
00440  push.v            self.menu
00448  pushi.i16         1
00452  cmp.i.v           ==
00456  bf                label_516
00460  pushi.i16         13
00464  conv.i.v          
00468  pushi.i16         2
00472  conv.i.v          
00476  push.i            65535
00484  conv.i.v          
00488  push.s            "Exit back to debug menu"
00496  conv.s.v          
00500  call.i            gml_Script_scr_TextSmallXY (4 args)
00508  popz.v.d          
00512  b                 label_568

label_516:
00516  pushi.i16         13
00520  conv.i.v          
00524  pushi.i16         2
00528  conv.i.v          
00532  push.i            16777215
00540  conv.i.v          
00544  push.s            "Exit back to debug menu"
00552  conv.s.v          
00556  call.i            gml_Script_scr_TextSmallXY (4 args)
00564  popz.v.d          
