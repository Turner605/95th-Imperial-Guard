#if BACKPACK_INVISIBLE == 1
    class FIG_InvisibleBackpack;
    class AUX_95th_Backpack_Invisible_##PLAYER_NAME : FIG_InvisibleBackpack {
        author="95th Aux Team";
        displayName=QUOTE([95th] SQUAD_NUMBER SQUAD_NAME Backpacks); 
	     maximumLoad=150;
        picture=QUOTE(\z\AUX_95th_40k_IG_Main\addons\players\shared\insignias\SQUAD_KEY.paa);
        // hiddenSelectionsTextures[]={
        //     QUOTE(\z\AUX_95th_40k_IG_Main\addons\players\PLAYER_NAME\data\backpacks\belt\light.paa) 
        // };
        tf_hasLRradio=0;
        class XtdGearInfo {
            model = QUOTE(DOUBLES(AUX_95th_Backpacks_Squad,SQUAD_KEY));
            Type = "Invisible";
            Variant = QUOTE(One);
            Player = QUOTE(PLAYER_NAME_BEAUTIFIED);
        };
    };
#endif

#if BACKPACK_LIGHT == 1
    class ic_elysianBackpack;
    class AUX_95th_Backpack_Light_##PLAYER_NAME : ic_elysianBackpack {
        author="95th Aux Team";
        displayName=QUOTE([95th] SQUAD_NUMBER SQUAD_NAME Backpacks); 
	     maximumLoad=150;
        picture=QUOTE(\z\AUX_95th_40k_IG_Main\addons\players\shared\insignias\SQUAD_KEY.paa);
        // hiddenSelectionsTextures[]={
        //     QUOTE(\z\AUX_95th_40k_IG_Main\addons\players\PLAYER_NAME\data\backpacks\belt\light.paa) 
        // };
        tf_hasLRradio=0;
        class XtdGearInfo {
            model = QUOTE(DOUBLES(AUX_95th_Backpacks_Squad,SQUAD_KEY));
            Type = "Light";
            Variant = QUOTE(One);
            Player = QUOTE(PLAYER_NAME_BEAUTIFIED);
        };
    };

    class FIG_CadianBackpack2Light;
    class AUX_95th_Backpack_Light_Two_##PLAYER_NAME : FIG_CadianBackpack2Light {
        author="95th Aux Team";
        displayName=QUOTE([95th] SQUAD_NUMBER SQUAD_NAME Backpacks); 
	     maximumLoad=150;
        picture=QUOTE(\z\AUX_95th_40k_IG_Main\addons\players\shared\insignias\SQUAD_KEY.paa);
        // hiddenSelectionsTextures[]={
        //     QUOTE(\z\AUX_95th_40k_IG_Main\addons\players\PLAYER_NAME\data\backpacks\belt\light.paa) 
        // };
        tf_hasLRradio=0;
        class XtdGearInfo {
            model = QUOTE(DOUBLES(AUX_95th_Backpacks_Squad,SQUAD_KEY));
            Type = "Light";
            Variant = QUOTE(Two);
            Player = QUOTE(PLAYER_NAME_BEAUTIFIED);
        };
    };
    
    class FIG_CadianBackpack2LightCable;
    class AUX_95th_Backpack_Light_Three_##PLAYER_NAME : FIG_CadianBackpack2LightCable {
        author="95th Aux Team";
        displayName=QUOTE([95th] SQUAD_NUMBER SQUAD_NAME Backpacks); 
	     maximumLoad=150;
        picture=QUOTE(\z\AUX_95th_40k_IG_Main\addons\players\shared\insignias\SQUAD_KEY.paa);
        // hiddenSelectionsTextures[]={
        //     QUOTE(\z\AUX_95th_40k_IG_Main\addons\players\PLAYER_NAME\data\backpacks\belt\light.paa) 
        // };
        tf_hasLRradio=0;
        class XtdGearInfo {
            model = QUOTE(DOUBLES(AUX_95th_Backpacks_Squad,SQUAD_KEY));
            Type = "Light";
            Variant = QUOTE(Three);
            Player = QUOTE(PLAYER_NAME_BEAUTIFIED);
        };
    };
        
    class FIG_CadianBackpack2LightKnife;
    class AUX_95th_Backpack_Light_Four_##PLAYER_NAME : FIG_CadianBackpack2LightKnife {
        author="95th Aux Team";
        displayName=QUOTE([95th] SQUAD_NUMBER SQUAD_NAME Backpacks); 
	     maximumLoad=150;
        picture=QUOTE(\z\AUX_95th_40k_IG_Main\addons\players\shared\insignias\SQUAD_KEY.paa);
        // hiddenSelectionsTextures[]={
        //     QUOTE(\z\AUX_95th_40k_IG_Main\addons\players\PLAYER_NAME\data\backpacks\belt\light.paa) 
        // };
        tf_hasLRradio=0;
        class XtdGearInfo {
            model = QUOTE(DOUBLES(AUX_95th_Backpacks_Squad,SQUAD_KEY));
            Type = "Light";
            Variant = QUOTE(Four);
            Player = QUOTE(PLAYER_NAME_BEAUTIFIED);
        };
    };
            
    class FIG_CadianBackpack2LightCableKnife;
    class AUX_95th_Backpack_Light_Five_##PLAYER_NAME : FIG_CadianBackpack2LightCableKnife {
        author="95th Aux Team";
        displayName=QUOTE([95th] SQUAD_NUMBER SQUAD_NAME Backpacks); 
	     maximumLoad=150;
        picture=QUOTE(\z\AUX_95th_40k_IG_Main\addons\players\shared\insignias\SQUAD_KEY.paa);
        // hiddenSelectionsTextures[]={
        //     QUOTE(\z\AUX_95th_40k_IG_Main\addons\players\PLAYER_NAME\data\backpacks\belt\light.paa) 
        // };
        tf_hasLRradio=0;
        class XtdGearInfo {
            model = QUOTE(DOUBLES(AUX_95th_Backpacks_Squad,SQUAD_KEY));
            Type = "Light";
            Variant = QUOTE(Five);
            Player = QUOTE(PLAYER_NAME_BEAUTIFIED);
        };
    };
                
    class FIG_ChaosBackpack;
    class AUX_95th_Backpack_Light_Six_##PLAYER_NAME : FIG_ChaosBackpack {
        author="95th Aux Team";
        displayName=QUOTE([95th] SQUAD_NUMBER SQUAD_NAME Backpacks); 
	     maximumLoad=150;
        picture=QUOTE(\z\AUX_95th_40k_IG_Main\addons\players\shared\insignias\SQUAD_KEY.paa);
        // hiddenSelectionsTextures[]={
        //     QUOTE(\z\AUX_95th_40k_IG_Main\addons\players\PLAYER_NAME\data\backpacks\belt\light.paa) 
        // };
        tf_hasLRradio=0;
        class XtdGearInfo {
            model = QUOTE(DOUBLES(AUX_95th_Backpacks_Squad,SQUAD_KEY));
            Type = "Light";
            Variant = QUOTE(Six);
            Player = QUOTE(PLAYER_NAME_BEAUTIFIED);
        };
    };
