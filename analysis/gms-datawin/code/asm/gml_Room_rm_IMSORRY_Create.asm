// gml_Room_rm_IMSORRY_Create
// 19 instructions, 120 bytes, 1 locals, 0 arguments

00000  push.s            "nosound"
00008  pop.v.s           global.RoomID
00016  pushi.i16         1
00020  pop.v.i           global.Level
00028  pushi.i16         1
00032  pop.v.i           global.noMenu
00040  pushi.i16         1
00044  conv.i.v          
00048  call.i            gml_Script_scr_writeFakeEnd (1 args)
00056  popz.v.d          
00060  push.s            "windir"
00068  conv.s.v          
00072  call.i            environment_get_variable (1 args)
00080  pop.v.v           self.winDir
00088  push.v            self.winDir
00096  push.s            "\\temp\\catto.cma"
00104  add.s.v           
00108  call.i            file_delete (1 args)
00116  popz.v.d          
