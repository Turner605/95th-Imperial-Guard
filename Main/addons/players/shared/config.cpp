#include "script_component.hpp"

class CfgPatches {
    class AUX_95th_players_shared {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
			"AUX_95th_40k_IG_main",
			"FIG_Cadians"
		};
        authors[] = {"Turner"};
        VERSION_CONFIG;
    };
};

class CfgFunctions {
    class AUX_95th_40k_IG_Main {
        class players_shared {
			file = "\z\AUX_95th_40k_IG_Main\addons\players\shared\functions";
            class addPlayerGearToArsenal {};
        };
    };
};

class XtdGearModels {
	class CfgWeapons {
		class AUX_95th_Helmet_Squad_Basic {
			label = "Basic Helmets";
			#include "\z\AUX_95th_40k_IG_Main\addons\players\shared\XtdGearModels\xtdGearHelmets.hpp"
			#include "\z\AUX_95th_40k_IG_Main\addons\main\xtdGearSquads\basic.hpp"
		};

		class AUX_95th_Helmet_Squad_Zeus {
			label = "Zeus Helmets";
			#include "\z\AUX_95th_40k_IG_Main\addons\players\shared\XtdGearModels\xtdGearHelmets.hpp"
			#include "\z\AUX_95th_40k_IG_Main\addons\main\xtdGearSquads\zeus.hpp"
		};

		class AUX_95th_Helmet_Squad_One_Zero {
			label = "1-0 Anooba";
			#include "\z\AUX_95th_40k_IG_Main\addons\players\shared\XtdGearModels\xtdGearHelmets.hpp"
			#include "\z\AUX_95th_40k_IG_Main\addons\main\xtdGearSquads\one_zero.hpp"
		};

		class AUX_95th_Helmet_Squad_One_One {
			label = "1-1 Ackley";
			#include "\z\AUX_95th_40k_IG_Main\addons\players\shared\XtdGearModels\xtdGearHelmets.hpp"
			#include "\z\AUX_95th_40k_IG_Main\addons\main\xtdGearSquads\one_one.hpp"
		};

		class AUX_95th_Helmet_Squad_One_Two {
			label = "1-2 Reek";
			#include "\z\AUX_95th_40k_IG_Main\addons\players\shared\XtdGearModels\xtdGearHelmets.hpp"
			#include "\z\AUX_95th_40k_IG_Main\addons\main\xtdGearSquads\one_two.hpp"
		};

		class AUX_95th_Helmet_Squad_One_Three {
			label = "1-3 Krayt";
			#include "\z\AUX_95th_40k_IG_Main\addons\players\shared\XtdGearModels\xtdGearHelmets.hpp"
			#include "\z\AUX_95th_40k_IG_Main\addons\main\xtdGearSquads\one_three.hpp"
		};

		class AUX_95th_Helmet_Squad_One_Four {
			label = "1-4 Sarlacc";
			#include "\z\AUX_95th_40k_IG_Main\addons\players\shared\XtdGearModels\xtdGearHelmets.hpp"
			#include "\z\AUX_95th_40k_IG_Main\addons\main\xtdGearSquads\one_four.hpp"
		};

		class AUX_95th_Helmet_Squad_Five_Zero {
			label = "5-0 Zillo";
			#include "\z\AUX_95th_40k_IG_Main\addons\players\shared\XtdGearModels\xtdGearHelmets.hpp"
			#include "\z\AUX_95th_40k_IG_Main\addons\main\xtdGearSquads\five_zero.hpp"
		};

		class AUX_95th_Helmet_Squad_Six_Zero {
			label = "6-0 Mynock";
			#include "\z\AUX_95th_40k_IG_Main\addons\players\shared\XtdGearModels\xtdGearHelmets.hpp"
			#include "\z\AUX_95th_40k_IG_Main\addons\main\xtdGearSquads\six_zero.hpp"
		};

