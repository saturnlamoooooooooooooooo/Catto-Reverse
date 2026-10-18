// gml_Object_obj_LoadingScreen_Create_0
// 169 instructions, 976 bytes, 1 locals, 0 arguments

00000  call.i            audio_stop_all (0 args)
00008  popz.v.d          
00012  pushi.i16         129
00016  conv.i.v          
00020  push.v            self.depth
00028  push.v            self.y
00036  push.v            self.x
00044  call.i            instance_create_depth (4 args)
00052  popz.v.d          
00056  pushglb.v         global.Level3Passed
00064  pushi.i16         1
00068  cmp.i.v           ==
00072  bf                label_116
00076  pushi.i16         0
00080  conv.i.v          
00084  pushi.i16         1
00088  conv.i.v          
00092  pushi.i16         1
00096  conv.i.v          
00100  call.i            audio_play_sound (3 args)
00108  popz.v.d          
00112  b                 label_232

label_116:
00116  pushglb.v         global.hellStage
00124  pushi.i16         0
00128  cmp.i.v           ==
00132  bf                label_176
00136  pushi.i16         0
00140  conv.i.v          
00144  pushi.i16         1
00148  conv.i.v          
00152  pushi.i16         40
00156  conv.i.v          
00160  call.i            audio_play_sound (3 args)
00168  popz.v.d          
00172  b                 label_232

label_176:
00176  pushglb.v         global.hellStage
00184  pushi.i16         3
00188  cmp.i.v           ==
00192  bf                label_232
00196  pushi.i16         0
00200  conv.i.v          
00204  pushi.i16         1
00208  conv.i.v          
00212  pushi.i16         31
00216  conv.i.v          
00220  call.i            audio_play_sound (3 args)
00228  popz.v.d          

label_232:
00232  pushglb.v         global.trueEnded
00240  pushi.i16         1
00244  cmp.i.v           ==
00248  bf                label_272
00252  push.s            "Hub - Daytime"
00260  pop.v.s           global.levelName
00268  b                 label_528

label_272:
00272  pushglb.v         global.hellStage
00280  pushi.i16         2
00284  cmp.i.v           ==
00288  bf                label_312
00292  push.s            "Level 1 - Spring Hills"
00300  pop.v.s           global.levelName
00308  b                 label_528

label_312:
00312  pushglb.v         global.hellStage
00320  pushi.i16         3
00324  cmp.i.v           ==
00328  bf                label_352
00332  push.s            "Level 1 - "
00340  pop.v.s           global.levelName
00348  b                 label_528

label_352:
00352  pushglb.v         global.hellStage
00360  pushi.i16         4
00364  cmp.i.v           ==
00368  bf                label_392
00372  push.s            "Hub - Nighttime"
00380  pop.v.s           global.levelName
00388  b                 label_528

label_392:
00392  pushglb.v         global.Level1Passed
00400  pushi.i16         1
00404  cmp.i.v           ==
00408  bf                label_432
00412  push.s            "Level 2 - Pyramid Scheme"
00420  pop.v.s           global.levelName
00428  b                 label_528

label_432:
00432  pushglb.v         global.Level2Passed
00440  pushi.i16         1
00444  cmp.i.v           ==
00448  bf                label_472
00452  push.s            "Level 3 - Catto Land"
00460  pop.v.s           global.levelName
00468  b                 label_528

label_472:
00472  pushglb.v         global.Level3Passed
00480  pushi.i16         1
00484  cmp.i.v           ==
00488  bf                label_512
00492  push.s            "Level 666 - DIEDIEDIEDIEDIEDIEDIEDIEDIEDIEDIEDIEDIEDIEDIEDIE"
00500  pop.v.s           global.levelName
00508  b                 label_528

label_512:
00512  push.s            "Level 1 - Mountain Range"
00520  pop.v.s           global.levelName

label_528:
00528  push.s            "Tip: Catto Boi is a good and loyal boi."
00536  pop.v.s           self.message1
00544  push.s            "Tip: Cats have 9 lives."
00552  pop.v.s           self.message2
00560  push.s            "Tip: Where am I?"
00568  pop.v.s           self.message3
00576  push.s            "Tip: If the game crashes, it's not over."
00584  pop.v.s           self.message4
00592  push.s            "Tip: I feel like I'm dreaming..."
00600  pop.v.s           self.message5
00608  push.s            "Tip: Press CTRL to make Catto meow!"
00616  pop.v.s           self.message6
00624  pushglb.v         global.trueEnded
00632  pushi.i16         1
00636  cmp.i.v           ==
00640  bf                label_664
00644  push.s            "No mission for today! You're all done."
00652  pop.v.s           self.mission
00660  b                 label_840

label_664:
00664  pushglb.v         global.hellStage
00672  pushi.i16         4
00676  cmp.i.v           ==
00680  bf                label_704
00684  push.s            "No mission for today yet."
00692  pop.v.s           self.mission
00700  b                 label_840

label_704:
00704  pushglb.v         global.Level3Passed
00712  pushi.i16         1
00716  cmp.i.v           ==
00720  bf                label_744
00724  push.s            "Mission: DIEDIEDIEDIEDIEDIEDIEDIEDIEDIEDIEDIEDIEDIEDIEDIE"
00732  pop.v.s           self.mission
00740  b                 label_840

label_744:
00744  pushglb.v         global.Level2Passed
00752  pushi.i16         1
00756  cmp.i.v           ==
00760  bf                label_784
00764  push.s            "Mission: Why do I keep losing my biscuits?"
00772  pop.v.s           self.mission
00780  b                 label_840

label_784:
00784  pushglb.v         global.Level1Passed
00792  pushi.i16         1
00796  cmp.i.v           ==
00800  bf                label_824
00804  push.s            "Mission: Find Big Boi's friends' biscuits!"
00812  pop.v.s           self.mission
00820  b                 label_840

label_824:
00824  push.s            "Mission: Find Big Boi's biscuits!"
00832  pop.v.s           self.mission

label_840:
00840  pushglb.v         global.Level3Passed
00848  pushi.i16         1
00852  cmp.i.v           ==
00856  bf                label_880
00860  push.s            "Tip: DIEDIEDIEDIEDIEDIEDIEDIEDIEDIEDIEDIEDIEDIEDIEDIE"
00868  pop.v.s           self.chosenMessage
00876  b                 label_944

label_880:
00880  push.v            self.message6
00888  push.v            self.message5
00896  push.v            self.message4
00904  push.v            self.message3
00912  push.v            self.message2
00920  push.v            self.message1
00928  call.i            choose (6 args)
00936  pop.v.v           self.chosenMessage

label_944:
00944  pushi.i16         2552
00948  break             setowner
00952  pushi.i16         200
00956  conv.i.v          
00960  pushi.i16         -1
00964  pushi.i16         0
00968  pop.v.v           alarm [array]
