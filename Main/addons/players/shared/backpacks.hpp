#if BACKPACK_INVISIBLE == 1
    class FIG_InvisibleBackpack;
    class AUX_95th_Backpack_Invisible_##PLAYER_NAME : FIG_InvisibleBackpack {
        author="95th Aux Team";
        displayName=QUOTE([95th] SQUAD_NUMBER SQUAD_NAME Backpacks); 
	    // maximumLoad=150;
        picture=QUOTE(\z\AUX_95th_40k_IG_Main\addons\players\shared\insignias\SQUAD_KEY.paa);
        // hiddenSelectionsTextures[]={
        //     QUOTE(\z\AUX_95th_40k_IG_Main\addons\players\PLAYER_NAME\data\backpacks\belt\light.paa) 
        // };
        tf_hasLRradio=0;
        class XtdGearInfo {
            model = QUOTE(DOUBLES(AUX_95th_Backpacks_Squad,SQUAD_KEY));
            Type = "Invisible";
            Variant = QUOTE(1);
            Player = QUOTE(PLAYER_NAME_BEAUTIFIED);
        };
    };
#endif

#if BACKPACK_LIGHT == 1
    class ic_elysianBackpack;
    class AUX_95th_Backpack_Light_##PLAYER_NAME : ic_elysianBackpack {
        author="95th Aux Team";
        displayName=QUOTE([95th] SQUAD_NUMBER SQUAD_NAME Backpacks); 
	    // maximumLoad=150;
        picture=QUOTE(\z\AUX_95th_40k_IG_Main\addons\players\shared\insignias\SQUAD_KEY.paa);
        // hiddenSelectionsTextures[]={
        //     QUOTE(\z\AUX_95th_40k_IG_Main\addons\players\PLAYER_NAME\data\backpacks\belt\light.paa) 
        // };
        tf_hasLRradio=0;
        class XtdGearInfo {
            model = QUOTE(DOUBLES(AUX_95th_Backpacks_Squad,SQUAD_KEY));
            Type = "Light";
            Variant = QUOTE(1);
            Player = QUOTE(PLAYER_NAME_BEAUTIFIED);
        };
    };
#endif

#if BACKPACK_STANDARD == 1
    class ic_CadianBackpackV1;
    class AUX_95th_Backpack_Standard_One_##PLAYER_NAME : ic_CadianBackpackV1 {
        author="95th Aux Team";
        displayName=QUOTE([95th] SQUAD_NUMBER SQUAD_NAME Backpacks); 
	    // maximumLoad=150;
        picture=QUOTE(\z\AUX_95th_40k_IG_Main\addons\players\shared\insignias\SQUAD_KEY.paa);
        // hiddenSelectionsTextures[]={
        //     QUOTE(\z\AUX_95th_40k_IG_Main\addons\players\PLAYER_NAME\data\backpacks\belt\light.paa) 
        // };
        tf_hasLRradio=0;
        class XtdGearInfo {
            model = QUOTE(DOUBLES(AUX_95th_Backpacks_Squad,SQUAD_KEY));
            Type = "Standard";
            Variant = QUOTE(1);
            Player = QUOTE(PLAYER_NAME_BEAUTIFIED);
        };
    };

    class ic_CadianBackpackV2;
    class AUX_95th_Backpack_Standard_Two_##PLAYER_NAME : ic_CadianBackpackV2 {
        author="95th Aux Team";
        displayName=QUOTE([95th] SQUAD_NUMBER SQUAD_NAME Backpacks); 
	    // maximumLoad=150;
        picture=QUOTE(\z\AUX_95th_40k_IG_Main\addons\players\shared\insignias\SQUAD_KEY.paa);
        // hiddenSelectionsTextures[]={
        //     QUOTE(\z\AUX_95th_40k_IG_Main\addons\players\PLAYER_NAME\data\backpacks\belt\light.paa) 
        // };
        tf_hasLRradio=0;
        class XtdGearInfo {
            model = QUOTE(DOUBLES(AUX_95th_Backpacks_Squad,SQUAD_KEY));
            Type = "Standard";
            Variant = QUOTE(2);
            Player = QUOTE(PLAYER_NAME_BEAUTIFIED);
        };
    };

    class ic_CadianBackpackV4;
    class AUX_95th_Backpack_Standard_Three_##PLAYER_NAME : ic_CadianBackpackV4 {
        author="95th Aux Team";
        displayName=QUOTE([95th] SQUAD_NUMBER SQUAD_NAME Backpacks); 
	    // maximumLoad=150;
        picture=QUOTE(\z\AUX_95th_40k_IG_Main\addons\players\shared\insignias\SQUAD_KEY.paa);
        // hiddenSelectionsTextures[]={
        //     QUOTE(\z\AUX_95th_40k_IG_Main\addons\players\PLAYER_NAME\data\backpacks\belt\light.paa) 
        // };
        tf_hasLRradio=0;
        class XtdGearInfo {
            model = QUOTE(DOUBLES(AUX_95th_Backpacks_Squad,SQUAD_KEY));
            Type = "Standard";
            Variant = QUOTE(3);
            Player = QUOTE(PLAYER_NAME_BEAUTIFIED);
        };
    };
#endif