		class AUX_95th_Helmet_Squad_Seven_Zero {
			label = "7-0 Banshee";
			#include "\z\AUX_95th_40k_IG_Main\addons\players\shared\XtdGearModels\xtdGearHelmets.hpp"
			#include "\z\AUX_95th_40k_IG_Main\addons\main\xtdGearSquads\seven_zero.hpp"
		};

		class AUX_95th_Helmet_Squad_Fallen {
			label = "The Fallen";
			#include "\z\AUX_95th_40k_IG_Main\addons\players\shared\XtdGearModels\xtdGearHelmets.hpp"
			#include "\z\AUX_95th_40k_IG_Main\addons\main\xtdGearSquads\fallen.hpp"
		};

		class AUX_95th_Helmet_Squad_Unassigned {
			label = "Unassigned";
			#include "\z\AUX_95th_40k_IG_Main\addons\players\shared\XtdGearModels\xtdGearHelmets.hpp"
			#include "\z\AUX_95th_40k_IG_Main\addons\main\xtdGearSquads\unassigned.hpp"
		};



		class AUX_95th_Uniform_Squad_Basic {
			label = "Basic Uniforms";
			#include "\z\AUX_95th_40k_IG_Main\addons\players\shared\XtdGearModels\xtdGearUniforms.hpp"
			#include "\z\AUX_95th_40k_IG_Main\addons\main\xtdGearSquads\basic.hpp"
		};

		class AUX_95th_Uniform_Squad_Zeus {
			label = "Zeus Uniforms";
			#include "\z\AUX_95th_40k_IG_Main\addons\players\shared\XtdGearModels\xtdGearUniforms.hpp"
			#include "\z\AUX_95th_40k_IG_Main\addons\main\xtdGearSquads\zeus.hpp"
		};

		class AUX_95th_Uniform_Squad_One_Zero {
			label = "1-0 Anooba";
			#include "\z\AUX_95th_40k_IG_Main\addons\players\shared\XtdGearModels\xtdGearUniforms.hpp"
			#include "\z\AUX_95th_40k_IG_Main\addons\main\xtdGearSquads\one_zero.hpp"
		};

		class AUX_95th_Uniform_Squad_One_One {
			label = "1-1 Ackley";
			#include "\z\AUX_95th_40k_IG_Main\addons\players\shared\XtdGearModels\xtdGearUniforms.hpp"
			#include "\z\AUX_95th_40k_IG_Main\addons\main\xtdGearSquads\one_one.hpp"
		};

		class AUX_95th_Uniform_Squad_One_Two {
			label = "1-2 Reek";
			#include "\z\AUX_95th_40k_IG_Main\addons\players\shared\XtdGearModels\xtdGearUniforms.hpp"
			#include "\z\AUX_95th_40k_IG_Main\addons\main\xtdGearSquads\one_two.hpp"
		};

		class AUX_95th_Uniform_Squad_One_Three {
			label = "1-3 Krayt";
			#include "\z\AUX_95th_40k_IG_Main\addons\players\shared\XtdGearModels\xtdGearUniforms.hpp"
			#include "\z\AUX_95th_40k_IG_Main\addons\main\xtdGearSquads\one_three.hpp"
		};

		class AUX_95th_Uniform_Squad_One_Four {
			label = "1-4 Sarlacc";
			#include "\z\AUX_95th_40k_IG_Main\addons\players\shared\XtdGearModels\xtdGearUniforms.hpp"
			#include "\z\AUX_95th_40k_IG_Main\addons\main\xtdGearSquads\one_four.hpp"
		};

		class AUX_95th_Uniform_Squad_Five_Zero {
			label = "5-0 Zillo";
			#include "\z\AUX_95th_40k_IG_Main\addons\players\shared\XtdGearModels\xtdGearUniforms.hpp"
			#include "\z\AUX_95th_40k_IG_Main\addons\main\xtdGearSquads\five_zero.hpp"
		};

		class AUX_95th_Uniform_Squad_Six_Zero {
			label = "6-0 Mynock";
			#include "\z\AUX_95th_40k_IG_Main\addons\players\shared\XtdGearModels\xtdGearUniforms.hpp"
			#include "\z\AUX_95th_40k_IG_Main\addons\main\xtdGearSquads\six_zero.hpp"
		};

