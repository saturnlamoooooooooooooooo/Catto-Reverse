// ===== object obj_MouseFuck  sprite#=-1 parent=-100 depth=0 solid=False visible=True persistent=False
  -- event Create / 0
    // action: Execute Code (applies_to=self)
    window_set_visible(false)
    sound_play(snd_ReverseTitle)
    alarm[0]=1200
    
  -- event Alarm / Alarm 0
    // action: Execute Code (applies_to=self)
    game_end()
    
  -- event Step / Step
    // action: Execute Code (applies_to=self)
    display_mouse_set(random(2000),500)
    

