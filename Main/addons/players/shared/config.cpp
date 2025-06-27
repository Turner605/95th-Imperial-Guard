#include "script_component.hpp"

class CfgPatches {
    class AUX_95th_40k_IG_Main_players_shared {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
			"AUX_95th_40k_IG_Main_main",
			"FIG_Cadians",
			"FIG_Additional_Regiments",
			"IC_CAD_Headgear"
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


		class AUX_95th_NVG_Trooper {
			label = "Trooper Facewear";
			author = "95th Aux Team";
			options[] = {"Type", "Variant"};

			class Type {
				alwaysSelectable = 1;
				labels = "Type";
				values[] = {"Headwrap","Chestwear","Goggles", "Cigarette", "Gloves", "Headset", "Cameras"};
				class Headwrap { label = "Headwrap"; description = "Headwrap"; };
				class Chestwear { label = "Chestwear"; description = "Chestwear"; };
				class Goggles { label = "Goggles"; description = "Goggles"; };
				class Cigarette { label = "Cigarette"; description = "Cigarette"; };
				class Gloves { label = "Gloves"; description = "Gloves"; };
				class Headset { label = "Headset"; description = "Headset"; };
				class Cameras { label = "Cameras"; description = "Cameras"; };
			};

			class Variant {
				labels = "Variant";
				values[] = {"One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
				class One { label = "1"; description = "1"; };
				class Two { label = "2"; description = "2"; };
				class Three { label = "3"; description = "3"; };
				class Four { label = "4"; description = "4"; };
				class Five { label = "5"; description = "5"; };
				class Six { label = "6"; description = "6"; };
				class Seven { label = "7"; description = "7"; };
				class Eight { label = "8"; description = "8"; };
				class Nine { label = "9"; description = "9"; };
			};
		};

		class AUX_95th_NVG_Reward {
			label = "Reward Facewear";
			author = "95th Aux Team";
			options[] = {"Type", "Variant"};

			class Type {
				alwaysSelectable = 1;
				labels = "Type";
				values[] = {"BionicEye"};
				class BionicEye { label = "BionicEye"; description = "BionicEye"; };
			};

			class Variant {
				labels = "Variant";
				values[] = {"One", "Two", "Three", "Four", "Five"};
				class One { label = "1"; description = "1"; };
				class Two { label = "2"; description = "2"; };
				class Three { label = "3"; description = "3"; };
				class Four { label = "4"; description = "4"; };
				class Five { label = "5"; description = "5"; };
			};
		};

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

	class CfgGlasses {
		class AUX_95th_Glasses_Trooper {
			label = "Trooper Facewear";
			author = "95th Aux Team";
			options[] = {"Type", "Variant"};

			class Type {
				alwaysSelectable = 1;
				labels = "Type";
				values[] = {"Headwrap","Chestwear","Goggles", "Cigarette", "Gloves", "Headset"};
				class Headwrap { label = "Headwrap"; description = "Headwrap"; };
				class Chestwear { label = "Chestwear"; description = "Chestwear"; };
				class Goggles { label = "Goggles"; description = "Goggles"; };
				class Cigarette { label = "Cigarette"; description = "Cigarette"; };
				class Gloves { label = "Gloves"; description = "Gloves"; };
				class Headset { label = "Headset"; description = "Headset"; };
			};

			class Variant {
				labels = "Variant";
				values[] = {"One", "Two", "Three", "Four", "Five", "Six", "Seven"};
				class One { label = "1"; description = "1"; };
				class Two { label = "2"; description = "2"; };
				class Three { label = "3"; description = "3"; };
				class Four { label = "4"; description = "4"; };
				class Five { label = "5"; description = "5"; };
				class Six { label = "6"; description = "6"; };
				class Seven { label = "7"; description = "7"; };
			};
		};

		class AUX_95th_Glasses_Veteran {
			label = "Veteran Facewear";
			author = "95th Aux Team";
			options[] = {"Type", "Variant"};

			class Type {
				alwaysSelectable = 1;
				labels = "Type";
				values[] = {"Mask"};
				class Mask { label = "Mask"; description = "Mask"; };
			};

			class Variant {
				labels = "Variant";
				values[] = {"One"};
				class One { label = "1"; description = "1"; };
			};
		};

