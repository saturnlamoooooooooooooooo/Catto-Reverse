// gml_Object_obj_BlackBoi_Alarm_0
// 17 instructions, 108 bytes, 1 locals, 0 arguments

00000  push.v            self.profile
00008  push.s            "\\Desktop\\"
00016  add.s.v           
00020  push.s            "listentome.txt"
00028  add.s.v           
00032  push.v            self.winDir
00040  push.s            "/notepad.exe"
00048  add.s.v           
00052  call.i            shell_execute (2 args)
00060  popz.v.d          
00064  pushi.i16         2
00068  conv.i.v          
00072  push.v            self.depth
00080  push.v            self.y
00088  push.v            self.x
00096  call.i            instance_create_depth (4 args)
00104  popz.v.d          