		class AUX_95th_Uniform_Squad_Seven_Zero {
			label = "7-0 Banshee";
			#include "\z\AUX_95th_40k_IG_Main\addons\players\shared\XtdGearModels\xtdGearUniforms.hpp"
			#include "\z\AUX_95th_40k_IG_Main\addons\main\xtdGearSquads\seven_zero.hpp"
		};

		class AUX_95th_Uniform_Squad_Fallen {
			label = "The Fallen";
			#include "\z\AUX_95th_40k_IG_Main\addons\players\shared\XtdGearModels\xtdGearUniforms.hpp"
			#include "\z\AUX_95th_40k_IG_Main\addons\main\xtdGearSquads\fallen.hpp"
		};

		class AUX_95th_Uniform_Squad_Unassigned {
			label = "Unassigned";
			#include "\z\AUX_95th_40k_IG_Main\addons\players\shared\XtdGearModels\xtdGearUniforms.hpp"
			#include "\z\AUX_95th_40k_IG_Main\addons\main\xtdGearSquads\unassigned.hpp"
		};

		class AUX_95th_Vests_Squad_Basic {
			label = "Basic Helmets";
			#include "\z\AUX_95th_40k_IG_Main\addons\players\shared\XtdGearModels\xtdGearVests.hpp"
			#include "\z\AUX_95th_40k_IG_Main\addons\main\xtdGearSquads\basic.hpp"
		};

		class AUX_95th_Vests_Squad_Zeus {
			label = "Zeus Helmets";
			#include "\z\AUX_95th_40k_IG_Main\addons\players\shared\XtdGearModels\xtdGearVests.hpp"
			#include "\z\AUX_95th_40k_IG_Main\addons\main\xtdGearSquads\zeus.hpp"
		};

		class AUX_95th_Vests_Squad_One_Zero {
			label = "1-0 Anooba";
			#include "\z\AUX_95th_40k_IG_Main\addons\players\shared\XtdGearModels\xtdGearVests.hpp"
			#include "\z\AUX_95th_40k_IG_Main\addons\main\xtdGearSquads\one_zero.hpp"
		};

		class AUX_95th_Vests_Squad_One_One {
			label = "1-1 Ackley";
			#include "\z\AUX_95th_40k_IG_Main\addons\players\shared\XtdGearModels\xtdGearVests.hpp"
			#include "\z\AUX_95th_40k_IG_Main\addons\main\xtdGearSquads\one_one.hpp"
		};

		class AUX_95th_Vests_Squad_One_Two {
			label = "1-2 Reek";
			#include "\z\AUX_95th_40k_IG_Main\addons\players\shared\XtdGearModels\xtdGearVests.hpp"
			#include "\z\AUX_95th_40k_IG_Main\addons\main\xtdGearSquads\one_two.hpp"
		};

		class AUX_95th_Vests_Squad_One_Three {
			label = "1-3 Krayt";
			#include "\z\AUX_95th_40k_IG_Main\addons\players\shared\XtdGearModels\xtdGearVests.hpp"
			#include "\z\AUX_95th_40k_IG_Main\addons\main\xtdGearSquads\one_three.hpp"
		};

		class AUX_95th_Vests_Squad_One_Four {
			label = "1-4 Sarlacc";
			#include "\z\AUX_95th_40k_IG_Main\addons\players\shared\XtdGearModels\xtdGearVests.hpp"
			#include "\z\AUX_95th_40k_IG_Main\addons\main\xtdGearSquads\one_four.hpp"
		};

		class AUX_95th_Vests_Squad_Five_Zero {
			label = "5-0 Zillo";
			#include "\z\AUX_95th_40k_IG_Main\addons\players\shared\XtdGearModels\xtdGearVests.hpp"
			#include "\z\AUX_95th_40k_IG_Main\addons\main\xtdGearSquads\five_zero.hpp"
		};