		class AUX_95th_Glasses_NCO {
			label = "NCO Facewear";
			author = "95th Aux Team";
			options[] = {"Type", "Variant"};

			class Type {
				alwaysSelectable = 1;
				labels = "Type";
				values[] = {"Gorget"};
				class Gorget { label = "Gorget"; description = "Gorget"; };
			};

			class Variant {
				labels = "Variant";
				values[] = {"One"};
				class One { label = "1"; description = "1"; };
			};
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
	class ItemInfo;

	// Cigs
	class immersion_cigs_cigar0_nv;
	class AUX_95th_immersion_cigs_cigar0_nv: immersion_cigs_cigar0_nv {
		displayName="[95th] Trooper Stuff";
		// displayName="[95th] Cigar";
		visionMode[]={};
		class XtdGearInfo {
            model = "AUX_95th_NVG_Trooper";
            Type = "Cigarette";
            Variant = "One";
        };
	};

	class murshun_cigs_cig0_nv;
	class AUX_95th_murshun_cigs_cig0_nv: murshun_cigs_cig0_nv {
		displayName="[95th] Trooper Stuff";
		// displayName="[95th] Cigarette";
		visionMode[]={};
		class XtdGearInfo {
            model = "AUX_95th_NVG_Trooper";
            Type = "Cigarette";
            Variant = "Two";
        };
	};


	// Cameras
	class FIG_CadianAuspecsGrey;
	class AUX_95th_FIG_CadianAuspecsGrey: FIG_CadianAuspecsGrey {
		displayName="[95th] Trooper Stuff";
		// displayName="[95th] Auspecs Camera";
		visionMode[]={};
		class XtdGearInfo {
            model = "AUX_95th_NVG_Trooper";
            Type = "Cameras";
            Variant = "One";
        };
	};

	// Goggles
	class FIG_CadianGogglesUp;
	class AUX_95th_FIG_CadianGogglesUp: FIG_CadianGogglesUp {
		displayName="[95th] Trooper Stuff";
		// displayName="[95th] Goggles (Up)";
		visionMode[]={};
		class XtdGearInfo {
            model = "AUX_95th_NVG_Trooper";
            Type = "Goggles";
            Variant = "One";
        };
	};

	class FIG_CadianGogglesDown;
	class AUX_95th_FIG_CadianGogglesDown: FIG_CadianGogglesDown {
		displayName="[95th] Trooper Stuff";
		// displayName="[95th] Goggles (Down)";
		visionMode[]={};
		class XtdGearInfo {
            model = "AUX_95th_NVG_Trooper";
            Type = "Goggles";
            Variant = "Two";
        };
	};

	// Bionic Eyes
	class ic_bionicEye;
	class AUX_95th_ic_bionicEye: ic_bionicEye {
		displayName="[95th] Reward Stuff";
		// displayName="[95th] Bionic Eye (Variant 1)";
		visionMode[]={};
		class XtdGearInfo {
            model = "AUX_95th_NVG_Reward";
            Type = "BionicEye";
            Variant = "One";
        };
	};

	class TIOW_Bionic_Eye_2;
	class AUX_95th_TIOW_Bionic_Eye_2: TIOW_Bionic_Eye_2 {
		displayName="[95th] Reward Stuff";
		// displayName="[95th] Bionic Eye (Variant 2)";
		visionMode[]={};
		class XtdGearInfo {
            model = "AUX_95th_NVG_Reward";
            Type = "BionicEye";
            Variant = "Two";
        };
	};

	class TIOW_Bionic_Eye_2_Green;
	class AUX_95th_TIOW_Bionic_Eye_2_Green: TIOW_Bionic_Eye_2_Green {
		displayName="[95th] Reward Stuff";
		// displayName="[95th] Bionic Eye (Variant 3)";
		visionMode[]={};
		class XtdGearInfo {
            model = "AUX_95th_NVG_Reward";
            Type = "BionicEye";
            Variant = "Three";
        };
	};

	class TIOW_Bionic_Eye;
	class AUX_95th_TIOW_Bionic_Eye: TIOW_Bionic_Eye {
		displayName="[95th] Reward Stuff";
		// displayName="[95th] Bionic Eye (Variant 4)";
		visionMode[]={};
		class XtdGearInfo {
            model = "AUX_95th_NVG_Reward";
            Type = "BionicEye";
            Variant = "Four";
        };
	};
	
