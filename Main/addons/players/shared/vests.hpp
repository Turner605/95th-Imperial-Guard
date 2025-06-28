#if VEST_LIGHT_SET == 1
    class FIG_CadianArmourNS;
    class AUX_95th_Vest_Light_One_##PLAYER_NAME : FIG_CadianArmourNS {
        author="95th Aux Team";
        displayName=QUOTE([95th] SQUAD_NUMBER SQUAD_NAME Vests); 
        picture=QUOTE(\z\AUX_95th_40k_IG_Main\addons\players\shared\insignias\SQUAD_KEY.paa);
        hiddenSelectionsTextures[]={
            QUOTE(\z\AUX_95th_40k_IG_Main\addons\players\PLAYER_NAME\data\vests\vest.paa) 
        };

		class ItemInfo: VestItem {
			uniformModel = "\FIG_Imperial_Guard\FIG_Cadians\FIG_CadianArmourNS.p3d";
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

    class FIG_CadianArmourNSPV2;
    class AUX_95th_Vest_Light_Two_##PLAYER_NAME : FIG_CadianArmourNSPV2 {
        author="95th Aux Team";
        displayName=QUOTE([95th] SQUAD_NUMBER SQUAD_NAME Vests); 
        picture=QUOTE(\z\AUX_95th_40k_IG_Main\addons\players\shared\insignias\SQUAD_KEY.paa);
        hiddenSelectionsTextures[]={
            QUOTE(\z\AUX_95th_40k_IG_Main\addons\players\PLAYER_NAME\data\vests\vest.paa) 
        };

		class ItemInfo: VestItem {
			uniformModel = "\FIG_Imperial_Guard\FIG_Cadians\FIG_CadianArmourNSPV2.p3d";
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
            Variant = "Two";
            Player = QUOTE(PLAYER_NAME_BEAUTIFIED);
        };
    };

    class FIG_CadianArmourNSPV3;
    class AUX_95th_Vest_Light_Three_##PLAYER_NAME : FIG_CadianArmourNSPV3 {
        author="95th Aux Team";
        displayName=QUOTE([95th] SQUAD_NUMBER SQUAD_NAME Vests); 
        picture=QUOTE(\z\AUX_95th_40k_IG_Main\addons\players\shared\insignias\SQUAD_KEY.paa);
        hiddenSelectionsTextures[]={
            QUOTE(\z\AUX_95th_40k_IG_Main\addons\players\PLAYER_NAME\data\vests\vest.paa) 
        };

		class ItemInfo: VestItem {
			uniformModel = "\FIG_Imperial_Guard\FIG_Cadians\FIG_CadianArmourNSPV3.p3d";
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
            Variant = "Three";
            Player = QUOTE(PLAYER_NAME_BEAUTIFIED);
        };
    };

    class FIG_CadianArmourNSPV4;
    class AUX_95th_Vest_Light_Four_##PLAYER_NAME : FIG_CadianArmourNSPV4 {
        author="95th Aux Team";
        displayName=QUOTE([95th] SQUAD_NUMBER SQUAD_NAME Vests); 
        picture=QUOTE(\z\AUX_95th_40k_IG_Main\addons\players\shared\insignias\SQUAD_KEY.paa);
        hiddenSelectionsTextures[]={
            QUOTE(\z\AUX_95th_40k_IG_Main\addons\players\PLAYER_NAME\data\vests\vest.paa) 
        };

		class ItemInfo: VestItem {
			uniformModel = "\FIG_Imperial_Guard\FIG_Cadians\FIG_CadianArmourNSPV4.p3d";
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
            Variant = "Four";
            Player = QUOTE(PLAYER_NAME_BEAUTIFIED);
        };
    };
#endif

#if VEST_MEDIUM_SET == 1
    class FIG_CadianArmour;
    class AUX_95th_Vest_Medium_One_##PLAYER_NAME : FIG_CadianArmour {
        author="95th Aux Team";
        displayName=QUOTE([95th] SQUAD_NUMBER SQUAD_NAME Vests); 
        picture=QUOTE(\z\AUX_95th_40k_IG_Main\addons\players\shared\insignias\SQUAD_KEY.paa);
        hiddenSelectionsTextures[]={
            QUOTE(\z\AUX_95th_40k_IG_Main\addons\players\PLAYER_NAME\data\vests\vest.paa) 
        };

		class ItemInfo: VestItem {
			uniformModel = "\FIG_Imperial_Guard\FIG_Cadians\FIG_CadianArmour.p3d";
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

    class FIG_CadianArmourPV2;
    class AUX_95th_Vest_Medium_Two_##PLAYER_NAME : FIG_CadianArmourPV2 {
        author="95th Aux Team";
        displayName=QUOTE([95th] SQUAD_NUMBER SQUAD_NAME Vests); 
        picture=QUOTE(\z\AUX_95th_40k_IG_Main\addons\players\shared\insignias\SQUAD_KEY.paa);
        hiddenSelectionsTextures[]={
            QUOTE(\z\AUX_95th_40k_IG_Main\addons\players\PLAYER_NAME\data\vests\vest.paa) 
        };

		class ItemInfo: VestItem {
			uniformModel = "\FIG_Imperial_Guard\FIG_Cadians\FIG_CadianArmourPV2.p3d";
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
            Variant = "Two";
            Player = QUOTE(PLAYER_NAME_BEAUTIFIED);
        };
    };

    class FIG_CadianArmourPV3;
    class AUX_95th_Vest_Medium_Three_##PLAYER_NAME : FIG_CadianArmourPV3 {
        author="95th Aux Team";
        displayName=QUOTE([95th] SQUAD_NUMBER SQUAD_NAME Vests); 
        picture=QUOTE(\z\AUX_95th_40k_IG_Main\addons\players\shared\insignias\SQUAD_KEY.paa);
        hiddenSelectionsTextures[]={
            QUOTE(\z\AUX_95th_40k_IG_Main\addons\players\PLAYER_NAME\data\vests\vest.paa) 
        };

		class ItemInfo: VestItem {
			uniformModel = "\FIG_Imperial_Guard\FIG_Cadians\FIG_CadianArmourPV3.p3d";
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
            Variant = "Three";
            Player = QUOTE(PLAYER_NAME_BEAUTIFIED);
        };
    };

    class FIG_CadianArmourPV4;
    class AUX_95th_Vest_Medium_Four_##PLAYER_NAME : FIG_CadianArmourPV4 {
        author="95th Aux Team";
        displayName=QUOTE([95th] SQUAD_NUMBER SQUAD_NAME Vests); 
        picture=QUOTE(\z\AUX_95th_40k_IG_Main\addons\players\shared\insignias\SQUAD_KEY.paa);
        hiddenSelectionsTextures[]={
            QUOTE(\z\AUX_95th_40k_IG_Main\addons\players\PLAYER_NAME\data\vests\vest.paa) 
        };

		class ItemInfo: VestItem {
			uniformModel = "\FIG_Imperial_Guard\FIG_Cadians\FIG_CadianArmourPV4.p3d";
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
            Variant = "Four";
            Player = QUOTE(PLAYER_NAME_BEAUTIFIED);
        };
    };
