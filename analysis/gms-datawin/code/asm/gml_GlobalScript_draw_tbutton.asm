// gml_GlobalScript_draw_tbutton
// 73 instructions, 432 bytes, 1 locals, 0 arguments

00000  b                 label_384
00004  push.v            arg.argument0
00012  pop.v.v           local._x
00020  push.v            arg.argument1
00028  pop.v.v           local._y
00036  push.v            arg.argument2
00044  pop.v.v           local.text
00052  pushbltn.v        self.mouse_x
00060  pushloc.v         local._x
00068  cmp.v.v           >=
00072  bf                label_204
00076  pushbltn.v        self.mouse_y
00084  pushloc.v         local._y
00092  cmp.v.v           >=
00096  bf                label_204
00100  pushbltn.v        self.mouse_y
00108  pushloc.v         local._y
00116  pushloc.v         local.text
00124  call.i            string_hash_to_newline (1 args)
00132  call.i            string_height (1 args)
00140  add.v.v           
00144  cmp.v.v           <
00148  bf                label_204
00152  pushbltn.v        self.mouse_x
00160  pushloc.v         local._x
00168  pushloc.v         local.text
00176  call.i            string_hash_to_newline (1 args)
00184  call.i            string_width (1 args)
00192  add.v.v           
00196  cmp.v.v           <
00200  b                 label_208

label_204:
00204  push.i16          0

label_208:
00208  pop.v.b           local.over
00216  pushloc.v         local.over
00224  conv.v.b          
00228  bf                label_260
00232  push.i            16711680
00240  conv.i.v          
00244  call.i            draw_set_color (1 args)
00252  popz.v.d          
00256  b                 label_280

label_260:
00260  pushi.i16         0
00264  conv.i.v          
00268  call.i            draw_set_color (1 args)
00276  popz.v.d          

label_280:
00280  push.v            arg.argument2
00288  call.i            string_hash_to_newline (1 args)
00296  push.v            arg.argument1
00304  push.v            arg.argument0
00312  call.i            draw_text (3 args)
00320  popz.v.d          
00324  pushloc.v         local.over
00332  conv.v.b          
00336  bf                label_364
00340  pushi.i16         1
00344  conv.i.v          
00348  call.i            mouse_check_button_released (1 args)
00356  conv.v.b          
00360  b                 label_368

label_364:
00364  push.i16          0

label_368:
00368  conv.b.v          
00372  ret.v.d           
00376  break             setstatic
00380  exit.i.d          

label_384:
00384  push.i            [function] gml_Script_draw_tbutton
00392  conv.i.v          
00396  pushi.i16         -1
00400  conv.i.v          
00404  call.i            method (2 args)
00412  dup.v.d           0
00416  pushi.i16         -1
00420  pop.v.v           draw_tbutton [stacktop]
00428  popz.v.d          
