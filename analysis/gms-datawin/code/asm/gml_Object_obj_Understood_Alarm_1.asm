// gml_Object_obj_Understood_Alarm_1
// 17 instructions, 92 bytes, 1 locals, 0 arguments

00000  pushi.i16         0
00004  conv.i.v          
00008  call.i            gml_Script_scr_writeFakeEnd (1 args)
00016  popz.v.d          
00020  pushi.i16         1
00024  conv.i.v          
00028  call.i            gml_Script_scr_writeTrueEnd (1 args)
00036  popz.v.d          
00040  push.s            "Thank you "
00048  pushglb.v         global.Username
00056  add.v.s           
00060  call.i            window_set_caption (1 args)
00068  popz.v.d          
00072  pushi.i16         37
00076  conv.i.v          
00080  call.i            room_goto (1 args)
00088  popz.v.d          
