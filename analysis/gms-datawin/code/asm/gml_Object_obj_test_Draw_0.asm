// gml_Object_obj_test_Draw_0
// 192 instructions, 1240 bytes, 7 locals, 0 arguments

00000  pushi.i16         1
00004  conv.i.v          
00008  call.i            draw_set_font (1 args)
00016  popz.v.d          
00020  pushi.i16         16
00024  pop.v.i           local._x
00032  pushi.i16         12
00036  pop.v.i           local._y
00044  pushi.i16         32
00048  pop.v.i           local.d
00056  call.i            date_current_datetime (0 args)
00064  call.i            date_time_string (1 args)
00072  pushloc.v         local._y
00080  pushloc.v         local._x
00088  call.i            gml_Script_draw_tbutton (3 args)
00096  popz.v.d          
00100  push.v            local._y
00108  pushloc.v         local.d
00116  add.v.v           
00120  pop.v.v           local._y
00128  push.s            "delay(3000)"
00136  conv.s.v          
00140  pushloc.v         local._y
00148  pushloc.v         local._x
00156  call.i            gml_Script_draw_tbutton (3 args)
00164  conv.v.b          
00168  bf                label_192
00172  pushi.i16         3000
00176  conv.i.v          
00180  call.i            delay (1 args)
00188  popz.v.d          

label_192:
00192  push.v            local._y
00200  pushloc.v         local.d
00208  add.v.v           
00212  pop.v.v           local._y
00220  push.s            "shell_do"
00228  conv.s.v          
00232  pushloc.v         local._y
00240  pushloc.v         local._x
00248  call.i            gml_Script_draw_tbutton (3 args)
00256  conv.v.b          
00260  bf                label_296
00264  push.v            self.game_save_path
00272  push.s            "explore"
00280  conv.s.v          
00284  call.i            shell_do (2 args)
00292  popz.v.d          

label_296:
00296  push.v            local._y
00304  pushloc.v         local.d
00312  add.v.v           
00316  pop.v.v           local._y
00324  push.s            "shell_execute"
00332  conv.s.v          
00336  pushloc.v         local._y
00344  pushloc.v         local._x
00352  call.i            gml_Script_draw_tbutton (3 args)
00360  conv.v.b          
00364  bf                label_512
00368  push.s            "test.txt"
00376  conv.s.v          
00380  call.i            file_text_open_write (1 args)
00388  pop.v.v           local.f
00396  push.s            "Hello World!"
00404  conv.s.v          
00408  pushloc.v         local.f
00416  call.i            file_text_write_string (2 args)
00424  popz.v.d          
00428  pushloc.v         local.f
00436  call.i            file_text_close (1 args)
00444  popz.v.d          
00448  push.v            self.game_save_path
00456  push.s            "\\test.txt"
00464  add.s.v           
00468  push.s            "WINDIR"
00476  conv.s.v          
00480  call.i            environment_get_variable (1 args)
00488  push.s            "/notepad.exe"
00496  add.s.v           
00500  call.i            shell_execute (2 args)
00508  popz.v.d          

label_512:
00512  push.v            local._y
00520  pushloc.v         local.d
00528  add.v.v           
00532  pop.v.v           local._y
00540  push.s            "file_text_put"
00548  conv.s.v          
00552  pushloc.v         local._y
00560  pushloc.v         local._x
00568  call.i            gml_Script_draw_tbutton (3 args)
00576  conv.v.b          
00580  bf                label_632
00584  call.i            date_current_datetime (0 args)
00592  call.i            date_datetime_string (1 args)
00600  push.v            self.game_save_path
00608  push.s            "\\WinDev.txt"
00616  add.s.v           
00620  call.i            file_text_put (2 args)
00628  popz.v.d          

label_632:
00632  push.v            local._y
00640  pushloc.v         local.d
00648  add.v.v           
00652  pop.v.v           local._y
00660  push.s            "file_text_get"
00668  conv.s.v          
00672  pushloc.v         local._y
00680  pushloc.v         local._x
00688  call.i            gml_Script_draw_tbutton (3 args)
00696  conv.v.b          
00700  bf                label_756
00704  push.s            "Contents: "
00712  push.v            self.game_save_path
00720  push.s            "\\WinDev.txt"
00728  add.s.v           
00732  call.i            file_text_get (1 args)
00740  add.v.s           
00744  call.i            show_message (1 args)
00752  popz.v.d          

label_756:
00756  push.v            local._y
00764  pushloc.v         local.d
00772  add.v.v           
00776  pop.v.v           local._y
00784  push.s            "get_color_win"
00792  conv.s.v          
00796  pushloc.v         local._y
00804  pushloc.v         local._x
00812  call.i            gml_Script_draw_tbutton (3 args)
00820  conv.v.b          
00824  bf                label_880
00828  call.i            @@This@@ (0 args)
00836  push.v            builtin.__background_get_colour
00844  callv             0 args
00848  call.i            get_color_win (1 args)
00856  call.i            @@This@@ (0 args)
00864  push.v            builtin.__background_set_colour
00872  callv             1 args
00876  popz.v.d          

label_880:
00880  push.v            local._y
00888  pushloc.v         local.d
00896  add.v.v           
00900  pop.v.v           local._y
00908  push.s            "window_set_caption_ext"
00916  conv.s.v          
00920  pushloc.v         local._y
00928  pushloc.v         local._x
00936  call.i            gml_Script_draw_tbutton (3 args)
00944  conv.v.b          
00948  bf                label_992
00952  push.s            "!!"
00960  conv.s.v          
00964  call.i            window_handle (0 args)
00972  call.i            gml_Script_hex_to_real (1 args)
00980  call.i            window_set_caption_ext (2 args)
00988  popz.v.d          

label_992:
00992  push.v            local._y
01000  pushloc.v         local.d
01008  add.v.v           
01012  pop.v.v           local._y
01020  push.s            "copy_file_win"
01028  conv.s.v          
01032  pushloc.v         local._y
01040  pushloc.v         local._x
01048  call.i            gml_Script_draw_tbutton (3 args)
01056  conv.v.b          
01060  bf                label_1240
01064  push.s            ""
01072  conv.s.v          
01076  push.s            "All files (*.*)|*.*"
01084  conv.s.v          
01088  call.i            get_open_filename (2 args)
01096  pop.v.v           local.path
01104  pushloc.v         local.path
01112  call.i            file_exists (1 args)
01120  conv.v.b          
01124  bf                label_1240
01128  pushloc.v         local.path
01136  push.s            ".copy"
01144  add.s.v           
01148  pop.v.v           local.newpath
01156  pushloc.v         local.newpath
01164  pushloc.v         local.path
01172  call.i            file_copy_win (2 args)
01180  conv.v.b          
01184  bf                label_1216
01188  push.s            "Copied successfully!"
01196  conv.s.v          
01200  call.i            show_message (1 args)
01208  popz.v.d          
01212  b                 label_1240

label_1216:
01216  push.s            "Coldn't copy the file."
01224  conv.s.v          
01228  call.i            show_message (1 args)
01236  popz.v.d          