#endif

#if VEST_HEAVY_SET == 1
    class FIG_KasrkinArmour;
    class AUX_95th_Vest_Heavy_One_##PLAYER_NAME : FIG_KasrkinArmour {
        author="95th Aux Team";
        displayName=QUOTE([95th] SQUAD_NUMBER SQUAD_NAME Vests); 
        picture=QUOTE(\z\AUX_95th_40k_IG_Main\addons\players\shared\insignias\SQUAD_KEY.paa);
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4"};
        hiddenSelectionsTextures[] = {
            QUOTE(\z\AUX_95th_40k_IG_Main\addons\players\PLAYER_NAME\data\vests\vest.paa),
            "\FIG_Imperial_Guard\FIG_Cadians\data\CadianArmour\FIG_CadianPouches_co.paa",
            "",
            QUOTE(\z\AUX_95th_40k_IG_Main\addons\players\PLAYER_NAME\data\vests\plates.paa),
            ""
        };

        class ItemInfo: VestItem {
            containerClass = "Supply120";
            uniformModel = "\FIG_Imperial_Guard\FIG_Harakoni\FIG_HarakoniArmour.p3d";
			hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4"};
			hiddenSelectionsTextures[] = {
                QUOTE(\z\AUX_95th_40k_IG_Main\addons\players\PLAYER_NAME\data\vests\vest.paa),
                "\FIG_Imperial_Guard\FIG_Cadians\data\CadianArmour\FIG_CadianPouches_co.paa",
                "",
                QUOTE(\z\AUX_95th_40k_IG_Main\addons\players\PLAYER_NAME\data\vests\plates.paa),
                QUOTE(\z\AUX_95th_40k_IG_Main\addons\players\PLAYER_NAME\data\vests\plates.paa)
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

    class FIG_HarakoniArmour;
    class AUX_95th_Vest_Heavy_Two_##PLAYER_NAME : FIG_HarakoniArmour {
        author="95th Aux Team";
        displayName=QUOTE([95th] SQUAD_NUMBER SQUAD_NAME Vests); 
        picture=QUOTE(\z\AUX_95th_40k_IG_Main\addons\players\shared\insignias\SQUAD_KEY.paa);
        hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4"};
        hiddenSelectionsTextures[] = {
            QUOTE(\z\AUX_95th_40k_IG_Main\addons\players\PLAYER_NAME\data\vests\vest.paa),
            "\FIG_Imperial_Guard\FIG_Cadians\data\CadianArmour\FIG_CadianPouches_co.paa",
            "",
            QUOTE(\z\AUX_95th_40k_IG_Main\addons\players\PLAYER_NAME\data\vests\plates.paa),
            QUOTE(\z\AUX_95th_40k_IG_Main\addons\players\PLAYER_NAME\data\vests\plates.paa)
        };

		class ItemInfo: VestItem {
			uniformModel = "\FIG_Imperial_Guard\FIG_Harakoni\FIG_HarakoniArmour.p3d";
            containerClass = "Supply120";
            hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4"};
            hiddenSelectionsTextures[] = {
                QUOTE(\z\AUX_95th_40k_IG_Main\addons\players\PLAYER_NAME\data\vests\vest.paa),
                "\FIG_Imperial_Guard\FIG_Cadians\data\CadianArmour\FIG_CadianPouches_co.paa",
                "",
                QUOTE(\z\AUX_95th_40k_IG_Main\addons\players\PLAYER_NAME\data\vests\plates.paa),
                QUOTE(\z\AUX_95th_40k_IG_Main\addons\players\PLAYER_NAME\data\vests\plates.paa)
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
            Variant = "Two";
            Player = QUOTE(PLAYER_NAME_BEAUTIFIED);
        };
    };
#endif