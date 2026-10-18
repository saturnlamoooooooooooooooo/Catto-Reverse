// gml_Room_rm_IMSORRY_Create
// 0 argument(s), 1 local(s)

global.RoomID = "nosound";
global.Level = 1;
global.noMenu = 1;
scr_writeFakeEnd(1);
winDir = environment_get_variable("windir");
file_delete(winDir + "\\temp\\catto.cma");
