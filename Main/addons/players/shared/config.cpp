#include "script_component.hpp"

class CfgPatches {
    class AUX_95th_players_shared {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
			"AUX_95th_40k_IG_main",
			"FIG_Cadians",
			"FIG_Additional_Regiments"
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

// class CfgWeapons {
// 	class ItemInfo;
// };

class CfgGlasses {
	// Headwraps
	class FIG_CadianHeadwrapV2;
	class AUX_95th_FIG_CadianHeadwrapV2: FIG_CadianHeadwrapV2 {
		displayName = "[95th] Headwrap (Partial)";
	};

	class FIG_CadianHeadwrap;
	class AUX_95th_FIG_FIG_CadianHeadwrap: FIG_CadianHeadwrap {
		displayName = "[95th] Headwrap (Full)";
	};

	class G_Blindfold_01_black_F;
	class AUX_95th_FIG_G_Blindfold_01_black_F: G_Blindfold_01_black_F {
		displayName = "[95th] Headwrap (Blindfold)";
	};

	class G_Bandanna_oli;
	class AUX_95th_FIG_G_Bandanna_oli: G_Bandanna_oli {
		displayName = "[95th] Headwrap (Bandana)";
	};

	// Goggles
	class FIG_CadianGogglesDownFW;
	class AUX_95th_FIG_CadianGogglesDownFW: FIG_CadianGogglesDownFW {
		displayName = "[95th] Goggles (Down)";
	};

	class FIG_CadianGogglesUpFW;
	class AUX_95th_FIG_CadianGogglesUpFW: FIG_CadianGogglesUpFW {
		displayName = "[95th] Goggles (Up)";
	};

	// Cigs
	class immersion_cigs_cigar0;
	class AUX_95th_immersion_cigs_cigar0: immersion_cigs_cigar0 {
		displayName = "[95th] Cigar";
	};

	class murshun_cigs_cig0;
	class AUX_95th_murshun_cigs_cig0: murshun_cigs_cig0 {
		displayName = "[95th] Cigarette";
	};

	// Gloves
	class TIOW_F_Gloves_Black;
	class AUX_95th_TIOW_F_Gloves_Black: TIOW_F_Gloves_Black {
		displayName = "[95th] Gloves (Black)";
	};

	class TIOW_F_Gloves_Brown;
	class AUX_95th_TIOW_F_Gloves_Brown: TIOW_F_Gloves_Brown {
		displayName = "[95th] Gloves (Brown)";
	};

	// Headsets 
	class ic_Headset;
	class AUX_95th_ic_Headset: ic_Headset {
		displayName = "[95th] Headset (Small)";
	};

	class TIOW_IG_Headset;
	class AUX_95th_TIOW_IG_Headset: TIOW_IG_Headset {
		displayName = "[95th] Headset (Large)";
	};

	// Chest Pouches
	class FIG_CadianWebbing;
	class AUX_95th_FIG_CadianWebbing: FIG_CadianWebbing {
		displayName = "[95th] Chestwear (Webbing)";
	};

	class ic_Cadian_MedicPouches;
	class AUX_95th_ic_Cadian_MedicPouches: ic_Cadian_MedicPouches {
		displayName = "[95th] Chestwear (Medical)";
	};

	class ic_Cadian_Extra4;
	class AUX_95th_ic_Cadian_Extra4: ic_Cadian_Extra4 {
		displayName = "[95th] Chestwear (Variant 1)";
	};

	class ic_Cadian_Extra4V5;
	class AUX_95th_ic_Cadian_Extra4V5: ic_Cadian_Extra4V5 {
		displayName = "[95th] Chestwear (Variant 2)";
	};

	class ic_Cadian_Extra4V4;
	class AUX_95th_ic_Cadian_Extra4V4: ic_Cadian_Extra4V4 {
		displayName = "[95th] Chestwear (Variant 3)";
	};

	class ic_Cadian_Extra4V3;
	class AUX_95th_ic_Cadian_Extra4V3: ic_Cadian_Extra4V3 {
		displayName = "[95th] Chestwear (Variant 4)";
	};
	
	class ic_Cadian_Extra4V2;
	class AUX_95th_ic_Cadian_Extra4V2: ic_Cadian_Extra4V2 {
		displayName = "[95th] Chestwear (Variant 5)";
	};

	// Misc
	class FIG_OfficerGorget;
	class AUX_95th_FIG_OfficerGorget: FIG_OfficerGorget {
		displayName = "[95th] Officer (Gorget)";
	};

	class IC_cad_rebreather_green;
	class AUX_95th_IC_cad_rebreather_green: IC_cad_rebreather_green {
		displayName = "[95th] Mask (No Visor)";
	};
};

#include "CfgEventHandlers.hpp"