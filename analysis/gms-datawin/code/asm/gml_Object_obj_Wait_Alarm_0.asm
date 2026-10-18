// gml_Object_obj_Wait_Alarm_0
// 8 instructions, 52 bytes, 1 locals, 0 arguments

00000  push.v            self.workingDir
00008  push.s            "\\readme.txt"
00016  add.s.v           
00020  push.v            self.winDir
00028  push.s            "/notepad.exe"
00036  add.s.v           
00040  call.i            shell_execute (2 args)
00048  popz.v.d          
