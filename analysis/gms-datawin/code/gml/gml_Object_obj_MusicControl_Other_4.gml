// gml_Object_obj_MusicControl_Other_4
// 0 argument(s), 1 local(s)

switch (global.RoomID)
{
    case "title":
        audio_stop_all();
        audio_play_sound(19, 1, 0);
    case "titleFUCKED":
        audio_stop_all();
        audio_play_sound(2, 1, 0);
    case "catto1title":
        audio_stop_all();
        audio_play_sound(18, 1, 0);
    case "catto1":
        audio_stop_all();
        audio_play_sound(11, 1, 0);
    case "catto2title":
        audio_stop_all();
        audio_play_sound(5, 1, 0);
    case "catto2":
        audio_stop_all();
        audio_play_sound(15, 1, 0);
    case 1:
        audio_stop_all();
        audio_play_sound(24, 1, 1);
    case "hub":
        audio_stop_all();
        audio_play_sound(39, 1, 1);
    case "hubDay":
        audio_stop_all();
        audio_play_sound(12, 1, 1);
    case 666:
        audio_stop_all();
        audio_play_sound(1, 1, 1);
    case 616:
        audio_stop_all();
        audio_play_sound(14, 1, 1);
    case 333:
        audio_stop_all();
        audio_play_sound(16, 1, 1);
    case "debug":
        audio_stop_all();
        audio_play_sound(0, 1, 1);
    case "nosound":
        audio_stop_all();
    default:
        audio_stop_all();
        audio_play_sound(17, 1, 1);
}