		class AUX_95th_Vests_Squad_Six_Zero {
			label = "6-0 Mynock";
			#include "\z\AUX_95th_40k_IG_Main\addons\players\shared\XtdGearModels\xtdGearVests.hpp"
			#include "\z\AUX_95th_40k_IG_Main\addons\main\xtdGearSquads\six_zero.hpp"
		};

		class AUX_95th_Vests_Squad_Seven_Zero {
			label = "7-0 Banshee";
			#include "\z\AUX_95th_40k_IG_Main\addons\players\shared\XtdGearModels\xtdGearVests.hpp"
			#include "\z\AUX_95th_40k_IG_Main\addons\main\xtdGearSquads\seven_zero.hpp"
		};

		class AUX_95th_Vests_Squad_Fallen {
			label = "The Fallen";
			#include "\z\AUX_95th_40k_IG_Main\addons\players\shared\XtdGearModels\xtdGearVests.hpp"
			#include "\z\AUX_95th_40k_IG_Main\addons\main\xtdGearSquads\fallen.hpp"
		};

		class AUX_95th_Vests_Squad_Unassigned {
			label = "Unassigned";
			#include "\z\AUX_95th_40k_IG_Main\addons\players\shared\XtdGearModels\xtdGearVests.hpp"
			#include "\z\AUX_95th_40k_IG_Main\addons\main\xtdGearSquads\unassigned.hpp"
		};

		class AUX_95th_NVG_P1 {
			label = "";
			author = "95th Aux Team";
			options[] = {"Type", "Colour", "Overlay"};

			class Type {
				labels = "Type";
				values[] = {"Invisible", "Rangefinder", "Visor", "Sergeant", "Lieutenant", "Medical"};
				class Invisible { label = "Invisible"; description = "Invisible"; };
				class Rangefinder { label = "Rangefinder"; description = "Rangefinder"; };
				class Visor { label = "Visor"; description = "Visor"; };
				class Sergeant { label = "Sergeant"; description = "Sergeant"; };
				class Lieutenant { label = "Lieutenant"; description = "Lieutenant"; };
				class Medical { label = "Medical"; description = "Medical"; };
			};

			class Colour {
				labels = "Colour";
				values[] = {"White", "Gray", "Brown", "Biege"};
				class White { label = "White"; description = "White"; };
				class Gray { label = "Gray"; description = "Gray"; };
				class Brown { label = "Brown"; description = "Brown"; };
				class Biege { label = "Biege"; description = "Biege"; };
			};

			class Overlay {
				labels = "Overlay";
				values[] = {"Enabled", "Disabled"};
				class Enabled { label = "Enabled"; description = "Enabled"; };
				class Disabled { label = "Disabled"; description = "Disabled"; };
			};
		};
	};



	class CfgGlasses {
		class AUX_95th_Facewear_P1 {
			label = "";
			author = "95th Aux Team";
			options[] = {"Type", "Colour"};

			class Type {
				labels = "Type";
    			alwaysSelectable = 1;
				values[] = {"Antenna", "Headlamps", "Headlamp"};
				class Antenna { label = "Antenna"; description = "Antenna"; };
				class Headlamps { label = "Headlamps"; description = "Headlamps"; };
				class Headlamp { label = "Headlamp"; description = "Headlamp"; };
			};

			class Colour {
				labels = "Colour";
				values[] = {"White", "Gray", "Brown", "Biege"};
				class White { label = "White"; description = "White"; };
				class Gray { label = "Gray"; description = "Gray"; };
				class Brown { label = "Brown"; description = "Brown"; };
				class Biege { label = "Biege"; description = "Biege"; };
			};
		};

		class AUX_95th_Facewear_Scarfs {
			label = "";
			author = "95th Aux Team";
			options[] = {"Colour"};

			class Colour {
				labels = "Colour";
				values[] = {"White", "Gray", "Brown", "Biege"};
				class White { label = "White"; description = "White"; };
				class Gray { label = "Gray"; description = "Gray"; };
				class Brown { label = "Brown"; description = "Brown"; };
				class Biege { label = "Biege"; description = "Biege"; };
			};
		};

