// gml_Object_obj_test_Create_0
// 27 instructions, 160 bytes, 2 locals, 0 arguments

00000  pushbltn.v        self.game_save_id
00008  pop.v.v           self.game_save_path
00016  push.v            self.game_save_path
00024  call.i            string_length (1 args)
00032  push.v            self.game_save_path
00040  call.i            string_char_at (2 args)
00048  dup.v.d           0
00052  push.s            "/"
00060  cmp.s.v           ==
00064  bt                label_96
00068  dup.v.d           0
00072  push.s            "\\"
00080  cmp.s.v           ==
00084  bt                label_96
00088  b                 label_156
00092  b                 label_156

label_96:
00096  push.v            self.game_save_path
00104  call.i            string_length (1 args)
00112  pushi.i16         1
00116  sub.i.v           
00120  pushi.i16         1
00124  conv.i.v          
00128  push.v            self.game_save_path
00136  call.i            string_copy (3 args)
00144  pop.v.v           self.game_save_path
00152  b                 label_156

label_156:
00156  popz.v.d          
