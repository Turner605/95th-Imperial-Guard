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

    class land_dmDefenseLine_4;
    class AUX_95th_land_dmDefenseLine_4: land_dmDefenseLine_4{
        displayName = "Wall (Solid)";
    };

    class ListeningPost;
    class AUX_95th_ListeningPost: ListeningPost{
        displayName = "Rally Point";
    };

    class Sandbag_Wall_Short1;
    class AUX_95th_Sandbag_Wall_Short1: Sandbag_Wall_Short1{
        displayName = "Sandbag (Short)";
    };

    class Sandbag_Wall_Roof_Short2;
    class AUX_95th_Sandbag_Wall_Roof_Short2: Sandbag_Wall_Roof_Short2{
        displayName = "Walkway";
    };

    class Sandbag_bunker2;
    class AUX_95th_Sandbag_bunker2: Sandbag_bunker2{
        displayName = "Sandbag (Bunker)";
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