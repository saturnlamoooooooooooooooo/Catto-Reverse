// gml_Object_obj_LoadingScreen_Alarm_0
// 69 instructions, 340 bytes, 1 locals, 0 arguments

00000  call.i            audio_stop_all (0 args)
00008  popz.v.d          
00012  pushglb.v         global.trueEnded
00020  pushi.i16         1
00024  cmp.i.v           ==
00028  bf                label_56
00032  pushi.i16         36
00036  conv.i.v          
00040  call.i            room_goto (1 args)
00048  popz.v.d          
00052  b                 label_340

label_56:
00056  pushglb.v         global.hellStage
00064  pushi.i16         2
00068  cmp.i.v           ==
00072  bf                label_100
00076  pushi.i16         25
00080  conv.i.v          
00084  call.i            room_goto (1 args)
00092  popz.v.d          
00096  b                 label_340

label_100:
00100  pushglb.v         global.hellStage
00108  pushi.i16         3
00112  cmp.i.v           ==
00116  bf                label_144
00120  pushi.i16         10
00124  conv.i.v          
00128  call.i            room_goto (1 args)
00136  popz.v.d          
00140  b                 label_340

label_144:
00144  pushglb.v         global.hellStage
00152  pushi.i16         4
00156  cmp.i.v           ==
00160  bf                label_188
00164  pushi.i16         44
00168  conv.i.v          
00172  call.i            room_goto (1 args)
00180  popz.v.d          
00184  b                 label_340

label_188:
00188  pushglb.v         global.Level1Passed
00196  pushi.i16         1
00200  cmp.i.v           ==
00204  bf                label_232
00208  pushi.i16         22
00212  conv.i.v          
00216  call.i            room_goto (1 args)
00224  popz.v.d          
00228  b                 label_340

label_232:
00232  pushglb.v         global.Level2Passed
00240  pushi.i16         1
00244  cmp.i.v           ==
00248  bf                label_276
00252  pushi.i16         23
00256  conv.i.v          
00260  call.i            room_goto (1 args)
00268  popz.v.d          
00272  b                 label_340

label_276:
00276  pushglb.v         global.Level3Passed
00284  pushi.i16         1
00288  cmp.i.v           ==
00292  bf                label_320
00296  pushi.i16         40
00300  conv.i.v          
00304  call.i            room_goto (1 args)
00312  popz.v.d          
00316  b                 label_340

label_320:
00320  pushi.i16         30
00324  conv.i.v          
00328  call.i            room_goto (1 args)
00336  popz.v.d          
