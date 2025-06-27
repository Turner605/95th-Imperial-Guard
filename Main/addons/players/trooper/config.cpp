#include "script_component.hpp"

class CfgPatches {
    class DOUBLES(PREFIX,COMPONENT) {
        name = COMPONENT_NAME;
        units[] = {
            QUOTE(DOUBLES(AUX_95th_Unit_Unarmoured,PLAYER_NAME)),
            QUOTE(DOUBLES(AUX_95th_Unit_Unarmoured_Rolled,PLAYER_NAME)),
            QUOTE(DOUBLES(AUX_95th_Unit_Light,PLAYER_NAME)),
            QUOTE(DOUBLES(AUX_95th_Unit_Light_Rolled,PLAYER_NAME)),
            QUOTE(DOUBLES(AUX_95th_Unit_Medium,PLAYER_NAME)),
            QUOTE(DOUBLES(AUX_95th_Unit_Medium_Rolled,PLAYER_NAME)),
            QUOTE(DOUBLES(AUX_95th_Unit_Heavy,PLAYER_NAME)),
            QUOTE(DOUBLES(AUX_95th_Unit_NCO,PLAYER_NAME))
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"AUX_95th_40k_IG_Main_players_shared"};
        authors[] = {"Turner"};
        VERSION_CONFIG;
    };
};

class CfgWeapons {
    class ItemCore;
    class UniformItem;
    // class ItemInfo;
    class VestItem;

    #include "\z\AUX_95th_40k_IG_Main\addons\players\shared\helmets.hpp"
    #include "\z\AUX_95th_40k_IG_Main\addons\players\shared\uniforms.hpp"
    #include "\z\AUX_95th_40k_IG_Main\addons\players\shared\vests.hpp"
};

class CfgVehicles {
    #include "\z\AUX_95th_40k_IG_Main\addons\players\shared\units.hpp"
    #include "\z\AUX_95th_40k_IG_Main\addons\players\shared\backpacks.hpp"
};

#include "CfgEventHandlers.hpp"