// gml_Object_obj_AfterNug2_Alarm_1
// 40 instructions, 236 bytes, 1 locals, 0 arguments

00000  push.s            "feel familiar to you?"
00008  conv.s.v          
00012  call.i            show_message (1 args)
00020  popz.v.d          
00024  push.s            "I know it's familiar to me"
00032  conv.s.v          
00036  call.i            show_message (1 args)
00044  popz.v.d          
00048  push.s            "find me.txt"
00056  conv.s.v          
00060  push.s            "there is a file hidden within your C: drive that contains a piece of code \nthis code is needed to finish what you've started \nas I said, there is no rush, take all the time you need \nand don't ask for help unless it's really necessary"
00068  conv.s.v          
00072  call.i            gml_Script_scr_writeTextFile (2 args)
00080  popz.v.d          
00084  push.s            "C:\\XYZ123\\HELLO"
00092  conv.s.v          
00096  push.s            "WELL DONE.txt"
00104  conv.s.v          
00108  push.s            "64 65 61 64"
00116  conv.s.v          
00120  call.i            gml_Script_scr_writeTextToDir (3 args)
00128  popz.v.d          
00132  push.s            "look at your desktop, I dropped another little text file for you"
00140  conv.s.v          
00144  call.i            show_message (1 args)
00152  popz.v.d          
00156  push.s            "this time you're on your own - take your time, there is no rush"
00164  conv.s.v          
00168  call.i            show_message (1 args)
00176  popz.v.d          
00180  push.s            "once you're done, come back and we'll make further arrangements on how this should end"
00188  conv.s.v          
00192  call.i            show_message (1 args)
00200  popz.v.d          
00204  pushi.i16         4
00208  conv.i.v          
00212  call.i            gml_Script_scr_writeHellStage (1 args)
00220  popz.v.d          
00224  call.i            gml_Script_scr_ExitGame (0 args)
00232  popz.v.d          