#endif

#if BACKPACK_STANDARD == 1
    class FIG_CadianBackpack2;
    class AUX_95th_Backpack_Standard_One_##PLAYER_NAME : FIG_CadianBackpack2 {
        author="95th Aux Team";
        displayName=QUOTE([95th] SQUAD_NUMBER SQUAD_NAME Backpacks); 
	     maximumLoad=150;
        picture=QUOTE(\z\AUX_95th_40k_IG_Main\addons\players\shared\insignias\SQUAD_KEY.paa);
        // hiddenSelectionsTextures[]={
        //     QUOTE(\z\AUX_95th_40k_IG_Main\addons\players\PLAYER_NAME\data\backpacks\belt\light.paa) 
        // };
        tf_hasLRradio=0;
        class XtdGearInfo {
            model = QUOTE(DOUBLES(AUX_95th_Backpacks_Squad,SQUAD_KEY));
            Type = "Standard";
            Variant = QUOTE(One);
            Player = QUOTE(PLAYER_NAME_BEAUTIFIED);
        };
    };

    class FIG_CadianBackpack2BRSH;
    class AUX_95th_Backpack_Standard_Two_##PLAYER_NAME : FIG_CadianBackpack2BRSH {
        author="95th Aux Team";
        displayName=QUOTE([95th] SQUAD_NUMBER SQUAD_NAME Backpacks); 
	     maximumLoad=150;
        picture=QUOTE(\z\AUX_95th_40k_IG_Main\addons\players\shared\insignias\SQUAD_KEY.paa);
        // hiddenSelectionsTextures[]={
        //     QUOTE(\z\AUX_95th_40k_IG_Main\addons\players\PLAYER_NAME\data\backpacks\belt\light.paa) 
        // };
        tf_hasLRradio=0;
        class XtdGearInfo {
            model = QUOTE(DOUBLES(AUX_95th_Backpacks_Squad,SQUAD_KEY));
            Type = "Standard";
            Variant = QUOTE(Two);
            Player = QUOTE(PLAYER_NAME_BEAUTIFIED);
        };
    };

    class FIG_CadianBackpack2BR;
    class AUX_95th_Backpack_Standard_Three_##PLAYER_NAME : FIG_CadianBackpack2BR {
        author="95th Aux Team";
        displayName=QUOTE([95th] SQUAD_NUMBER SQUAD_NAME Backpacks); 
	     maximumLoad=150;
        picture=QUOTE(\z\AUX_95th_40k_IG_Main\addons\players\shared\insignias\SQUAD_KEY.paa);
        // hiddenSelectionsTextures[]={
        //     QUOTE(\z\AUX_95th_40k_IG_Main\addons\players\PLAYER_NAME\data\backpacks\belt\light.paa) 
        // };
        tf_hasLRradio=0;
        class XtdGearInfo {
            model = QUOTE(DOUBLES(AUX_95th_Backpacks_Squad,SQUAD_KEY));
            Type = "Standard";
            Variant = QUOTE(Three);
            Player = QUOTE(PLAYER_NAME_BEAUTIFIED);
        };
    };
    
    class FIG_CadianBackpack2BRSHK;
    class AUX_95th_Backpack_Standard_Four_##PLAYER_NAME : FIG_CadianBackpack2BRSHK {
        author="95th Aux Team";
        displayName=QUOTE([95th] SQUAD_NUMBER SQUAD_NAME Backpacks); 
	     maximumLoad=150;
        picture=QUOTE(\z\AUX_95th_40k_IG_Main\addons\players\shared\insignias\SQUAD_KEY.paa);
        // hiddenSelectionsTextures[]={
        //     QUOTE(\z\AUX_95th_40k_IG_Main\addons\players\PLAYER_NAME\data\backpacks\belt\light.paa) 
        // };
        tf_hasLRradio=0;
        class XtdGearInfo {
            model = QUOTE(DOUBLES(AUX_95th_Backpacks_Squad,SQUAD_KEY));
            Type = "Standard";
            Variant = QUOTE(Four);
            Player = QUOTE(PLAYER_NAME_BEAUTIFIED);
        };
    };
        
    class FIG_CadianBackpack2K;
    class AUX_95th_Backpack_Standard_Five_##PLAYER_NAME : FIG_CadianBackpack2K {
        author="95th Aux Team";
        displayName=QUOTE([95th] SQUAD_NUMBER SQUAD_NAME Backpacks); 
	     maximumLoad=150;
        picture=QUOTE(\z\AUX_95th_40k_IG_Main\addons\players\shared\insignias\SQUAD_KEY.paa);
        // hiddenSelectionsTextures[]={
        //     QUOTE(\z\AUX_95th_40k_IG_Main\addons\players\PLAYER_NAME\data\backpacks\belt\light.paa) 
        // };
        tf_hasLRradio=0;
        class XtdGearInfo {
            model = QUOTE(DOUBLES(AUX_95th_Backpacks_Squad,SQUAD_KEY));
            Type = "Standard";
            Variant = QUOTE(Five);
            Player = QUOTE(PLAYER_NAME_BEAUTIFIED);
        };
    };
            
    class FIG_CadianBackpack2KSH;
    class AUX_95th_Backpack_Standard_Six_##PLAYER_NAME : FIG_CadianBackpack2KSH {
        author="95th Aux Team";
        displayName=QUOTE([95th] SQUAD_NUMBER SQUAD_NAME Backpacks); 
	     maximumLoad=150;
        picture=QUOTE(\z\AUX_95th_40k_IG_Main\addons\players\shared\insignias\SQUAD_KEY.paa);
        // hiddenSelectionsTextures[]={
        //     QUOTE(\z\AUX_95th_40k_IG_Main\addons\players\PLAYER_NAME\data\backpacks\belt\light.paa) 
        // };
        tf_hasLRradio=0;
        class XtdGearInfo {
            model = QUOTE(DOUBLES(AUX_95th_Backpacks_Squad,SQUAD_KEY));
            Type = "Standard";
            Variant = QUOTE(Six);
            Player = QUOTE(PLAYER_NAME_BEAUTIFIED);
        };
    };
