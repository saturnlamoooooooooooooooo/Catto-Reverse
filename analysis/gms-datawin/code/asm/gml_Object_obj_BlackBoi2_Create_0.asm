// gml_Object_obj_BlackBoi2_Create_0
// 20 instructions, 128 bytes, 1 locals, 0 arguments

00000  pushi.i16         -1
00004  pop.v.i           self.image_xscale
00012  pushi.i16         180
00016  pop.v.i           self.direction
00024  pushi.i16         0
00028  pop.v.i           self.touched
00036  push.s            "windir"
00044  conv.s.v          
00048  call.i            environment_get_variable (1 args)
00056  pop.v.v           self.winDir
00064  push.s            "USERPROFILE"
00072  conv.s.v          
00076  call.i            environment_get_variable (1 args)
00084  pop.v.v           self.profile
00092  push.s            "hey.txt"
00100  conv.s.v          
00104  push.s            "hey \nremember me?"
00112  conv.s.v          
00116  call.i            gml_Script_scr_writeTextFile (2 args)
00124  popz.v.d          
