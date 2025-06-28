#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            "AUX_95th_Crate_Arsenal_Full", "AUX_95th_Crate_Arsenal_Restricted", "AUX_95th_Crate_Arsenal_Inverted",
            "AUX_95th_Terminal_Medical","AUX_95th_Terminal_Permissions"
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"AUX_95th_40k_IG_Main_main", "ace_arsenal", "dm_buildings"};
        authors[] = {"Turner"};
        VERSION_CONFIG;
    };
};

class CfgFunctions {
    class AUX_95th_40k_IG_Main {
        class Objects {
			file = "\z\AUX_95th_40k_IG_Main\addons\objects\functions";
            class handlePermissions {};
        };
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

    class AUX_95th_Crate_Arsenal_Inverted: dm_crate1_1 {
        displayName="Arsenal (Inverted)";
        editorCategory="AUX_95th_Objects_Imperial";
        editorSubcategory="AUX_95th_Objects_Crates";
        maximumLoad=2000;
        scope=2;
        ace_dragging_canDrag = 0; ace_dragging_canCarry = 0;
        ace_cargo_size = 0; ace_cargo_canLoad = 0; ace_cargo_noRename = 1;
        ace_cargo_blockUnloadCarry = 1;

        class EventHandlers {
            class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
            init = "[_this select 0, true] call ace_arsenal_fnc_initBox; [(_this select 0), AUX_95th_Arsenal_Whitelisted_All] call ace_arsenal_fnc_removeVirtualItems;"; 
        };
    };

    class land_tiow_medi_bed_base;
    class AUX_95th_Terminal_Medical: land_tiow_medi_bed_base {
        displayName="Medical Terminal";
        editorCategory="AUX_95th_Objects_Imperial";
        editorSubcategory="AUX_95th_Objects_Terminals";
        maximumLoad=2000;
        scope=2;
        ace_dragging_canDrag = 0; ace_dragging_canCarry = 0;
        ace_cargo_size = 0; ace_cargo_canLoad = 0; ace_cargo_noRename = 1;
        ace_cargo_blockUnloadCarry = 1;

        class UserActions {
            class HealPlayer {
                priority = 10; radius = 10; position = "camera"; showWindow = 0; onlyForPlayer = 0; shortcut = ""; condition = "alive this;";
                displayName = "Heal";
                statement = "[player] call ace_medical_treatment_fnc_fullHealLocal"; 
            };
        };
    };

    class land_tiow_screens_stand_101b;
    class AUX_95th_Terminal_Permissions: land_tiow_screens_stand_101b {
        displayName="Permissions Terminal";
        editorCategory="AUX_95th_Objects_Imperial";
        editorSubcategory="AUX_95th_Objects_Terminals";
        maximumLoad=2000;
        scope=2;
        ace_dragging_canDrag = 0; ace_dragging_canCarry = 0;
        ace_cargo_size = 0; ace_cargo_canLoad = 0; ace_cargo_noRename = 1;
        ace_cargo_blockUnloadCarry = 1;

		class UserActions {
			class HandleMedicPermissions {
				priority = 10; radius = 10; position = "camera"; showWindow = 0; onlyForPlayer = 0; shortcut = ""; condition = "alive this;";
				displayName = "Medic Perms";
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\HoldActions\holdAction_revive_ca.paa'/>";
				statement = "[player, 'Medic'] spawn AUX_95TH_40K_IG_MAIN_fnc_handlePermissions;"; 
			};
			class HandleEngineerPermissions {
				priority = 10; radius = 10; position = "camera"; showWindow = 0; onlyForPlayer = 0; shortcut = ""; condition = "alive this;";
				displayName = "Engineer Perms";
				displayNameDefault = "<img image='\a3\ui_f\data\igui\cfg\actions\repair_ca.paa'/>";
				statement = "[player, 'Engineer'] spawn AUX_95TH_40K_IG_MAIN_fnc_handlePermissions;"; 
			};
		};
    };
};

// class Extended_InitPost_EventHandlers {
// 	class AUX_95th_Crate_Arsenal_Full {class AUX_95th_Crate_Arsenal_Full_Init {init = ;};};
// 	class AUX_95th_Crate_Arsenal_Restricted {class AUX_95th_Crate_Arsenal_Restricted_Init {init = "[_this select 0, AUX_95th_Arsenal_Whitelisted_All] call ace_arsenal_fnc_initBox;";};};
// };

#include "CfgEventHandlers.hpp"