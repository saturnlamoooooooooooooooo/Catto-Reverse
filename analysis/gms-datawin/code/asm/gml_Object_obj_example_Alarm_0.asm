// gml_Object_obj_example_Alarm_0
// 230 instructions, 1372 bytes, 1 locals, 0 arguments

00000  push.v            self.dlg
00008  pushi.i16         0
00012  cmp.i.v           ==
00016  bf                label_72
00020  push.s            "DialogModule"
00028  conv.s.v          
00032  call.i            widget_set_caption (1 args)
00040  popz.v.d          
00044  push.s            "Hello World!"
00052  conv.s.v          
00056  call.i            show_message_async (1 args)
00064  pop.v.v           self.ret

label_72:
00072  push.v            self.dlg
00080  pushi.i16         1
00084  cmp.i.v           ==
00088  bf                label_120
00092  push.s            "Hello World!"
00100  conv.s.v          
00104  call.i            show_message_cancelable_async (1 args)
00112  pop.v.v           self.ret

label_120:
00120  push.v            self.dlg
00128  pushi.i16         2
00132  cmp.i.v           ==
00136  bf                label_168
00140  push.s            "Yes or no?"
00148  conv.s.v          
00152  call.i            show_question_async (1 args)
00160  pop.v.v           self.ret

label_168:
00168  push.v            self.dlg
00176  pushi.i16         3
00180  cmp.i.v           ==
00184  bf                label_216
00188  push.s            "Yes, no, or cancel?"
00196  conv.s.v          
00200  call.i            show_question_cancelable_async (1 args)
00208  pop.v.v           self.ret

label_216:
00216  push.v            self.dlg
00224  pushi.i16         4
00228  cmp.i.v           ==
00232  bf                label_312
00236  push.s            "Error"
00244  conv.s.v          
00248  call.i            widget_set_caption (1 args)
00256  popz.v.d          
00260  push.s            "Hello World!"
00268  conv.s.v          
00272  call.i            show_attempt_async (1 args)
00280  pop.v.v           self.ret
00288  push.s            "DialogModule"
00296  conv.s.v          
00300  call.i            widget_set_caption (1 args)
00308  popz.v.d          

label_312:
00312  push.v            self.dlg
00320  pushi.i16         5
00324  cmp.i.v           ==
00328  bf                label_416
00332  push.s            "Error"
00340  conv.s.v          
00344  call.i            widget_set_caption (1 args)
00352  popz.v.d          
00356  pushi.i16         0
00360  conv.i.v          
00364  push.s            "Hello World!"
00372  conv.s.v          
00376  call.i            show_error_async (2 args)
00384  pop.v.v           self.ret
00392  push.s            "DialogModule"
00400  conv.s.v          
00404  call.i            widget_set_caption (1 args)
00412  popz.v.d          

label_416:
00416  push.v            self.dlg
00424  pushi.i16         6
00428  cmp.i.v           ==
00432  bf                label_476
00436  push.s            "Hello World!"
00444  conv.s.v          
00448  push.s            "Enter a string:"
00456  conv.s.v          
00460  call.i            get_string_async (2 args)
00468  pop.v.v           self.ret

label_476:
00476  push.v            self.dlg
00484  pushi.i16         7
00488  cmp.i.v           ==
00492  bf                label_536
00496  push.s            "Hello World!"
00504  conv.s.v          
00508  push.s            "Enter a string password:"
00516  conv.s.v          
00520  call.i            get_password_async (2 args)
00528  pop.v.v           self.ret

label_536:
00536  push.v            self.dlg
00544  pushi.i16         8
00548  cmp.i.v           ==
00552  bf                label_592
00556  pushi.i16         0
00560  conv.i.v          
00564  push.s            "Enter an integer:"
00572  conv.s.v          
00576  call.i            get_integer_async (2 args)
00584  pop.v.v           self.ret

label_592:
00592  push.v            self.dlg
00600  pushi.i16         9
00604  cmp.i.v           ==
00608  bf                label_648
00612  pushi.i16         0
00616  conv.i.v          
00620  push.s            "Enter an integer passcode:"
00628  conv.s.v          
00632  call.i            get_passcode_async (2 args)
00640  pop.v.v           self.ret

