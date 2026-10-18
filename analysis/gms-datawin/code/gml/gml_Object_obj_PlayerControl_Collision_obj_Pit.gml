// gml_Object_obj_PlayerControl_Collision_obj_Pit
// 0 argument(s), 1 local(s)

hsp = 0;
instance_deactivate_object(self);
instance_create_depth(x, y, depth, playerDeath);
