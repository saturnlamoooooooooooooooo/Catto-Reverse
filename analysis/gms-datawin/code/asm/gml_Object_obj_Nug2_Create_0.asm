// gml_Object_obj_Nug2_Create_0
// 12 instructions, 60 bytes, 1 locals, 0 arguments

00000  call.i            audio_stop_all (0 args)
00008  popz.v.d          
00012  pushi.i16         0
00016  conv.i.v          
00020  pushi.i16         1
00024  conv.i.v          
00028  pushi.i16         32
00032  conv.i.v          
00036  call.i            audio_play_sound (3 args)
00044  popz.v.d          
00048  pushi.i16         -25
00052  pop.v.i           self.hspeed