		class AUX_95th_Facewear_Ponchos {
			label = "";
			author = "95th Aux Team";
			options[] = {"Colour"};

			class Colour {
				labels = "Colour";
				values[] = {"Green"};
				class Green { label = "Green"; description = "Green"; };
			};
		};
	};



	class CfgVehicles {
		class AUX_95th_Backpacks_Squad_Basic {
			label = "Basic Backpacks";
			#include "\z\AUX_95th_40k_IG_Main\addons\players\shared\XtdGearModels\xtdGearBackpacks.hpp"
			#include "\z\AUX_95th_40k_IG_Main\addons\main\xtdGearSquads\basic.hpp"
		};

		class AUX_95th_Backpacks_Squad_Zeus {
			label = "Zeus Backpacks";
			#include "\z\AUX_95th_40k_IG_Main\addons\players\shared\XtdGearModels\xtdGearBackpacks.hpp"
			#include "\z\AUX_95th_40k_IG_Main\addons\main\xtdGearSquads\zeus.hpp"
		};

		class AUX_95th_Backpacks_Squad_One_Zero {
			label = "1-0 Anooba";
			#include "\z\AUX_95th_40k_IG_Main\addons\players\shared\XtdGearModels\xtdGearBackpacks.hpp"
			#include "\z\AUX_95th_40k_IG_Main\addons\main\xtdGearSquads\one_zero.hpp"
		};

		class AUX_95th_Backpacks_Squad_One_One {
			label = "1-1 Ackley";
			#include "\z\AUX_95th_40k_IG_Main\addons\players\shared\XtdGearModels\xtdGearBackpacks.hpp"
			#include "\z\AUX_95th_40k_IG_Main\addons\main\xtdGearSquads\one_one.hpp"
		};

		class AUX_95th_Backpacks_Squad_One_Two {
			label = "1-2 Reek";
			#include "\z\AUX_95th_40k_IG_Main\addons\players\shared\XtdGearModels\xtdGearBackpacks.hpp"
			#include "\z\AUX_95th_40k_IG_Main\addons\main\xtdGearSquads\one_two.hpp"
		};

		class AUX_95th_Backpacks_Squad_One_Three {
			label = "1-3 Krayt";
			#include "\z\AUX_95th_40k_IG_Main\addons\players\shared\XtdGearModels\xtdGearBackpacks.hpp"
			#include "\z\AUX_95th_40k_IG_Main\addons\main\xtdGearSquads\one_three.hpp"
		};

		class AUX_95th_Backpacks_Squad_One_Four {
			label = "1-4 Sarlacc";
			#include "\z\AUX_95th_40k_IG_Main\addons\players\shared\XtdGearModels\xtdGearBackpacks.hpp"
			#include "\z\AUX_95th_40k_IG_Main\addons\main\xtdGearSquads\one_four.hpp"
		};

		class AUX_95th_Backpacks_Squad_Five_Zero {
			label = "5-0 Zillo";
			#include "\z\AUX_95th_40k_IG_Main\addons\players\shared\XtdGearModels\xtdGearBackpacks.hpp"
			#include "\z\AUX_95th_40k_IG_Main\addons\main\xtdGearSquads\five_zero.hpp"
		};

		class AUX_95th_Backpacks_Squad_Six_Zero {
			label = "6-0 Mynock";
			#include "\z\AUX_95th_40k_IG_Main\addons\players\shared\XtdGearModels\xtdGearBackpacks.hpp"
			#include "\z\AUX_95th_40k_IG_Main\addons\main\xtdGearSquads\six_zero.hpp"
		};

		class AUX_95th_Backpacks_Squad_Seven_Zero {
			label = "7-0 Banshee";
			#include "\z\AUX_95th_40k_IG_Main\addons\players\shared\XtdGearModels\xtdGearBackpacks.hpp"
			#include "\z\AUX_95th_40k_IG_Main\addons\main\xtdGearSquads\seven_zero.hpp"
		};

