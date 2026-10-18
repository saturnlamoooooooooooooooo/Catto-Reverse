// gml_Object_obj_Time_Draw_64
// 33 instructions, 188 bytes, 1 locals, 0 arguments

00000  pushi.i16         1
00004  conv.i.v          
00008  call.i            draw_set_font (1 args)
00016  popz.v.d          
00020  pushi.i16         1
00024  conv.i.v          
00028  pushi.i16         1
00032  conv.i.v          
00036  push.i            16777215
00044  conv.i.v          
00048  call.i            date_current_datetime (0 args)
00056  call.i            date_time_string (1 args)
00064  call.i            gml_Script_scr_TextSmallXY (4 args)
00072  popz.v.d          
00076  pushi.i16         3
00080  conv.i.v          
00084  pushi.i16         1
00088  conv.i.v          
00092  push.i            16777215
00100  conv.i.v          
00104  pushbltn.v        self.current_day
00112  call.i            string (1 args)
00120  push.s            " "
00128  add.s.v           
00132  push.v            self.month
00140  add.v.v           
00144  push.s            " "
00152  add.s.v           
00156  pushbltn.v        self.current_year
00164  call.i            string (1 args)
00172  add.v.v           
00176  call.i            gml_Script_scr_TextSmallXY (4 args)
00184  popz.v.d          