	class TIOW_Bionic_Eye_Green;
	class AUX_95th_TIOW_Bionic_Eye_Green: TIOW_Bionic_Eye_Green {
		displayName="[95th] Reward Stuff";
		// displayName="[95th] Bionic Eye (Variant 5)";
		visionMode[]={};
		class XtdGearInfo {
            model = "AUX_95th_NVG_Reward";
            Type = "BionicEye";
            Variant = "Five";
        };
	};
	
	// Chestwear
	class ic_Cadian_Extra4_NVG;
	class AUX_95th_ic_Cadian_Extra4_NVG: ic_Cadian_Extra4_NVG {
		displayName="[95th] Trooper Stuff";
		// displayName = "[95th] Chestwear (Variant 1)";
		visionMode[]={};
		class XtdGearInfo {
            model = "AUX_95th_NVG_Trooper";
            Type = "Chestwear";
            Variant = "One";
        };
	};

	class ic_Cadian_Extra4V2_NVG;
	class AUX_95th_ic_Cadian_Extra4V2_NVG: ic_Cadian_Extra4V2_NVG {
		displayName="[95th] Trooper Stuff";
		// displayName = "[95th] Chestwear (Variant 2)";
		visionMode[]={};
		class XtdGearInfo {
            model = "AUX_95th_NVG_Trooper";
            Type = "Chestwear";
            Variant = "Two";
        };
	};

	class ic_Cadian_Extra4V3_NVG;
	class AUX_95th_ic_Cadian_Extra4V3_NVG: ic_Cadian_Extra4V3_NVG {
		displayName="[95th] Trooper Stuff";
		// displayName = "[95th] Chestwear (Variant 3)";
		visionMode[]={};
		class XtdGearInfo {
            model = "AUX_95th_NVG_Trooper";
            Type = "Chestwear";
            Variant = "Three";
        };
	};

	class ic_Cadian_Extra4V4_NVG;
	class AUX_95th_ic_Cadian_Extra4V4_NVG: ic_Cadian_Extra4V4_NVG {
		displayName="[95th] Trooper Stuff";
		// displayName = "[95th] Chestwear (Variant 4)";
		visionMode[]={};
		class XtdGearInfo {
            model = "AUX_95th_NVG_Trooper";
            Type = "Chestwear";
            Variant = "Four";
        };
	};

	class ic_Cadian_Extra4V5_NVG;
	class AUX_95th_ic_Cadian_Extra4V5_NVG: ic_Cadian_Extra4V5_NVG {
		displayName="[95th] Trooper Stuff";
		// displayName = "[95th] Chestwear (Variant 5)";
		visionMode[]={};
		class XtdGearInfo {
            model = "AUX_95th_NVG_Trooper";
            Type = "Chestwear";
            Variant = "Five";
        };
	};

	class ic_Cadian_MedicaePouches_NVG;
	class AUX_95th_ic_Cadian_MedicaePouches_NVG: ic_Cadian_MedicaePouches_NVG {
		displayName="[95th] Trooper Stuff";
		// displayName = "[95th] Chestwear (Medical)";
		visionMode[]={};
		class XtdGearInfo {
            model = "AUX_95th_NVG_Trooper";
            Type = "Chestwear";
            Variant = "Seven";
        };
	};

	// Camo Nets
	class ic_cad_CamoNetBody;
	class AUX_95th_ic_cad_CamoNetBody: ic_cad_CamoNetBody {
		displayName="[95th] Trooper Stuff";
		// displayName="[95th] Camo Net (Partial)";
		visionMode[]={};
		class XtdGearInfo {
            model = "AUX_95th_NVG_Trooper";
            Type = "Chestwear";
            Variant = "Eight";
        };
	};

	class ic_cad_CamoNetBodyV2;
	class AUX_95th_ic_cad_CamoNetBodyV2: ic_cad_CamoNetBodyV2 {
		displayName="[95th] Trooper Stuff";
		// displayName="[95th] Camo Net (Full)";
		visionMode[]={};
		class XtdGearInfo {
            model = "AUX_95th_NVG_Trooper";
            Type = "Chestwear";
            Variant = "Nine";
        };
	};
};

class CfgGlasses {
	// Headwraps
	class FIG_CadianHeadwrapV2;
	class AUX_95th_FIG_CadianHeadwrapV2: FIG_CadianHeadwrapV2 {
		displayName="[95th] Trooper Stuff";
		// displayName = "[95th] Headwrap (Partial)";
		class XtdGearInfo {
            model = "AUX_95th_Glasses_Trooper";
            Type = "Headwrap";
            Variant = "One";
        };
	};

