// gml_Object_obj_PlayerControl_Step_0
// 0 argument(s), 2 local(s)

keyup = keyboard_check_pressed(38);
keyreleaseup = keyboard_check_released(38);
keyleft = keyboard_check(37);
keyright = keyboard_check(39);
keyenter = keyboard_check_pressed(13);
keyaction = keyboard_check_pressed(17);
scr_Camera();
scr_Parallax();
if (keyenter)
{
    if (global.canMove == 1)
    {
        if (global.noMenu == 0)
        {
            instance_deactivate_all(0);
            audio_pause_all();
            instance_create_depth(0, 0, depth, 137);
        }
    }
}
if (global.canMove == 1)
{
    move = -keyleft + keyright;
    if (keyleft)
    {
        direction = 180;
    }
    if (keyright)
    {
        direction = 0;
    }
    if (move != 0)
    {
        hsp = move * movespeed;
    }
    else
    {
        hsp *= 0.82;
    }
    if (vsp < 15)
    {
        vsp += grav;
    }
    if (place_meeting(x, y + 1, 106))
    {
        vsp = keyup * -jumpspeed;
    }
    if (keyup && !place_free(x, y + 1))
    {
        audio_play_sound(soundJump, 2, 0);
    }
    if (keyreleaseup)
    {
        if (vsp < 0)
        {
            vsp /= 3;
        }
    }
    if (place_meeting(x + hsp, y, 106))
    {
        while (!place_meeting(x + sign(hsp), y, 106))
        {
            x += sign(hsp);
        }
        hsp = 0;
    }
    x += hsp;
    if (place_meeting(x, y + vsp, 106))
    {
        while (!place_meeting(x, y + sign(vsp), 106))
        {
            y += sign(vsp);
        }
        vsp = 0;
    }
    y += vsp;
    if (!place_free(x, y + 1))
    {
        if (hsp >= 1)
        {
            sprite_index = spriteRun;
            image_xscale = 1;
            image_speed = hsp / 8;
        }
        else
        {
            if (hsp <= -1)
            {
                sprite_index = spriteRun;
                image_xscale = -1;
                image_speed = hsp / -8;
            }
            else
            {
                if (hsp <= 0.1 || hsp >= -0.1)
                {
                    if (direction == 0)
                    {
                        sprite_index = spriteStand;
                        image_xscale = 1;
                        image_speed = 1;
                    }
                    else
                    {
                        if (direction == 180)
                        {
                            sprite_index = spriteStand;
                            image_xscale = -1;
                            image_speed = -1;
                        }
                    }
                }
            }
        }
    }
    else
    {
        if (place_free(x, y + 1))
        {
            if (hsp >= 1)
            {
                sprite_index = spriteJump;
                image_xscale = 1;
                image_speed = 1;
            }
            else
            {
                if (hsp <= -1)
                {
                    sprite_index = spriteJump;
                    image_xscale = -1;
                    image_speed = -1;
                }
                else
                {
                    if (hsp <= 0.1 || hsp >= -0.1)
                    {
                        sprite_index = spriteJump;
                        image_speed = 1;
                    }
                }
            }
        }
    }
}
else
{
    hsp = 0;
    if (place_free(x, y + 1))
    {
        sprite_index = spriteJump;
    }
    else
    {
        sprite_index = spriteStand;
    }
}
if (keyaction && actionPerform == 0)
{
    if (global.Level3Passed == 0 && global.hellStage < 1)
    {
        global.canMove = 0;
        audio_pause_all();
        audio_play_sound(actionSound, 1, 0);
        actionPerform = 1;
        alarm[0] = actionAudioDuration;
        if (!place_free(x, y + 1))
        {
            if (direction == 0)
            {
                sprite_index = spriteAction;
                image_index = 0;
                image_xscale = 1;
                image_speed = 1;
            }
            else
            {
                if (direction == 180)
                {
                    sprite_index = spriteAction;
                    image_index = 0;
                    image_xscale = -1;
                    image_speed = -1;
                }
            }
        }
        else
        {
            if (place_free(x, y + 1))
            {
                if (direction == 0)
                {
                    sprite_index = spriteAction2;
                    image_index = 0;
                    image_xscale = 1;
                    image_speed = 1;
                }
                else
                {
                    if (direction == 180)
                    {
                        sprite_index = spriteAction2;
                        image_index = 0;
                        image_xscale = -1;
                        image_speed = -1;
                    }
                }
            }
        }
    }
}
else
{
}
