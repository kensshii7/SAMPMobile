#pragma once

#define MAX_SCRIPT_VARS 16
#define MAX_SCRIPT_SIZE	255

struct GAME_SCRIPT_THREAD
{
	uint8_t Pad1[20];			// +00
	uintptr_t dwScriptIP;		// +20
	uint8_t Pad2[36];			// +24
	uint32_t dwLocalVar[32];	// +60
	uint32_t dwTimers[2];		// +188
	uint8_t Pad3[33];			// +196
	uint8_t condResult;			// +229
	uint8_t Pad4[10];			// +230
	uint16_t logicalOp;			// +240
	uint8_t notFlag;			// +242
	uint8_t Pad5[13];			// +243
	// STRUCT SIZE = 256
};

struct SCRIPT_COMMAND
{
	uint16_t OpCode;
	char Params[MAX_SCRIPT_VARS];
};

int ScriptCommand(const SCRIPT_COMMAND* pScriptCommand, ...);

const SCRIPT_COMMAND create_player						= { 0x0053, "vfffv" };
const SCRIPT_COMMAND create_actor_from_player			= { 0x01F5, "vv" };
const SCRIPT_COMMAND set_camera_behind_player			= { 0x0373, "" };
const SCRIPT_COMMAND restore_camera_jumpcut				= { 0x02EB, "" };
const SCRIPT_COMMAND request_model						= { 0x0247, "i" };
const SCRIPT_COMMAND load_requested_models				= { 0x038B, "" };
const SCRIPT_COMMAND is_model_available					= { 0x0248, "i" };
const SCRIPT_COMMAND set_actor_weapon_droppable 		= { 0x087E, "ii" };
const SCRIPT_COMMAND set_actor_immunities				= { 0x02AB, "iiiiii" };
const SCRIPT_COMMAND set_actor_can_be_decapitated		= { 0x0446, "ii" };
const SCRIPT_COMMAND destroy_object_with_fade			= { 0x09A2, "i" };
const SCRIPT_COMMAND disassociate_object				= { 0x0682, "ifffi" };
const SCRIPT_COMMAND remove_actor_from_car_and_put_at	= { 0x0362, "ifff" };
const SCRIPT_COMMAND set_camera_position				= { 0x015F, "ffffff" };
const SCRIPT_COMMAND point_camera						= { 0x0160, "fffi" };
const SCRIPT_COMMAND put_train_at						= { 0x07C7, "ifff" };
const SCRIPT_COMMAND set_current_time					= { 0x00C0, "ii" };
const SCRIPT_COMMAND toggle_player_controllable 		= { 0x01B4, "ii" };
const SCRIPT_COMMAND lock_actor							= { 0x04D7, "ii" };
const SCRIPT_COMMAND play_sound							= { 0x018C, "fffi" };
const SCRIPT_COMMAND enable_train_traffic				= { 0x06D7, "i" };
const SCRIPT_COMMAND refresh_streaming_at				= { 0x04E4, "ff" };
const SCRIPT_COMMAND restart_if_wasted_at				= { 0x016C, "ffffi" };
const SCRIPT_COMMAND set_actor_z_angle					= { 0x0173, "if" };
const SCRIPT_COMMAND enable_zone_names					= { 0x09BA, "i" };
const SCRIPT_COMMAND link_actor_to_interior				= { 0x0860, "ii" };
const SCRIPT_COMMAND select_interior					= { 0x04BB, "i" };
const SCRIPT_COMMAND restore_camera_to_user				= { 0x0925, "" };
const SCRIPT_COMMAND lock_camera_position				= { 0x0930, "i" };
const SCRIPT_COMMAND get_active_interior				= { 0x077E, "v" };
const SCRIPT_COMMAND request_animation					= { 0x04ED, "s" };
const SCRIPT_COMMAND is_animation_loaded				= { 0x04EE, "s" };
const SCRIPT_COMMAND text_clear_all						= { 0x00BE, "" };
const SCRIPT_COMMAND set_actor_money					= { 0x03FE, "ii" };
const SCRIPT_COMMAND disable_marker						= { 0x0164, "i" };
const SCRIPT_COMMAND create_arrow_above_actor			= { 0x0187, "iv" };
const SCRIPT_COMMAND set_marker_color					= { 0x0165, "ii" };
const SCRIPT_COMMAND show_on_radar2						= { 0x018B, "ii" };
const SCRIPT_COMMAND set_fighting_style					= { 0x07FE, "iii" };
const SCRIPT_COMMAND apply_animation					= { 0x0812, "issfiiiii" };
const SCRIPT_COMMAND get_line_of_sight					= { 0x06BD, "ffffffiiiii" };
const SCRIPT_COMMAND create_explosion_with_radius		= { 0x0948, "fffii" };
const SCRIPT_COMMAND get_ground_z						= { 0x02CE, "fffv" };
const SCRIPT_COMMAND create_radar_marker_icon			= { 0x0570, "fffiv" };
const SCRIPT_COMMAND create_icon_marker_sphere			= { 0x02A7, "fffiv" };
const SCRIPT_COMMAND create_radar_marker_without_sphere	= { 0x04CE, "fffiv" };
const SCRIPT_COMMAND show_on_radar						= { 0x0168, "ii" };
const SCRIPT_COMMAND create_marker_icon 				= { 0x02A8, "fffiv" };
const SCRIPT_COMMAND is_actor_near_point_3d				= { 0x00FE, "iffffffi" };
const SCRIPT_COMMAND create_racing_checkpoint			= { 0x06D5,	"ifffffffv"};
const SCRIPT_COMMAND destroy_racing_checkpoint			= { 0x06D6,	"i" };
const SCRIPT_COMMAND camera_on_actor					= { 0x0159, "iii" };
const SCRIPT_COMMAND camera_on_vehicle					= { 0x0158, "iii" };
const SCRIPT_COMMAND restore_camera						= { 0x015A, "" };
const SCRIPT_COMMAND create_car							= { 0x00A5, "ifffv" };
const SCRIPT_COMMAND set_car_z_angle					= { 0x0175, "if" };
const SCRIPT_COMMAND car_gas_tank_explosion				= { 0x09C4, "ii" };
const SCRIPT_COMMAND set_car_hydraulics					= { 0x07FF,	"ii" };
const SCRIPT_COMMAND toggle_car_tires_vulnerable		= { 0x053F, "ii" };
const SCRIPT_COMMAND link_vehicle_to_interior			= { 0x0840, "ii" };
const SCRIPT_COMMAND destroy_car						= { 0x00A6, "i" };
const SCRIPT_COMMAND destroy_train						= { 0x07BD, "i" };
const SCRIPT_COMMAND put_actor_in_car					= { 0x036A, "ii" };
const SCRIPT_COMMAND put_actor_in_car2					= { 0x0430, "iii" };
const SCRIPT_COMMAND send_actor_to_car_passenger		= { 0x05CA, "iiii" };
const SCRIPT_COMMAND send_actor_to_car_driverseat		= { 0x05CB, "iii" };
const SCRIPT_COMMAND make_actor_leave_car				= { 0x05CD, "ii" };
const SCRIPT_COMMAND set_car_immunities					= { 0x02AC, "iiiiii" };
const SCRIPT_COMMAND add_to_player_money				= { 0x0109, "ii" };
const SCRIPT_COMMAND get_player_money					= { 0x010B, "iv" };
const SCRIPT_COMMAND tie_marker_to_car					= { 0x0161, "iiiv" };
const SCRIPT_COMMAND has_car_sunk						= { 0x02BF, "i" };
const SCRIPT_COMMAND set_camera_pos_time_smooth			= { 0x0936, "ffffffii" };
const SCRIPT_COMMAND point_camera_transverse			= { 0x0920, "ffffffii" };
const SCRIPT_COMMAND create_object						= { 0x0107, "ifffv" };
const SCRIPT_COMMAND put_object_at						= { 0x01BC, "ifff" };
const SCRIPT_COMMAND destroy_object						= { 0x0108, "i" };
const SCRIPT_COMMAND set_object_rotation				= { 0x0453, "ifff" };
const SCRIPT_COMMAND make_object_moveable				= { 0x0392, "ii" };
const SCRIPT_COMMAND move_object						= { 0x034E, "iffffffi" };
const SCRIPT_COMMAND set_object_rotation_z				= { 0x034D, "iffi" };
const SCRIPT_COMMAND create_pickup						= { 0x0213, "iifffv" };
const SCRIPT_COMMAND destroy_pickup						= { 0x0215, "i" };
const SCRIPT_COMMAND is_pickup_picked_up				= { 0x0214, "i" };
const SCRIPT_COMMAND turn_off_car_engine				= { 0x02D4,	"i" };
const SCRIPT_COMMAND turn_on_car_engine					= { 0x0ABE,	"i" };
const SCRIPT_COMMAND set_car_engine_on 					= { 0x0918, "ii" };
const SCRIPT_COMMAND force_car_lights 					= { 0x067F, "ii" };
const SCRIPT_COMMAND attach_object_to_actor				= { 0x069B, "iiffffff" };
const SCRIPT_COMMAND set_actor_armed_weapon				= { 0x01B9, "ii" };
const SCRIPT_COMMAND get_actor_armed_weapon				= { 0x0470, "iv" };
const SCRIPT_COMMAND set_auto_aiming					= { 0x0568, "ii" };
const SCRIPT_COMMAND kill_actor							= { 0x0321, "i" };
const SCRIPT_COMMAND set_object_scale					= { 0x08D2, "if" };
const SCRIPT_COMMAND attach_object_to_object			= { 0x069A, "iiffffff" };
const SCRIPT_COMMAND attach_object_to_vehicle			= { 0x0681, "iiffffff" };
const SCRIPT_COMMAND put_trailer_on_cab					= { 0x0893, "ii" };
const SCRIPT_COMMAND detach_trailer_from_cab			= { 0x07AC, "ii" };
const SCRIPT_COMMAND is_trailer_on_cab					= { 0x07AB, "ii" };
const SCRIPT_COMMAND change_car_skin					= { 0x06ED,	"ii" };
const SCRIPT_COMMAND set_car_numberplate				= { 0x0674, "is" };

