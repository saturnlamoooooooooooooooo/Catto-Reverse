// gml_Object_obj_Version_Draw_0
// 12 instructions, 64 bytes, 1 locals, 0 arguments

00000  pushi.i16         1
00004  conv.i.v          
00008  call.i            draw_set_font (1 args)
00016  popz.v.d          
00020  pushi.i16         0
00024  conv.i.v          
00028  push.i            16777215
00036  conv.i.v          
00040  push.s            "ver. 1.2.1.0"
00048  conv.s.v          
00052  call.i            gml_Script_scr_Text (3 args)
00060  popz.v.d          