#if BACKPACK_MEDIC == 1
    class ic_CadianBackpackV7;
    class AUX_95th_Backpack_Medic_##PLAYER_NAME : ic_CadianBackpackV7 {
        author="95th Aux Team";
        displayName=QUOTE([95th] SQUAD_NUMBER SQUAD_NAME Backpacks); 
	    // maximumLoad=150;
        picture=QUOTE(\z\AUX_95th_40k_IG_Main\addons\players\shared\insignias\SQUAD_KEY.paa);
        // hiddenSelectionsTextures[]={
        //     QUOTE(\z\AUX_95th_40k_IG_Main\addons\players\PLAYER_NAME\data\backpacks\belt\light.paa) 
        // };
        tf_hasLRradio=0;
        class XtdGearInfo {
            model = QUOTE(DOUBLES(AUX_95th_Backpacks_Squad,SQUAD_KEY));
            Type = "Medic";
            Variant = QUOTE(1);
            Player = QUOTE(PLAYER_NAME_BEAUTIFIED);
        };
    };
#endif

#if BACKPACK_HEAVY == 1
    class ic_CadianBackpackV8;
    class AUX_95th_Backpack_Heavy_##PLAYER_NAME : ic_CadianBackpackV8 {
        author="95th Aux Team";
        displayName=QUOTE([95th] SQUAD_NUMBER SQUAD_NAME Backpacks); 
	    // maximumLoad=150;
        picture=QUOTE(\z\AUX_95th_40k_IG_Main\addons\players\shared\insignias\SQUAD_KEY.paa);
        // hiddenSelectionsTextures[]={
        //     QUOTE(\z\AUX_95th_40k_IG_Main\addons\players\PLAYER_NAME\data\backpacks\belt\light.paa) 
        // };
        tf_hasLRradio=0;
        class XtdGearInfo {
            model = QUOTE(DOUBLES(AUX_95th_Backpacks_Squad,SQUAD_KEY));
            Type = "Heavy";
            Variant = QUOTE(1);
            Player = QUOTE(PLAYER_NAME_BEAUTIFIED);
        };
    };
#endif

#if BACKPACK_ENGINEER == 1
    class ic_CarryAll;
    class AUX_95th_Backpack_Engineer_##PLAYER_NAME : ic_CarryAll {
        author="95th Aux Team";
        displayName=QUOTE([95th] SQUAD_NUMBER SQUAD_NAME Backpacks); 
	    // maximumLoad=150;
        picture=QUOTE(\z\AUX_95th_40k_IG_Main\addons\players\shared\insignias\SQUAD_KEY.paa);
        // hiddenSelectionsTextures[]={
        //     QUOTE(\z\AUX_95th_40k_IG_Main\addons\players\PLAYER_NAME\data\backpacks\belt\light.paa) 
        // };
        tf_hasLRradio=0;
        class XtdGearInfo {
            model = QUOTE(DOUBLES(AUX_95th_Backpacks_Squad,SQUAD_KEY));
            Type = "Engineer";
            Variant = QUOTE(1);
            Player = QUOTE(PLAYER_NAME_BEAUTIFIED);
        };
    };
#endif

#if BACKPACK_AT == 1
    class ic_cad_RocketPack_NoStraps;
    class AUX_95th_Backpack_AT_##PLAYER_NAME : ic_cad_RocketPack_NoStraps {
        author="95th Aux Team";
        displayName=QUOTE([95th] SQUAD_NUMBER SQUAD_NAME Backpacks); 
	    // maximumLoad=150;
        picture=QUOTE(\z\AUX_95th_40k_IG_Main\addons\players\shared\insignias\SQUAD_KEY.paa);
        // hiddenSelectionsTextures[]={
        //     QUOTE(\z\AUX_95th_40k_IG_Main\addons\players\PLAYER_NAME\data\backpacks\belt\light.paa) 
        // };
        tf_hasLRradio=0;
        class XtdGearInfo {
            model = QUOTE(DOUBLES(AUX_95th_Backpacks_Squad,SQUAD_KEY));
            Type = "AT";
            Variant = QUOTE(1);
            Player = QUOTE(PLAYER_NAME_BEAUTIFIED);
        };
    };
#endif

#if BACKPACK_RTO == 1
    class TIOW_IG_Vox_Caster;
    class AUX_95th_Backpack_RTO_##PLAYER_NAME : TIOW_IG_Vox_Caster {
        author="95th Aux Team";
        displayName=QUOTE([95th] SQUAD_NUMBER SQUAD_NAME Backpacks); 
	    // maximumLoad=150;
        picture=QUOTE(\z\AUX_95th_40k_IG_Main\addons\players\shared\insignias\SQUAD_KEY.paa);
        // hiddenSelectionsTextures[]={
        //     QUOTE(\z\AUX_95th_40k_IG_Main\addons\players\PLAYER_NAME\data\backpacks\belt\light.paa) 
        // };
        tf_hasLRradio=0;
        class XtdGearInfo {
            model = QUOTE(DOUBLES(AUX_95th_Backpacks_Squad,SQUAD_KEY));
            Type = "RTO";
            Variant = QUOTE(1);
            Player = QUOTE(PLAYER_NAME_BEAUTIFIED);
        };
    };
#endif