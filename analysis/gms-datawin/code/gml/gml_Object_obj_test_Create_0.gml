// gml_Object_obj_test_Create_0
// 0 argument(s), 2 local(s)

game_save_path = game_save_id;
switch (string_char_at(game_save_path, string_length(game_save_path)))
{
    case "/":
    case "\\":
    case "/":
    case "\\":
        game_save_path = string_copy(game_save_path, 1, string_length(game_save_path) - 1);
        break;
}