#endif

#if BACKPACK_MEDIC == 1
    class FIG_CadianBackpack2Medicae;
    class AUX_95th_Backpack_Medic_##PLAYER_NAME : FIG_CadianBackpack2Medicae {
        author="95th Aux Team";
        displayName=QUOTE([95th] SQUAD_NUMBER SQUAD_NAME Backpacks); 
	     maximumLoad=300;
        picture=QUOTE(\z\AUX_95th_40k_IG_Main\addons\players\shared\insignias\SQUAD_KEY.paa);
        // hiddenSelectionsTextures[]={
        //     QUOTE(\z\AUX_95th_40k_IG_Main\addons\players\PLAYER_NAME\data\backpacks\belt\light.paa) 
        // };
        tf_hasLRradio=0;
        class XtdGearInfo {
            model = QUOTE(DOUBLES(AUX_95th_Backpacks_Squad,SQUAD_KEY));
            Type = "Medic";
            Variant = QUOTE(One);
            Player = QUOTE(PLAYER_NAME_BEAUTIFIED);
        };
    };
#endif

#if BACKPACK_HEAVY == 1
    class FIG_CadianBackpack2BRSHP;
    class AUX_95th_Backpack_Heavy_##PLAYER_NAME : FIG_CadianBackpack2BRSHP {
        author="95th Aux Team";
        displayName=QUOTE([95th] SQUAD_NUMBER SQUAD_NAME Backpacks); 
	     maximumLoad=300;
        picture=QUOTE(\z\AUX_95th_40k_IG_Main\addons\players\shared\insignias\SQUAD_KEY.paa);
        // hiddenSelectionsTextures[]={
        //     QUOTE(\z\AUX_95th_40k_IG_Main\addons\players\PLAYER_NAME\data\backpacks\belt\light.paa) 
        // };
        tf_hasLRradio=0;
        class XtdGearInfo {
            model = QUOTE(DOUBLES(AUX_95th_Backpacks_Squad,SQUAD_KEY));
            Type = "Heavy";
            Variant = QUOTE(One);
            Player = QUOTE(PLAYER_NAME_BEAUTIFIED);
        };
    };

    class FIG_CadianBackpack2BRSHPK;
    class AUX_95th_Backpack_Heavy_Two_##PLAYER_NAME : FIG_CadianBackpack2BRSHPK {
        author="95th Aux Team";
        displayName=QUOTE([95th] SQUAD_NUMBER SQUAD_NAME Backpacks); 
	     maximumLoad=300;
        picture=QUOTE(\z\AUX_95th_40k_IG_Main\addons\players\shared\insignias\SQUAD_KEY.paa);
        // hiddenSelectionsTextures[]={
        //     QUOTE(\z\AUX_95th_40k_IG_Main\addons\players\PLAYER_NAME\data\backpacks\belt\light.paa) 
        // };
        tf_hasLRradio=0;
        class XtdGearInfo {
            model = QUOTE(DOUBLES(AUX_95th_Backpacks_Squad,SQUAD_KEY));
            Type = "Heavy";
            Variant = QUOTE(Two);
            Player = QUOTE(PLAYER_NAME_BEAUTIFIED);
        };
    };
