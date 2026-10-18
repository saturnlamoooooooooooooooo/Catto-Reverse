// gml_Object_obj_example_Other_63
// 70 instructions, 432 bytes, 5 locals, 0 arguments

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
00072  push.s            "value"
00080  conv.s.v          
00084  pushbltn.v        self.async_load
00092  call.i            ds_map_find_value (2 args)
00100  pop.v.v           local.number
00108  push.s            "result"
00116  conv.s.v          
00120  pushbltn.v        self.async_load
00128  call.i            ds_map_find_value (2 args)
00136  pop.v.v           local.result
00144  push.v            self.ret
00152  pushloc.v         local.dialog
00160  cmp.v.v           ==
00164  bf                label_432
00168  pushloc.v         local.status
00176  call.i            is_undefined (1 args)
00184  conv.v.b          
00188  not.b.d           
00192  bf                label_432
00196  pushloc.v         local.number
00204  call.i            is_undefined (1 args)
00212  conv.v.b          
00216  not.b.d           
00220  bf                label_256
00224  pushloc.v         local.number
00232  call.i            string (1 args)
00240  call.i            show_message (1 args)
00248  popz.v.d          
00252  b                 label_400

label_256:
00256  pushloc.v         local.result
00264  call.i            is_undefined (1 args)
00272  conv.v.b          
00276  not.b.d           
00280  bf                label_308
00284  pushloc.v         local.result
00292  push.s            ""
00300  cmp.s.v           !=
00304  b                 label_312

label_308:
00308  push.i16          0

label_312:
00312  bf                label_348
00316  pushloc.v         local.result
00324  call.i            string (1 args)
00332  call.i            show_message (1 args)
00340  popz.v.d          
00344  b                 label_400

label_348:
00348  pushloc.v         local.result
00356  call.i            is_undefined (1 args)
00364  conv.v.b          
00368  bf                label_400
00372  pushloc.v         local.status
00380  call.i            string (1 args)
00388  call.i            show_message (1 args)
00396  popz.v.d          

label_400:
00400  pushi.i16         2552
00404  break             setowner
00408  pushi.i16         2
00412  conv.i.v          
00416  pushi.i16         -1
00420  pushi.i16         0
00424  pop.v.v           alarm [array]
