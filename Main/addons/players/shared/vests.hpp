class ItemInfo;

#if VEST_LIGHT_SET == 1
    class FIG_CadianArmourNS;
    class FIG_CadianArmourNSPV2;
    class FIG_CadianArmourNSPV3;
    class FIG_CadianArmourNSPV4;

    class AUX_95th_Vest_Light_One_##PLAYER_NAME : FIG_CadianArmourNS {
        author="95th Aux Team";
        displayName=QUOTE([95th] SQUAD_NUMBER SQUAD_NAME Vests); 
        picture=QUOTE(\z\AUX_95th_40k_IG_Main\addons\players\shared\insignias\SQUAD_KEY.paa);
        hiddenSelectionsTextures[]={
            QUOTE(\z\AUX_95th_40k_IG_Main\addons\players\PLAYER_NAME\data\vests\vest.paa) 
        };

		class ItemInfo: ItemInfo {
			uniformModel = "\FIG_Imperial_Guard\FIG_Cadians\FIG_CadianArmourNS.p3d";
            containerClass = "Supply120";
		    hiddenSelections[] = {"camo"};
			hiddenSelectionsTextures[] = {
                QUOTE(\z\AUX_95th_40k_IG_Main\addons\players\PLAYER_NAME\data\vests\vest.paa) 
            };
		};

        class XtdGearInfo {
            model = QUOTE(DOUBLES(AUX_95th_Vests_Squad,SQUAD_KEY));
            Type = "Light";
            Variant = "One";
            Player = QUOTE(PLAYER_NAME_BEAUTIFIED);
        };
    };

    class AUX_95th_Vest_Light_Two_##PLAYER_NAME : FIG_CadianArmourNSPV2 {
        author="95th Aux Team";
        displayName=QUOTE([95th] SQUAD_NUMBER SQUAD_NAME Vests); 
        picture=QUOTE(\z\AUX_95th_40k_IG_Main\addons\players\shared\insignias\SQUAD_KEY.paa);
        hiddenSelectionsTextures[]={
            QUOTE(\z\AUX_95th_40k_IG_Main\addons\players\PLAYER_NAME\data\vests\vest.paa) 
        };

		class ItemInfo: ItemInfo {
			uniformModel = "\FIG_Imperial_Guard\FIG_Cadians\FIG_CadianArmourNSPV2.p3d";
            containerClass = "Supply120";
		    hiddenSelections[] = {"camo"};
			hiddenSelectionsTextures[] = {
                QUOTE(\z\AUX_95th_40k_IG_Main\addons\players\PLAYER_NAME\data\vests\vest.paa) 
            };
		};

        class XtdGearInfo {
            model = QUOTE(DOUBLES(AUX_95th_Vests_Squad,SQUAD_KEY));
            Type = "Light";
            Variant = "Two";
            Player = QUOTE(PLAYER_NAME_BEAUTIFIED);
        };
    };
#endif

#if VEST_MEDIUM_SET == 1
    class FIG_CadianArmour;
    class FIG_CadianArmourPV2;
    class FIG_CadianArmourPV3;
    class FIG_CadianArmourPV4;
    
#endif

#if VEST_MEDIUM_SET == 1
    class FIG_KasrkinArmour;
    class FIG_HarakoniArmour;
    
#endif
    
    