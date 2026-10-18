// gml_Object_obj_StartControl2_Other_63
// 37 instructions, 216 bytes, 3 locals, 0 arguments

00000  push.s            "id"
00008  conv.s.v          
00012  pushbltn.v        self.async_load
00020  call.i            ds_map_find_value (2 args)
00028  pop.v.v           local.dialog
00036  push.s            "status"
00044  conv.s.v          
00048  pushbltn.v        self.async_load
00056  call.i            ds_map_find_value (2 args)
00064  pop.v.v           local.status
00072  push.v            self.ret
00080  pushloc.v         local.dialog
00088  cmp.v.v           ==
00092  bf                label_216
00096  pushloc.v         local.status
00104  call.i            is_undefined (1 args)
00112  conv.v.b          
00116  not.b.d           
00120  bf                label_216
00124  pushloc.v         local.status
00132  pushi.i16         0
00136  cmp.i.v           ==
00140  bf                label_184
00144  push.s            "keep trying..."
00152  conv.s.v          
00156  call.i            show_message (1 args)
00164  popz.v.d          
00168  call.i            gml_Script_scr_ExitGame (0 args)
00176  popz.v.d          
00180  b                 label_216

label_184:
00184  pushi.i16         2552
00188  break             setowner
00192  pushi.i16         5
00196  conv.i.v          
00200  pushi.i16         -1
00204  pushi.i16         2
00208  pop.v.v           alarm [array]
