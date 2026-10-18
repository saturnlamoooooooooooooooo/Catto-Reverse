// gml_Object_obj_Level4Trigger_Collision_obj_PlayerControl
// 15 instructions, 76 bytes, 1 locals, 0 arguments

00000  pushi.i16         0
00004  pop.v.i           global.canMove
00012  call.i            audio_stop_all (0 args)
00020  popz.v.d          
00024  pushi.i16         0
00028  conv.i.v          
00032  call.i            gml_Script_window_set_visible_w (1 args)
00040  popz.v.d          
00044  pushi.i16         2552
00048  break             setowner
00052  pushi.i16         120
00056  conv.i.v          
00060  pushi.i16         -1
00064  pushi.i16         0
00068  pop.v.v           alarm [array]
