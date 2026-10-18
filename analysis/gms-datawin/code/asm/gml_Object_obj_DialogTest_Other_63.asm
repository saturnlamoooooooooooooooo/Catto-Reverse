// gml_Object_obj_DialogTest_Other_63
// 38 instructions, 216 bytes, 3 locals, 0 arguments

00000  push.s            "id"
00008  conv.s.v          
00012  pushbltn.v        self.async_load
00020  call.i            ds_map_find_value (2 args)
00028  pop.v.v           local.dialog
00036  push.s            "result"
00044  conv.s.v          
00048  pushbltn.v        self.async_load
00056  call.i            ds_map_find_value (2 args)
00064  pop.v.v           local.result
00072  push.v            self.ret
00080  pushloc.v         local.dialog
00088  cmp.v.v           ==
00092  bf                label_216
00096  pushloc.v         local.result
00104  call.i            is_undefined (1 args)
00112  conv.v.b          
00116  not.b.d           
00120  bf                label_216
00124  pushloc.v         local.result
00132  push.s            "64 65 61 64"
00140  cmp.s.v           !=
00144  bf                label_184
00148  pushi.i16         2552
00152  break             setowner
00156  pushi.i16         5
00160  conv.i.v          
00164  pushi.i16         23
00168  pushi.i16         4
00172  pop.v.v           alarm [array]
00180  b                 label_216

label_184:
00184  pushi.i16         2552
00188  break             setowner
00192  pushi.i16         5
00196  conv.i.v          
00200  pushi.i16         23
00204  pushi.i16         3
00208  pop.v.v           alarm [array]
