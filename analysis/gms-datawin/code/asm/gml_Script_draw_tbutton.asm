// gml_Script_draw_tbutton
// 63 instructions, 432 bytes, 4 locals, 3 arguments

00000  push.v            arg.argument0
00008  pop.v.v           local._x
00016  push.v            arg.argument1
00024  pop.v.v           local._y
00032  push.v            arg.argument2
00040  pop.v.v           local.text
00048  pushbltn.v        self.mouse_x
00056  pushloc.v         local._x
00064  cmp.v.v           >=
00068  bf                label_200
00072  pushbltn.v        self.mouse_y
00080  pushloc.v         local._y
00088  cmp.v.v           >=
00092  bf                label_200
00096  pushbltn.v        self.mouse_y
00104  pushloc.v         local._y
00112  pushloc.v         local.text
00120  call.i            string_hash_to_newline (1 args)
00128  call.i            string_height (1 args)
00136  add.v.v           
00140  cmp.v.v           <
00144  bf                label_200
00148  pushbltn.v        self.mouse_x
00156  pushloc.v         local._x
00164  pushloc.v         local.text
00172  call.i            string_hash_to_newline (1 args)
00180  call.i            string_width (1 args)
00188  add.v.v           
00192  cmp.v.v           <
00196  b                 label_204

label_200:
00200  push.i16          0

label_204:
00204  pop.v.b           local.over
00212  pushloc.v         local.over
00220  conv.v.b          
00224  bf                label_256
00228  push.i            16711680
00236  conv.i.v          
00240  call.i            draw_set_color (1 args)
00248  popz.v.d          
00252  b                 label_276

label_256:
00256  pushi.i16         0
00260  conv.i.v          
00264  call.i            draw_set_color (1 args)
00272  popz.v.d          

label_276:
00276  push.v            arg.argument2
00284  call.i            string_hash_to_newline (1 args)
00292  push.v            arg.argument1
00300  push.v            arg.argument0
00308  call.i            draw_text (3 args)
00316  popz.v.d          
00320  pushloc.v         local.over
00328  conv.v.b          
00332  bf                label_360
00336  pushi.i16         1
00340  conv.i.v          
00344  call.i            mouse_check_button_released (1 args)
00352  conv.v.b          
00356  b                 label_364

label_360:
00360  push.i16          0

label_364:
00364  conv.b.v          
00368  ret.v.d           
00372  break             setstatic
00376  exit.i.d          