const SCRIPT_COMMAND swap_nearest_building_model		= { 0x03B6, "ffffii"};
const SCRIPT_COMMAND create_static_object				= { 0x0363, "ffffii" };

const SCRIPT_COMMAND request_car_component				= { 0x06E9, "i" };
const SCRIPT_COMMAND is_component_available				= { 0x06EA, "i" };
const SCRIPT_COMMAND add_car_component					= { 0x06E7, "iiv" };

const SCRIPT_COMMAND open_car_component					= { 0x0657, "ii" };
const SCRIPT_COMMAND set_car_component_rotate			= { 0x08A6, "iif" };

const SCRIPT_COMMAND door_damage						= { 0x0730, "vi" };
const SCRIPT_COMMAND repair_damage						= { 0x054F, "v" };

const SCRIPT_COMMAND create_actor						= { 0x009A, "iifffv" };
const SCRIPT_COMMAND destroy_actor						= { 0x009B, "i" };

const SCRIPT_COMMAND set_everyone_ignore_player			= { 0x03BF, "ii" };

const SCRIPT_COMMAND set_player_drunk_visuals			= { 0x052c, "ii" };
const SCRIPT_COMMAND handling_responsiveness			= { 0x03fd, "ii" };

const SCRIPT_COMMAND toggle_widescreen					= { 0x02A3, "i" };

const SCRIPT_COMMAND remove_panel						= { 0x08DA, "i" };
const SCRIPT_COMMAND create_panel						= { 0x08D4, "sfffiiiiv" };
const SCRIPT_COMMAND set_panel_column_data				= { 0x08DB, "iisssssssssssss" };
const SCRIPT_COMMAND set_panel_column_width				= { 0x09DB, "iii" };
const SCRIPT_COMMAND set_panel_row_enable				= { 0x08D9, "iii" };
const SCRIPT_COMMAND get_panel_selected_row				= { 0x08D8, "iv" };
const SCRIPT_COMMAND get_panel_active_row				= { 0x08D7, "iv" };
const SCRIPT_COMMAND set_active_menu_item				= { 0x090E, "ii" };