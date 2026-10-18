// gml_Object_obj_example_Create_0
// 16 instructions, 92 bytes, 1 locals, 0 arguments

00000  call.i            window_handle (0 args)
00008  call.i            widget_set_owner (1 args)
00016  popz.v.d          
00020  push.s            "Sprite Images (*.png *.gif *.jpg *.jpeg)|*.png;*.gif;*.jpg;*.jpeg|Background Images (*.png)|*.png|All Files (*.*)|*.*"
00028  pop.v.s           self.filter
00036  pushi.i16         0
00040  pop.v.i           self.dlg
00048  pushi.i16         0
00052  pop.v.i           self.ret
00060  pushi.i16         2552
00064  break             setowner
00068  pushi.i16         2
00072  conv.i.v          
00076  pushi.i16         -1
00080  pushi.i16         0
00084  pop.v.v           alarm [array]