#endif

#if BACKPACK_POWER == 1
    class FIG_PowerpackMoebianChaos;
    class AUX_95th_Backpack_Power_One_##PLAYER_NAME : FIG_PowerpackMoebianChaos {
        author="95th Aux Team";
        displayName=QUOTE([95th] SQUAD_NUMBER SQUAD_NAME Backpacks); 
	     maximumLoad=150;
        picture=QUOTE(\z\AUX_95th_40k_IG_Main\addons\players\shared\insignias\SQUAD_KEY.paa);
        // hiddenSelectionsTextures[]={
        //     QUOTE(\z\AUX_95th_40k_IG_Main\addons\players\PLAYER_NAME\data\backpacks\belt\light.paa) 
        // };
        tf_hasLRradio=0;
        class XtdGearInfo {
            model = QUOTE(DOUBLES(AUX_95th_Backpacks_Squad,SQUAD_KEY));
            Type = "Power";
            Variant = QUOTE(One);
            Player = QUOTE(PLAYER_NAME_BEAUTIFIED);
        };
    };

    class FIG_PowerpackWCableMoebianChaos;
    class AUX_95th_Backpack_Power_Two_##PLAYER_NAME : FIG_PowerpackWCableMoebianChaos {
        author="95th Aux Team";
        displayName=QUOTE([95th] SQUAD_NUMBER SQUAD_NAME Backpacks); 
	     maximumLoad=150;
        picture=QUOTE(\z\AUX_95th_40k_IG_Main\addons\players\shared\insignias\SQUAD_KEY.paa);
        // hiddenSelectionsTextures[]={
        //     QUOTE(\z\AUX_95th_40k_IG_Main\addons\players\PLAYER_NAME\data\backpacks\belt\light.paa) 
        // };
        tf_hasLRradio=0;
        class XtdGearInfo {
            model = QUOTE(DOUBLES(AUX_95th_Backpacks_Squad,SQUAD_KEY));
            Type = "Power";
            Variant = QUOTE(Two);
            Player = QUOTE(PLAYER_NAME_BEAUTIFIED);
        };
    };