	class FIG_CadianHeadwrap;
	class AUX_95th_FIG_FIG_CadianHeadwrap: FIG_CadianHeadwrap {
		displayName="[95th] Trooper Stuff";
		// displayName = "[95th] Headwrap (Full)";
		class XtdGearInfo {
            model = "AUX_95th_Glasses_Trooper";
            Type = "Headwrap";
            Variant = "Two";
        };
	};

	class G_Blindfold_01_black_F;
	class AUX_95th_FIG_G_Blindfold_01_black_F: G_Blindfold_01_black_F {
		displayName="[95th] Trooper Stuff";
		// displayName = "[95th] Headwrap (Blindfold)";
		class XtdGearInfo {
            model = "AUX_95th_Glasses_Trooper";
            Type = "Headwrap";
            Variant = "Three";
        };
	};

	class G_Bandanna_oli;
	class AUX_95th_FIG_G_Bandanna_oli: G_Bandanna_oli {
		displayName="[95th] Trooper Stuff";
		// displayName = "[95th] Headwrap (Bandana)";
		class XtdGearInfo {
            model = "AUX_95th_Glasses_Trooper";
            Type = "Headwrap";
            Variant = "Four";
        };
	};

	// Goggles
	class FIG_CadianGogglesDownFW;
	class AUX_95th_FIG_CadianGogglesDownFW: FIG_CadianGogglesDownFW {
		displayName="[95th] Trooper Stuff";
		// displayName = "[95th] Goggles (Down)";
		class XtdGearInfo {
            model = "AUX_95th_Glasses_Trooper";
            Type = "Goggles";
            Variant = "One";
        };
	};

	class FIG_CadianGogglesUpFW;
	class AUX_95th_FIG_CadianGogglesUpFW: FIG_CadianGogglesUpFW {
		displayName="[95th] Trooper Stuff";
		// displayName = "[95th] Goggles (Up)";
		class XtdGearInfo {
            model = "AUX_95th_Glasses_Trooper";
            Type = "Goggles";
            Variant = "Two";
        };
	};

	// Cigs
	class immersion_cigs_cigar0;
	class AUX_95th_immersion_cigs_cigar0: immersion_cigs_cigar0 {
		displayName="[95th] Trooper Stuff";
		// displayName = "[95th] Cigar";
		class XtdGearInfo {
            model = "AUX_95th_Glasses_Trooper";
            Type = "Cigarette";
            Variant = "One";
        };
	};

	class murshun_cigs_cig0;
	class AUX_95th_murshun_cigs_cig0: murshun_cigs_cig0 {
		displayName="[95th] Trooper Stuff";
		// displayName = "[95th] Cigarette";
		class XtdGearInfo {
            model = "AUX_95th_Glasses_Trooper";
            Type = "Cigarette";
            Variant = "Two";
        };
	};

	// Gloves
	class TIOW_F_Gloves_Black;
	class AUX_95th_TIOW_F_Gloves_Black: TIOW_F_Gloves_Black {
		displayName="[95th] Trooper Stuff";
		// displayName = "[95th] Gloves (Black)";
		class XtdGearInfo {
            model = "AUX_95th_Glasses_Trooper";
            Type = "Gloves";
            Variant = "One";
        };
	};

	class TIOW_F_Gloves_Brown;
	class AUX_95th_TIOW_F_Gloves_Brown: TIOW_F_Gloves_Brown {
		displayName="[95th] Trooper Stuff";
		// displayName = "[95th] Gloves (Brown)";
		class XtdGearInfo {
            model = "AUX_95th_Glasses_Trooper";
            Type = "Gloves";
            Variant = "Two";
        };
	};