		class AUX_95th_Backpacks_Squad_Fallen {
			label = "The Fallen";
			#include "\z\AUX_95th_40k_IG_Main\addons\players\shared\XtdGearModels\xtdGearBackpacks.hpp"
			#include "\z\AUX_95th_40k_IG_Main\addons\main\xtdGearSquads\fallen.hpp"
		};

		class AUX_95th_Backpacks_Squad_Unassigned {
			label = "Unassigned";
			#include "\z\AUX_95th_40k_IG_Main\addons\players\shared\XtdGearModels\xtdGearBackpacks.hpp"
			#include "\z\AUX_95th_40k_IG_Main\addons\main\xtdGearSquads\unassigned.hpp"
		};
	};

};

class CfgFactionClasses {
    class AUX_95th_Legion_Faction_Imperial_Guard {displayName = "[95th] Imperial Guard"; priority = 1; side = 1; scope=2; scopecurator=2;};
};

class CfgEditorSubcategories {
	class AUX_95th_Legion_Characters_Category_Squad_Depricated{displayName="Depricated Units";};
	class AUX_95th_Legion_Characters_Category_Squad_Basic{displayName="Basic Units";};
	class AUX_95th_Legion_Characters_Category_Squad_Unassigned{displayName="Unassigned Units";};
	class AUX_95th_Legion_Characters_Category_Squad_Fallen{displayName="Fallen Units";};
	class AUX_95th_Legion_Characters_Category_Squad_Zeus{displayName="Zeus Units";};
	class AUX_95th_Legion_Characters_Category_Squad_One_Zero{displayName="1-0 Units";};
	class AUX_95th_Legion_Characters_Category_Squad_One_One{displayName="1-1 Units";};
	class AUX_95th_Legion_Characters_Category_Squad_One_Two{displayName="1-2 Units";};
	class AUX_95th_Legion_Characters_Category_Squad_One_Three{displayName="1-3 Units";};
	class AUX_95th_Legion_Characters_Category_Squad_One_Four{displayName="1-4 Units";};
	class AUX_95th_Legion_Characters_Category_Squad_Five_Zero{displayName="5-0 Units";};
	class AUX_95th_Legion_Characters_Category_Squad_Six_Zero{displayName="6-0 Units";};
	class AUX_95th_Legion_Characters_Category_Squad_Seven_Zero{displayName="7-0 Units";};
};

class CfgWeapons {
	class SEA_CloneNVG_TI;
	class SEA_P1_Rangefinder;
	class PhoenixCore_NVG_CloneNVG;
	class JLTS_PA_Core_P1_CloneCC;
	class JLTS_PA_Core_P1_CloneMC;
	class lsd_gar_medicalScanner_nvg;
	class ItemInfo;

	// ------------------------------------------------------------------------ Invisible ------------------------------------------------------------------------
	class AUX_95th_P1_NVG_Invisible: SEA_CloneNVG_TI {
		displayName="[95th] NVG";
		author="95th Aux Team";
		model="";
		hiddenSelectionsTextures[]={""};
		visionMode[]={"Normal", "NVG", "TI"};
		thermalMode[]={0,1};
		class XtdGearInfo {
			model = "AUX_95th_NVG_P1";
			Type = "Invisible";
			Colour = "White";
			Overlay = "Disabled";
		};
	};

	class AUX_95th_P1_NVG_Invisible_Overlay: AUX_95th_P1_NVG_Invisible {
		DSS_HUD_Overlay_Enabled = 1;
		class XtdGearInfo {
			model = "AUX_95th_NVG_P1";
			Type = "Invisible";
			Colour = "White";
			Overlay = "Enabled";
		};
	};

	// ------------------------------------------------------------------------ Rangefinder ------------------------------------------------------------------------
	NEW_95th_NIGHTVISION_RANGEFINDER(White);
	NEW_95th_NIGHTVISION_RANGEFINDER_OVERLAY(White);
	NEW_95th_NIGHTVISION_RANGEFINDER(Gray);
	NEW_95th_NIGHTVISION_RANGEFINDER_OVERLAY(Gray);
	NEW_95th_NIGHTVISION_RANGEFINDER(Brown);
	NEW_95th_NIGHTVISION_RANGEFINDER_OVERLAY(Brown);
	NEW_95th_NIGHTVISION_RANGEFINDER(Biege);
	NEW_95th_NIGHTVISION_RANGEFINDER_OVERLAY(Biege);

