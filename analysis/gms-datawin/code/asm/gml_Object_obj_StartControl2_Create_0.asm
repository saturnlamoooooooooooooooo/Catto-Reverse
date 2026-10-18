// gml_Object_obj_StartControl2_Create_0
// 15 instructions, 80 bytes, 1 locals, 0 arguments

00000  push.s            "eternity"
00008  conv.s.v          
00012  call.i            window_set_caption (1 args)
00020  popz.v.d          
00024  pushi.i16         1
00028  pop.v.i           global.Character
00036  pushi.i16         1
00040  pop.v.i           global.Lives
00048  pushi.i16         2552
00052  break             setowner
00056  pushi.i16         5
00060  conv.i.v          
00064  pushi.i16         -1
00068  pushi.i16         1
00072  pop.v.v           alarm [array]