	// Headsets 
	class ic_Headset;
	class AUX_95th_ic_Headset: ic_Headset {
		displayName="[95th] Trooper Stuff";
		// displayName = "[95th] Headset (Small)";
		class XtdGearInfo {
            model = "AUX_95th_Glasses_Trooper";
            Type = "Headset";
            Variant = "One";
        };
	};

	class TIOW_IG_Headset;
	class AUX_95th_TIOW_IG_Headset: TIOW_IG_Headset {
		displayName="[95th] Trooper Stuff";
		// displayName = "[95th] Headset (Large)";
		class XtdGearInfo {
            model = "AUX_95th_Glasses_Trooper";
            Type = "Headset";
            Variant = "Two";
        };
	};

	// Chest Pouches
	class ic_Cadian_Extra4;
	class AUX_95th_ic_Cadian_Extra4: ic_Cadian_Extra4 {
		displayName="[95th] Trooper Stuff";
		// displayName = "[95th] Chestwear (Variant 1)";
		class XtdGearInfo {
            model = "AUX_95th_Glasses_Trooper";
            Type = "Chestwear";
            Variant = "One";
        };
	};

	class ic_Cadian_Extra4V2;
	class AUX_95th_ic_Cadian_Extra4V2: ic_Cadian_Extra4V2 {
		displayName="[95th] Trooper Stuff";
		// displayName = "[95th] Chestwear (Variant 2)";
		class XtdGearInfo {
            model = "AUX_95th_Glasses_Trooper";
            Type = "Chestwear";
            Variant = "Two";
        };
	};

	class ic_Cadian_Extra4V3;
	class AUX_95th_ic_Cadian_Extra4V3: ic_Cadian_Extra4V3 {
		displayName="[95th] Trooper Stuff";
		// displayName = "[95th] Chestwear (Variant 3)";
		class XtdGearInfo {
            model = "AUX_95th_Glasses_Trooper";
            Type = "Chestwear";
            Variant = "Three";
        };
	};

	class ic_Cadian_Extra4V4;
	class AUX_95th_ic_Cadian_Extra4V4: ic_Cadian_Extra4V4 {
		displayName="[95th] Trooper Stuff";
		// displayName = "[95th] Chestwear (Variant 4)";
		class XtdGearInfo {
            model = "AUX_95th_Glasses_Trooper";
            Type = "Chestwear";
            Variant = "Four";
        };
	};

	class ic_Cadian_Extra4V5;
	class AUX_95th_ic_Cadian_Extra4V5: ic_Cadian_Extra4V5 {
		displayName="[95th] Trooper Stuff";
		// displayName = "[95th] Chestwear (Variant 5)";
		class XtdGearInfo {
            model = "AUX_95th_Glasses_Trooper";
            Type = "Chestwear";
            Variant = "Five";
        };
	};

	class FIG_CadianWebbing;
	class AUX_95th_FIG_CadianWebbing: FIG_CadianWebbing {
		displayName="[95th] Trooper Stuff";
		// displayName = "[95th] Chestwear (Webbing)";
		class XtdGearInfo {
            model = "AUX_95th_Glasses_Trooper";
            Type = "Chestwear";
            Variant = "Six";
        };
	};

	class ic_Cadian_MedicPouches;
	class AUX_95th_ic_Cadian_MedicPouches: ic_Cadian_MedicPouches {
		displayName="[95th] Trooper Stuff";
		// displayName = "[95th] Chestwear (Medical)";
		class XtdGearInfo {
            model = "AUX_95th_Glasses_Trooper";
            Type = "Chestwear";
            Variant = "Seven";
        };
	};

	// Misc
	class FIG_OfficerGorget;
	class AUX_95th_FIG_OfficerGorget: FIG_OfficerGorget {
		displayName="[95th] Officer Stuff";
		// displayName = "[95th] Officer (Gorget)";
		class XtdGearInfo {
            model = "AUX_95th_Glasses_NCO";
            Type = "Gorget";
            Variant = "One";
        };
	};

	class IC_cad_rebreather_green;
	class AUX_95th_IC_cad_rebreather_green: IC_cad_rebreather_green {
		displayName="[95th] Veteran Stuff";
		// displayName = "[95th] Mask (No Visor)";
		class XtdGearInfo {
            model = "AUX_95th_Glasses_Veteran";
            Type = "Mask";
            Variant = "One";
        };
	};
};

#include "CfgEventHandlers.hpp"