	// ------------------------------------------------------------------------ Visor ------------------------------------------------------------------------
	NEW_95th_NIGHTVISION_VISOR(White);
	NEW_95th_NIGHTVISION_VISOR_OVERLAY(White);
	NEW_95th_NIGHTVISION_VISOR(Gray);
	NEW_95th_NIGHTVISION_VISOR_OVERLAY(Gray);
	NEW_95th_NIGHTVISION_VISOR(Brown);
	NEW_95th_NIGHTVISION_VISOR_OVERLAY(Brown);

	// ------------------------------------------------------------------------ Sergeant ------------------------------------------------------------------------
	NEW_95th_NIGHTVISION_SERGEANT(White);
	NEW_95th_NIGHTVISION_SERGEANT_OVERLAY(White);
	NEW_95th_NIGHTVISION_SERGEANT(Gray);
	NEW_95th_NIGHTVISION_SERGEANT_OVERLAY(Gray);
	NEW_95th_NIGHTVISION_SERGEANT(Brown);
	NEW_95th_NIGHTVISION_SERGEANT_OVERLAY(Brown);
	NEW_95th_NIGHTVISION_SERGEANT(Biege);
	NEW_95th_NIGHTVISION_SERGEANT_OVERLAY(Biege);

	// ------------------------------------------------------------------------ Lieutenant ------------------------------------------------------------------------
	NEW_95th_NIGHTVISION_LIEUTENANT(White);
	NEW_95th_NIGHTVISION_LIEUTENANT_OVERLAY(White);
	NEW_95th_NIGHTVISION_LIEUTENANT(Gray);
	NEW_95th_NIGHTVISION_LIEUTENANT_OVERLAY(Gray);
	NEW_95th_NIGHTVISION_LIEUTENANT(Brown);
	NEW_95th_NIGHTVISION_LIEUTENANT_OVERLAY(Brown);
	NEW_95th_NIGHTVISION_LIEUTENANT(Biege);
	NEW_95th_NIGHTVISION_LIEUTENANT_OVERLAY(Biege);

	// ------------------------------------------------------------------------ Medical ------------------------------------------------------------------------
	NEW_95th_NIGHTVISION_MEDICAL(White);
	NEW_95th_NIGHTVISION_MEDICAL_OVERLAY(White);
	NEW_95th_NIGHTVISION_MEDICAL(Gray);
	NEW_95th_NIGHTVISION_MEDICAL_OVERLAY(Gray);
	NEW_95th_NIGHTVISION_MEDICAL(Brown);
	NEW_95th_NIGHTVISION_MEDICAL_OVERLAY(Brown);
};

class CfgGlasses {
	class ls_combatGoggles_base;
	class SWLB_CEE_Clone_Scarf;
	class PhoenixCore_Poncho;

	class AUX_95th_Facewear_Base: ls_combatGoggles_base {
		displayName = "[95th] Facewear Baseclass";
		author="95th Aux Team";
		model = "\A3\Weapons_f\DummyNVG";
		picture = "\SWLB_equipment\facewears\data\ui\icon_SWLB_clone_P1_HUD_ca.paa";
		hiddenSelections[] = {}; hiddenSelectionsTextures[] = {};
		ACE_Overlay = "";
		ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_OverlayCracked = "";
		ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";
		ACE_Resistance = 1;
		ACE_Protection = 0;
		ACE_TintAmount = 0;
		identityTypes[]={};
	};

	NEW_95TH_ANTENNA(White);
	NEW_95TH_HEADLAMP(White);
	NEW_95TH_HEADLAMPS(Gray);

	NEW_95TH_SCARF(Gray);
	NEW_95TH_SCARF(White);
	NEW_95TH_SCARF(Brown);

	NEW_95TH_PONCHO(Green);
};


#include "CfgEventHandlers.hpp"