// gml_Object_obj_CattoBoiDead_Alarm_0
// 18 instructions, 112 bytes, 1 locals, 0 arguments

00000  call.i            audio_resume_all (0 args)
00008  popz.v.d          
00012  pushi.i16         1
00016  pop.v.i           global.canMove
00024  pushi.i16         0
00028  pop.v.i           self.actionPerform
00036  push.v            self.y
00044  pushi.i16         1
00048  add.i.v           
00052  push.v            self.x
00060  call.i            place_free (2 args)
00068  conv.v.b          
00072  bf                label_96
00076  push.v            self.spriteJump
00084  pop.v.v           self.sprite_index
00092  b                 label_112

label_96:
00096  push.v            self.spriteStand
00104  pop.v.v           self.sprite_index
