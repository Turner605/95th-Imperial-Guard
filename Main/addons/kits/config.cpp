#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"AUX_95th_40k_IG_Main_main", "ace_arsenal"};
        authors[] = {"Turner"};
        VERSION_CONFIG;
    };
};

class CfgFunctions {
    class AUX_95th_40k_IG_Main {
        class Kits {
			file = "\z\AUX_95th_40k_IG_Main\addons\kits\functions";
            class addDefaultClasses {};
            class constructRestrictedArsenal {};
        };
    };
};

#include "CfgEventHandlers.hpp"