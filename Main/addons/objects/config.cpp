#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {"AUX_95th_Crate_Arsenal_Full", "AUX_95th_Crate_Arsenal_Restricted"};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"AUX_95th_40k_IG_Main_main", "ace_arsenal", "dm_buildings"};
        authors[] = {"Turner"};
        VERSION_CONFIG;
    };
};

class CfgEditorCategories{
	class AUX_95th_Objects_Imperial{displayName = "[95th] Imperial Guard";};
};

class CfgEditorSubcategories{
	class AUX_95th_Objects_Crates{displayName="Crates";};
	class AUX_95th_Objects_Terminals{displayName="Terminals";};
	class AUX_95th_Objects_Misc{displayName="Misc";};
	class AUX_95th_Objects_Fortify{displayName="Fortify";};
};

class CBA_Extended_EventHandlers_base;

class CfgVehicles {
    class dm_crate1_1;

    class AUX_95th_Crate_Arsenal_Full: dm_crate1_1 {
        displayName="Arsenal (Full)";
        editorCategory="AUX_95th_Objects_Imperial";
        editorSubcategory="AUX_95th_Objects_Crates";
        maximumLoad=2000;
        scope=2;
        ace_dragging_canDrag = 0; ace_dragging_canCarry = 0;
        ace_cargo_size = 0; ace_cargo_canLoad = 0; ace_cargo_noRename = 1;
        ace_cargo_blockUnloadCarry = 1;

        class EventHandlers {
            class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
            init = "[_this select 0, true] call ace_arsenal_fnc_initBox;"; 
        };
    };

    class AUX_95th_Crate_Arsenal_Restricted: dm_crate1_1 {
        displayName="Arsenal (Restricted)";
        editorCategory="AUX_95th_Objects_Imperial";
        editorSubcategory="AUX_95th_Objects_Crates";
        maximumLoad=2000;
        scope=2;
        ace_dragging_canDrag = 0; ace_dragging_canCarry = 0;
        ace_cargo_size = 0; ace_cargo_canLoad = 0; ace_cargo_noRename = 1;
        ace_cargo_blockUnloadCarry = 1;

        class EventHandlers {
            class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
            init = "[_this select 0, AUX_95th_Arsenal_Whitelisted_All] call ace_arsenal_fnc_initBox;"; 
        };
    };
};

// class Extended_InitPost_EventHandlers {
// 	class AUX_95th_Crate_Arsenal_Full {class AUX_95th_Crate_Arsenal_Full_Init {init = ;};};
// 	class AUX_95th_Crate_Arsenal_Restricted {class AUX_95th_Crate_Arsenal_Restricted_Init {init = "[_this select 0, AUX_95th_Arsenal_Whitelisted_All] call ace_arsenal_fnc_initBox;";};};
// };

#include "CfgEventHandlers.hpp"