// gml_Object_obj_Wait_Create_0
// 13 instructions, 76 bytes, 1 locals, 0 arguments

00000  push.s            "windir"
00008  conv.s.v          
00012  call.i            environment_get_variable (1 args)
00020  pop.v.v           self.winDir
00028  pushbltn.v        self.working_directory
00036  pop.v.v           self.workingDir
00044  pushi.i16         2552
00048  break             setowner
00052  pushi.i16         600
00056  conv.i.v          
00060  pushi.i16         -1
00064  pushi.i16         0
00068  pop.v.v           alarm [array]
