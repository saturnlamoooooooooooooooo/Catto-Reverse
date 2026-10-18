// gml_Object_obj_Time_Create_0
// 87 instructions, 504 bytes, 1 locals, 0 arguments

00000  pushi.i16         -100
00004  pop.v.i           self.depth
00012  push.s            ""
00020  pop.v.s           self.month
00028  pushbltn.v        self.current_month
00036  pushi.i16         1
00040  cmp.i.v           ==
00044  bf                label_68
00048  push.s            "January"
00056  pop.v.s           self.month
00064  b                 label_504

label_68:
00068  pushbltn.v        self.current_month
00076  pushi.i16         2
00080  cmp.i.v           ==
00084  bf                label_108
00088  push.s            "February"
00096  pop.v.s           self.month
00104  b                 label_504

label_108:
00108  pushbltn.v        self.current_month
00116  pushi.i16         3
00120  cmp.i.v           ==
00124  bf                label_148
00128  push.s            "March"
00136  pop.v.s           self.month
00144  b                 label_504

label_148:
00148  pushbltn.v        self.current_month
00156  pushi.i16         4
00160  cmp.i.v           ==
00164  bf                label_188
00168  push.s            "April"
00176  pop.v.s           self.month
00184  b                 label_504

label_188:
00188  pushbltn.v        self.current_month
00196  pushi.i16         5
00200  cmp.i.v           ==
00204  bf                label_228
00208  push.s            "May"
00216  pop.v.s           self.month
00224  b                 label_504

label_228:
00228  pushbltn.v        self.current_month
00236  pushi.i16         6
00240  cmp.i.v           ==
00244  bf                label_268
00248  push.s            "June"
00256  pop.v.s           self.month
00264  b                 label_504

label_268:
00268  pushbltn.v        self.current_month
00276  pushi.i16         7
00280  cmp.i.v           ==
00284  bf                label_308
00288  push.s            "July"
00296  pop.v.s           self.month
00304  b                 label_504

label_308:
00308  pushbltn.v        self.current_month
00316  pushi.i16         8
00320  cmp.i.v           ==
00324  bf                label_348
00328  push.s            "August"
00336  pop.v.s           self.month
00344  b                 label_504

label_348:
00348  pushbltn.v        self.current_month
00356  pushi.i16         9
00360  cmp.i.v           ==
00364  bf                label_388
00368  push.s            "September"
00376  pop.v.s           self.month
00384  b                 label_504

label_388:
00388  pushbltn.v        self.current_month
00396  pushi.i16         10
00400  cmp.i.v           ==
00404  bf                label_428
00408  push.s            "October"
00416  pop.v.s           self.month
00424  b                 label_504

label_428:
00428  pushbltn.v        self.current_month
00436  pushi.i16         11
00440  cmp.i.v           ==
00444  bf                label_468
00448  push.s            "November"
00456  pop.v.s           self.month
00464  b                 label_504

label_468:
00468  pushbltn.v        self.current_month
00476  pushi.i16         12
00480  cmp.i.v           ==
00484  bf                label_504
00488  push.s            "December"
00496  pop.v.s           self.month
