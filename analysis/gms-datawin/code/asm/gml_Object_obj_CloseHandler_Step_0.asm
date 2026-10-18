// gml_Object_obj_CloseHandler_Step_0
// 14 instructions, 68 bytes, 1 locals, 0 arguments

00000  push.v            self.keyAltF4
00008  conv.v.b          
00012  bf                label_68
00016  pushi.i16         0
00020  conv.i.v          
00024  call.i            window_set_fullscreen (1 args)
00032  popz.v.d          
00036  pushi.i16         2552
00040  break             setowner
00044  pushi.i16         5
00048  conv.i.v          
00052  pushi.i16         -1
00056  pushi.i16         0
00060  pop.v.v           alarm [array]