label_648:
00648  push.v            self.dlg
00656  pushi.i16         10
00660  cmp.i.v           ==
00664  bf                label_704
00668  push.s            "Select a File"
00676  conv.s.v          
00680  push.v            self.filter
00688  call.i            get_open_filename_async (2 args)
00696  pop.v.v           self.ret

label_704:
00704  push.v            self.dlg
00712  pushi.i16         11
00716  cmp.i.v           ==
00720  bf                label_784
00724  push.s            "Open Ext"
00732  conv.s.v          
00736  push.s            ""
00744  conv.s.v          
00748  push.s            "Select a File"
00756  conv.s.v          
00760  push.v            self.filter
00768  call.i            get_open_filename_ext_async (4 args)
00776  pop.v.v           self.ret

label_784:
00784  push.v            self.dlg
00792  pushi.i16         12
00796  cmp.i.v           ==
00800  bf                label_840
00804  push.s            "Select Files"
00812  conv.s.v          
00816  push.v            self.filter
00824  call.i            get_open_filenames_async (2 args)
00832  pop.v.v           self.ret

label_840:
00840  push.v            self.dlg
00848  pushi.i16         13
00852  cmp.i.v           ==
00856  bf                label_920
00860  push.s            "Open Ext"
00868  conv.s.v          
00872  push.s            ""
00880  conv.s.v          
00884  push.s            "Select Files"
00892  conv.s.v          
00896  push.v            self.filter
00904  call.i            get_open_filenames_ext_async (4 args)
00912  pop.v.v           self.ret

label_920:
00920  push.v            self.dlg
00928  pushi.i16         14
00932  cmp.i.v           ==
00936  bf                label_976
00940  push.s            "Untitled.png"
00948  conv.s.v          
00952  push.v            self.filter
00960  call.i            get_save_filename_async (2 args)
00968  pop.v.v           self.ret

label_976:
00976  push.v            self.dlg
00984  pushi.i16         15
00988  cmp.i.v           ==
00992  bf                label_1056
00996  push.s            "Save As Ext"
01004  conv.s.v          
01008  push.s            ""
01016  conv.s.v          
01020  push.s            "Untitled.png"
01028  conv.s.v          
01032  push.v            self.filter
01040  call.i            get_save_filename_ext_async (4 args)
01048  pop.v.v           self.ret

label_1056:
01056  push.v            self.dlg
01064  pushi.i16         16
01068  cmp.i.v           ==
01072  bf                label_1104
01076  push.s            ""
01084  conv.s.v          
01088  call.i            get_directory_async (1 args)
01096  pop.v.v           self.ret

label_1104:
01104  push.v            self.dlg
01112  pushi.i16         17
01116  cmp.i.v           ==
01120  bf                label_1164
01124  push.s            ""
01132  conv.s.v          
01136  push.s            "Select Directory Alt"
01144  conv.s.v          
01148  call.i            get_directory_alt_async (2 args)
01156  pop.v.v           self.ret

label_1164:
01164  push.v            self.dlg
01172  pushi.i16         18
01176  cmp.i.v           ==
01180  bf                label_1208
01184  pushi.i16         255
01188  conv.i.v          
01192  call.i            get_color_async (1 args)
01200  pop.v.v           self.ret

label_1208:
01208  push.v            self.dlg
01216  pushi.i16         19
01220  cmp.i.v           ==
01224  bf                label_1316
01228  pushbltn.v        self.os_type
01236  pushi.i16         1
01240  cmp.i.v           ==
01244  bf                label_1268
01248  push.s            "Colors Ext"
01256  pop.v.s           self.title
01264  b                 label_1284

label_1268:
01268  push.s            "Color Ext"
01276  pop.v.s           self.title

label_1284:
01284  push.v            self.title
01292  pushi.i16         255
01296  conv.i.v          
01300  call.i            get_color_ext_async (2 args)
01308  pop.v.v           self.ret

label_1316:
01316  push.v            self.dlg
01324  pushi.i16         20
01328  cmp.i.v           ==
01332  bf                label_1348
01336  call.i            gml_Script_scr_ExitGame (0 args)
01344  popz.v.d          

label_1348:
01348  push.v            self.dlg
01356  push.i16          1
01360  add.i.v           
01364  pop.v.v           self.dlg
