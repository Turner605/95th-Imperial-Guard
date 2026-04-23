#if VEST_LIGHT_SET == 1
    class FIG_IronCultArmourLight;
    class AUX_95th_Vest_Light_One_##PLAYER_NAME : FIG_IronCultArmourLight {
        author="95th Aux Team";
        displayName=QUOTE([95th] SQUAD_NUMBER SQUAD_NAME Vests); 
        picture=QUOTE(\z\AUX_95th_40k_IG_Main\addons\players\shared\insignias\SQUAD_KEY.paa);
        hiddenSelectionsTextures[]={
            QUOTE(\z\AUX_95th_40k_IG_Main\addons\players\PLAYER_NAME\data\vests\vest.paa) 
        };

		class ItemInfo: VestItem {
			uniformModel = "\FIG_Imperial_Guard\FIG_GenChaos\FIG_IronCultArmourLight.p3d";
            containerClass = "Supply120";
		    hiddenSelections[] = {"camo"};
			hiddenSelectionsTextures[] = {
                QUOTE(\z\AUX_95th_40k_IG_Main\addons\players\PLAYER_NAME\data\vests\vest.paa) 
            };
            class HitpointsProtectionInfo {
                class Abdomen {armor = 20; hitpointName = "HitAbdomen"; passThrough = 0.2;};
                class Body {hitpointName = "HitBody"; passThrough = 0.2;};
                class Chest {armor = 20; HitpointName = "HitChest"; PassThrough = 0.2;};
                class Diaphragm {armor = 20; HitpointName = "HitDiaphragm"; PassThrough = 0.2;};
            };
		};

        class XtdGearInfo {
            model = QUOTE(DOUBLES(AUX_95th_Vests_Squad,SQUAD_KEY));
            Type = "Light";
            Variant = "One";
            Player = QUOTE(PLAYER_NAME_BEAUTIFIED);
        };
    };
#endif

#if VEST_MEDIUM_SET == 1
    class FIG_IronCultArmourV2;
    class AUX_95th_Vest_Medium_One_##PLAYER_NAME : FIG_IronCultArmourV2 {
        author="95th Aux Team";
        displayName=QUOTE([95th] SQUAD_NUMBER SQUAD_NAME Vests); 
        picture=QUOTE(\z\AUX_95th_40k_IG_Main\addons\players\shared\insignias\SQUAD_KEY.paa);
        hiddenSelectionsTextures[]={
            QUOTE(\z\AUX_95th_40k_IG_Main\addons\players\PLAYER_NAME\data\vests\vest.paa) 
        };

		class ItemInfo: VestItem {
			uniformModel = "\FIG_Imperial_Guard\FIG_GenChaos\FIG_IronCultArmourV2.p3d";
            containerClass = "Supply120";
		    hiddenSelections[] = {"camo"};
			hiddenSelectionsTextures[] = {
                QUOTE(\z\AUX_95th_40k_IG_Main\addons\players\PLAYER_NAME\data\vests\vest.paa) 
            };
            class HitpointsProtectionInfo {
                class Abdomen {armor = 20; hitpointName = "HitAbdomen"; passThrough = 0.2;};
                class Body {hitpointName = "HitBody"; passThrough = 0.2;};
                class Chest {armor = 20; HitpointName = "HitChest"; PassThrough = 0.2;};
                class Diaphragm {armor = 20; HitpointName = "HitDiaphragm"; PassThrough = 0.2;};
            };
		};

        class XtdGearInfo {
            model = QUOTE(DOUBLES(AUX_95th_Vests_Squad,SQUAD_KEY));
            Type = "Medium";
            Variant = "One";
            Player = QUOTE(PLAYER_NAME_BEAUTIFIED);
        };
    };
#endif

#if VEST_HEAVY_SET == 1
     class FIG_IronCultArmour;
    class AUX_95th_Vest_Heavy_One_##PLAYER_NAME : FIG_IronCultArmour {
        author="95th Aux Team";
        displayName=QUOTE([95th] SQUAD_NUMBER SQUAD_NAME Vests); 
        picture=QUOTE(\z\AUX_95th_40k_IG_Main\addons\players\shared\insignias\SQUAD_KEY.paa);
        hiddenSelectionsTextures[]={
            QUOTE(\z\AUX_95th_40k_IG_Main\addons\players\PLAYER_NAME\data\vests\vest.paa) 
        };

		class ItemInfo: VestItem {
			uniformModel = "\FIG_Imperial_Guard\FIG_GenChaos\FIG_IronCultArmour.p3d";
            containerClass = "Supply120";
		    hiddenSelections[] = {"camo"};
			hiddenSelectionsTextures[] = {
                QUOTE(\z\AUX_95th_40k_IG_Main\addons\players\PLAYER_NAME\data\vests\vest.paa) 
            };
            class HitpointsProtectionInfo {
                class Abdomen {armor = 20; hitpointName = "HitAbdomen"; passThrough = 0.2;};
                class Body {hitpointName = "HitBody"; passThrough = 0.2;};
                class Chest {armor = 20; HitpointName = "HitChest"; PassThrough = 0.2;};
                class Diaphragm {armor = 20; HitpointName = "HitDiaphragm"; PassThrough = 0.2;};
            };
		};

        class XtdGearInfo {
            model = QUOTE(DOUBLES(AUX_95th_Vests_Squad,SQUAD_KEY));
            Type = "Heavy";
            Variant = "One";
            Player = QUOTE(PLAYER_NAME_BEAUTIFIED);
        };
    };
#endif