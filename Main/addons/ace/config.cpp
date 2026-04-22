#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "AUX_95th_40k_IG_Main_main",
            "ace_main",
            "cba_settings"
        };
        authors[] = {"Turner"};
        VERSION_CONFIG;
    };
};

class ACEX_Fortify_Presets {
	#include "fortifyPresets\Small.hpp"
};

class CfgVehicles {
    class Man;
    class CAManBase: Man {
        class ACE_SelfActions {
            class AUX_95th_SOS_Beacon {
				displayName = "SOS";
				icon = "\z\AUX_95th_40k_IG_Main\addons\ace\data\SOS.paa";
				condition = "(markerType (getPlayerUID _player) == '')";
				statement = "[_player] call AUX_95th_40k_IG_fnc_sosBeacon";
			};

            class AUX_95th_Remove_SOS_Beacon {
				displayName = "Cancel SOS";
				icon = "\z\AUX_95th_40k_IG_Main\addons\ace\data\SOS.paa";
				condition = "(markerType (getPlayerUID _player) != '')";
				statement = "deleteMarker (getPlayerUID _player)";
			};
		};
	};

    class land_dmDefenseLine_1;
    class AUX_95th_land_dmDefenseLine_1: land_dmDefenseLine_1{
        displayName = "Wall (Holes)";
    };

    class land_dmDefenseLine_2;
    class AUX_95th_land_dmDefenseLine_2: land_dmDefenseLine_2{
        displayName = "Wall (Open)";
    };

    class land_dmDefenseLine_3;
    class AUX_95th_land_dmDefenseLine_3: land_dmDefenseLine_3{
        displayName = "Wall (Open/Holes)";
    };

    class land_dmDefenseLine_4;
    class AUX_95th_land_dmDefenseLine_4: land_dmDefenseLine_4{
        displayName = "Wall (Solid)";
    };

    class land_dmDefenseLineDoorway;
    class AUX_95th_land_dmDefenseLineDoorway: land_dmDefenseLineDoorway{
        displayName = "Wall (Doorway)";
    };

    class land_dmDefenseLine_7;
    class AUX_95th_land_dmDefenseLine_7: land_dmDefenseLine_7{
        displayName = "Wall (Angle)";
    };

    class RenegadeListeningPost;
    class AUX_95th_RenegadeListeningPost: RenegadeListeningPost{
        displayName = "Rally Point";
    };

    class land_FIG_SandbagStraight;
    class AUX_95th_land_FIG_SandbagStraight: land_FIG_SandbagStraight{
        displayName = "Sandbag (Straight)";
    };

    class land_FIG_SandbagGunport;
    class AUX_95th_land_land_FIG_SandbagGunport: land_FIG_SandbagGunport{
        displayName = "Sandbag (Gunport)";
    };

    class land_FIG_SandbagCurved;
    class AUX_95th_land_FIG_SandbagCurved: land_FIG_SandbagCurved{
        displayName = "Sandbag (Curved)";
    };

    class Sandbag_Wall_Roof_Short2;
    class AUX_95th_Sandbag_Wall_Roof_Short2: Sandbag_Wall_Roof_Short2{
        displayName = "Walkway";
    };

    class Sandbag_bunker2;
    class AUX_95th_Sandbag_bunker2: Sandbag_bunker2{
        displayName = "Sandbag (Bunker)";
    };
    
    class land_FIG_Bunker1;
    class AUX_95th_land_FIG_Bunker1: land_FIG_Bunker1{
        displayName = "Bunker";
    };
    
    class 3AS_Metal_Trench_Short;
    class AUX_95th_3AS_Metal_Trench_Short: 3AS_Metal_Trench_Short{
        displayName = "Trench";
    };
    
    class 3AS_Metal_Trench_Corner;
    class AUX_95th_3AS_Metal_Trench_Corner: 3AS_Metal_Trench_Corner{
        displayName = "Trench (Corner)";
    };
    
    class 3AS_Metal_Trench_T;
    class AUX_95th_3AS_Metal_Trench_T: 3AS_Metal_Trench_T{
        displayName = "Trench (T)";
    };

};

class CfgFunctions {
    class AUX_95th_40k_IG_Main {
        class Ace {
			file = "\z\AUX_95th_40k_IG_Main\addons\ace\functions";
            class setupFortify {};
            class sosBeacon {};
            class checkVersion {};
        };
    };
};

#include "CfgEventHandlers.hpp"