// gml_Script_window_command_run
// 0 argument(s), 3 local(s)

wp = argument[0];
if (argument_count > 1)
{
    lp = argument[1];
}
else
{
    lp = 0;
}
return window_command_run_raw(window_handle(), wp, lp);
