#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "AUX_95th_40k_IG_Main_main",
            "A3_Structures_F_Mil_Flags",
            "Extended_EventHandlers",
            "WBK_MeleeMechanics",
            "CadianFlag"
        };
        authors[] = {"Turner"};
        VERSION_CONFIG;
    };
};

class CfgWeapons {
    class Cadian_Banner_Weapon;
    class Cadian_95th_Banner_Weapon: Cadian_Banner_Weapon {
		displayName = "[Banner] 95th Cadian";
		baseWeapon = "Cadian_95th_Banner_Weapon";
		picture = "z\AUX_95th_40k_IG_Main\addons\weapons\data\Flag_95th.paa";
		editorPreview = "z\AUX_95th_40k_IG_Main\addons\weapons\data\Flag_95th.paa";
		model = "";
		flagClassName = "Cadian_95th_flag";
	};
};

class CfgVehicles {
    class Cadian_Flag;
    class Cadian_95th_flag: Cadian_Flag {
		displayName = "[95th Cadian] Static Banner";
		picture = "z\AUX_95th_40k_IG_Main\addons\weapons\data\Flag_95th.paa";
		editorPreview = "z\AUX_95th_40k_IG_Main\addons\weapons\data\Flag_95th.paa";
		proxyFlagClassName = "Cadian_95th_flag";
		hiddenSelections[] = {"Camo_1"};
		hiddenSelectionsTextures[] = {"z\AUX_95th_40k_IG_Main\addons\weapons\data\Flag_95th.paa"};
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture 'z\AUX_95th_40k_IG_Main\addons\weapons\data\Flag_95th.paa'";
		};
		class UserActions
		{
			class GetFlag
			{
				displayName = "Pick up flag";
				displayNameDefault = "Pick up flag";
				textToolTip = "Pick up flag";
				priority = 10;
				position = "";
				condition = "isNil secondaryWeapon player";
				statement = "deleteVehicle this; player addWeapon 'Cadian_95th_Banner_Weapon';";
				radius = 10;
				onlyforplayer = 1;
				showWindow = 0;
				hideOnUse = 1;
			};
		};
	};
};

class CfgFunctions {
    class AUX_95th_40k_IG_Main {
        class Weapons {
			file = "\z\AUX_95th_40k_IG_Main\addons\weapons\functions";
            class enhanceFlare {};
        };
    };
};

#include "CfgEventHandlers.hpp"