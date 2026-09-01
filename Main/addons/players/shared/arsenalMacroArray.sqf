#include "script_component.hpp"

private _playername = QUOTE(PLAYER_NAME);

private _macroArray = [
    ["AUX_95th_40k_IG_Helmet_", HELMET_BASIC],
    ["AUX_95th_40k_IG_Helmet_GD_", HELMET_BASIC],
    ["AUX_95th_40k_IG_Helmet_GU_", HELMET_BASIC],
    
    ["AUX_95th_40k_IG_Helmet_Mask_Visor_", HELMET_MASK],
    ["AUX_95th_40k_IG_Helmet_Mask_", HELMET_MASK],

    ["AUX_95th_40k_IG_Patrol_Cap_", PATROL_CAP],
    ["AUX_95th_40k_IG_Tanker_Cap_", TANKER_HEADWEAR],
    ["AUX_95th_40k_IG_Tanker_Helmet_", TANKER_HEADWEAR],

    ["AUX_95th_40k_IG_Pilot_Helmet_", PILOT_HEADWEAR],

    ["AUX_95th_40k_IG_NCO_Cap_", NCO_CAP],
    ["AUX_95th_40k_IG_Officer_Cap_", OFFICER_CAP],
    
    ["AUX_95th_40k_IG_Booniehat_", BOONIE_HAT],
    ["AUX_95th_40k_IG_Booniehat_Headset_", BOONIE_HAT],



    ["AUX_95th_Uniform_Unarmoured_", UNIFORM_BASIC],
    ["AUX_95th_Uniform_Unarmoured_Rolled_", UNIFORM_BASIC],
    ["AUX_95th_Uniform_Light_", UNIFORM_BASIC],
    ["AUX_95th_Uniform_Light_Rolled_", UNIFORM_BASIC],
    ["AUX_95th_Uniform_Medium_", UNIFORM_BASIC],
    ["AUX_95th_Uniform_Medium_Rolled_", UNIFORM_BASIC],
    ["AUX_95th_Uniform_Heavy_", UNIFORM_BASIC],

    ["AUX_95th_Uniform_NCO_", UNIFORM_NCO],



    ["AUX_95th_Backpack_Invisible_", BACKPACK_INVISIBLE],

    ["AUX_95th_Backpack_Light_", BACKPACK_LIGHT],
    ["AUX_95th_Backpack_Light_Two_", BACKPACK_LIGHT],
    ["AUX_95th_Backpack_Light_Three_", BACKPACK_LIGHT],
    ["AUX_95th_Backpack_Light_Four_", BACKPACK_LIGHT],
    ["AUX_95th_Backpack_Light_Five_", BACKPACK_LIGHT],
    ["AUX_95th_Backpack_Light_Six_", BACKPACK_LIGHT],

    ["AUX_95th_Backpack_Standard_One_", BACKPACK_STANDARD],
    ["AUX_95th_Backpack_Standard_Two_", BACKPACK_STANDARD],
    ["AUX_95th_Backpack_Standard_Three_", BACKPACK_STANDARD],
    ["AUX_95th_Backpack_Standard_Four_", BACKPACK_STANDARD],
    ["AUX_95th_Backpack_Standard_Five_", BACKPACK_STANDARD],
    ["AUX_95th_Backpack_Standard_Six_", BACKPACK_STANDARD],

    ["AUX_95th_Backpack_Medic_", BACKPACK_MEDIC],

    ["AUX_95th_Backpack_Heavy_", BACKPACK_HEAVY],
    ["AUX_95th_Backpack_Heavy_Two_", BACKPACK_HEAVY],

    ["AUX_95th_Backpack_Power_One_", BACKPACK_POWER],
    ["AUX_95th_Backpack_Power_Two_", BACKPACK_POWER],

    ["AUX_95th_Backpack_Chest_One_", BACKPACK_CHEST],
    ["AUX_95th_Backpack_Chest_Two_", BACKPACK_CHEST],

    ["AUX_95th_Backpack_RTO_", BACKPACK_RTO],



    ["AUX_95th_Vest_Light_One_", VEST_LIGHT_SET],
    ["AUX_95th_Vest_Light_Two_", VEST_LIGHT_SET],
    ["AUX_95th_Vest_Light_Three_", VEST_LIGHT_SET],
    ["AUX_95th_Vest_Light_Four_", VEST_LIGHT_SET],

    ["AUX_95th_Vest_Medium_One_", VEST_MEDIUM_SET],
    ["AUX_95th_Vest_Medium_Two_", VEST_MEDIUM_SET],
    ["AUX_95th_Vest_Medium_Three_", VEST_MEDIUM_SET],
    ["AUX_95th_Vest_Medium_Four_", VEST_MEDIUM_SET],

    ["AUX_95th_Vest_Heavy_One_", VEST_HEAVY_SET],
    ["AUX_95th_Vest_Heavy_Two_", VEST_HEAVY_SET]
];

[_playername, _macroArray] call AUX_95TH_40K_IG_MAIN_fnc_addPlayerGearToArsenal;