#endif

#if BACKPACK_CHEST == 1
    class FIG_BandolierBP;
    class AUX_95th_Backpack_Chest_One_##PLAYER_NAME : FIG_BandolierBP {
        author="95th Aux Team";
        displayName=QUOTE([95th] SQUAD_NUMBER SQUAD_NAME Backpacks); 
	     maximumLoad=150;
        picture=QUOTE(\z\AUX_95th_40k_IG_Main\addons\players\shared\insignias\SQUAD_KEY.paa);
        // hiddenSelectionsTextures[]={
        //     QUOTE(\z\AUX_95th_40k_IG_Main\addons\players\PLAYER_NAME\data\backpacks\belt\light.paa) 
        // };
        tf_hasLRradio=0;
        class XtdGearInfo {
            model = QUOTE(DOUBLES(AUX_95th_Backpacks_Squad,SQUAD_KEY));
            Type = "Chest";
            Variant = QUOTE(One);
            Player = QUOTE(PLAYER_NAME_BEAUTIFIED);
        };
    };

    class FIG_BandolierLPBP;
    class AUX_95th_Backpack_Chest_Two_##PLAYER_NAME : FIG_BandolierLPBP {
        author="95th Aux Team";
        displayName=QUOTE([95th] SQUAD_NUMBER SQUAD_NAME Backpacks); 
	     maximumLoad=150;
        picture=QUOTE(\z\AUX_95th_40k_IG_Main\addons\players\shared\insignias\SQUAD_KEY.paa);
        // hiddenSelectionsTextures[]={
        //     QUOTE(\z\AUX_95th_40k_IG_Main\addons\players\PLAYER_NAME\data\backpacks\belt\light.paa) 
        // };
        tf_hasLRradio=0;
        class XtdGearInfo {
            model = QUOTE(DOUBLES(AUX_95th_Backpacks_Squad,SQUAD_KEY));
            Type = "Chest";
            Variant = QUOTE(Two);
            Player = QUOTE(PLAYER_NAME_BEAUTIFIED);
        };
    };
#endif

#if BACKPACK_RTO == 1
    class FIG_CadianVoxBackpackMoebianChaos;
    class AUX_95th_Backpack_RTO_##PLAYER_NAME : FIG_CadianVoxBackpackMoebianChaos {
        author="95th Aux Team";
        displayName=QUOTE([95th] SQUAD_NUMBER SQUAD_NAME Backpacks); 
	    maximumLoad=100;
        picture=QUOTE(\z\AUX_95th_40k_IG_Main\addons\players\shared\insignias\SQUAD_KEY.paa);
        // hiddenSelectionsTextures[]={
        //     QUOTE(\z\AUX_95th_40k_IG_Main\addons\players\PLAYER_NAME\data\backpacks\belt\light.paa) 
        // };
        class XtdGearInfo {
            model = QUOTE(DOUBLES(AUX_95th_Backpacks_Squad,SQUAD_KEY));
            Type = "RTO";
            Variant = QUOTE(One);
            Player = QUOTE(PLAYER_NAME_BEAUTIFIED);
        };
        tf_encryptionCode="tf_west_radio_code";
        tf_hasLRradio=1;
        tf_range=16000;
        tf_subtype="digital_lr";
    };
#endif