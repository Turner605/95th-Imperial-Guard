#if UNIFORM_BASIC == 1
    class FIG_CadianUniformV1_U_B;
    class AUX_95th_Uniform_Unarmoured_##PLAYER_NAME : FIG_CadianUniformV1_U_B {
        scope = 2;
        scopeArsenal = 2;
        author="95th Aux Team";
        picture=QUOTE(\z\AUX_95th_40k_IG_Main\addons\players\shared\insignias\SQUAD_KEY.paa);
        displayName=QUOTE([95th] SQUAD_NUMBER SQUAD_NAME Uniforms); 
        class ItemInfo: UniformItem {
            uniformClass=QUOTE(DOUBLES(AUX_95th_Unit_Unarmoured,PLAYER_NAME));
            uniformModel="-";
            containerClass="Supply150";
            mass=40;
        };
        class XtdGearInfo {
            model = QUOTE(DOUBLES(AUX_95th_Uniform_Squad,SQUAD_KEY));
            Sleeves = "Down";
            Camo = "Standard";
            Type = QUOTE(Unarmoured);
            Player = QUOTE(PLAYER_NAME_BEAUTIFIED);
        };
    };

    class AUX_95th_Uniform_Unarmoured_Snow_##PLAYER_NAME : AUX_95th_Uniform_Unarmoured_##PLAYER_NAME {
        class ItemInfo: ItemInfo {uniformClass=QUOTE(DOUBLES(AUX_95th_Unit_Unarmoured_Snow,PLAYER_NAME));};
        class XtdGearInfo: XtdGearInfo {Camo = "Snow";};
    };

    class FIG_CadianUniformV1Rolled_U_B;
    class AUX_95th_Uniform_Unarmoured_Rolled_##PLAYER_NAME : FIG_CadianUniformV1Rolled_U_B {
        scope = 2;
        scopeArsenal = 2;
        author="95th Aux Team";
        picture=QUOTE(\z\AUX_95th_40k_IG_Main\addons\players\shared\insignias\SQUAD_KEY.paa);
        displayName=QUOTE([95th] SQUAD_NUMBER SQUAD_NAME Uniforms); 
        class ItemInfo: UniformItem {
            uniformClass=QUOTE(DOUBLES(AUX_95th_Unit_Unarmoured_Rolled,PLAYER_NAME));
            uniformModel="-";
            containerClass="Supply150";
            mass=40;
        };
        class XtdGearInfo {
            model = QUOTE(DOUBLES(AUX_95th_Uniform_Squad,SQUAD_KEY));
            Sleeves = "Rolled";
            Camo = "Standard";
            Type = QUOTE(Unarmoured);
            Player = QUOTE(PLAYER_NAME_BEAUTIFIED);
        };
    };

    class AUX_95th_Uniform_Unarmoured_Rolled_Snow_##PLAYER_NAME : AUX_95th_Uniform_Unarmoured_Rolled_##PLAYER_NAME {
        class ItemInfo: ItemInfo {uniformClass=QUOTE(DOUBLES(AUX_95th_Unit_Unarmoured_Rolled_Snow,PLAYER_NAME));};
        class XtdGearInfo: XtdGearInfo {Camo = "Snow";};
    };

    class FIG_CadianUniformV2_U_B;
    class AUX_95th_Uniform_Light_##PLAYER_NAME : FIG_CadianUniformV2_U_B {
        scope = 2;
        scopeArsenal = 2;
        author="95th Aux Team";
        picture=QUOTE(\z\AUX_95th_40k_IG_Main\addons\players\shared\insignias\SQUAD_KEY.paa);
        displayName=QUOTE([95th] SQUAD_NUMBER SQUAD_NAME Uniforms); 
        class ItemInfo: UniformItem {
            uniformClass=QUOTE(DOUBLES(AUX_95th_Unit_Light,PLAYER_NAME));
            uniformModel="-";
            containerClass="Supply150";
            mass=40;
        };
        class XtdGearInfo {
            model = QUOTE(DOUBLES(AUX_95th_Uniform_Squad,SQUAD_KEY));
            Sleeves = "Down";
            Camo = "Standard";
            Type = QUOTE(Light);
            Player = QUOTE(PLAYER_NAME_BEAUTIFIED);
        };
    };

    class AUX_95th_Uniform_Light_Snow_##PLAYER_NAME : AUX_95th_Uniform_Light_##PLAYER_NAME {
        class ItemInfo: ItemInfo {uniformClass=QUOTE(DOUBLES(AUX_95th_Unit_Light_Snow,PLAYER_NAME));};
        class XtdGearInfo: XtdGearInfo {Camo = "Snow";};
    };

    class FIG_CadianUniformV2Rolled_U_B;
    class AUX_95th_Uniform_Light_Rolled_##PLAYER_NAME : FIG_CadianUniformV2Rolled_U_B {
        scope = 2;
        scopeArsenal = 2;
        author="95th Aux Team";
        picture=QUOTE(\z\AUX_95th_40k_IG_Main\addons\players\shared\insignias\SQUAD_KEY.paa);
        displayName=QUOTE([95th] SQUAD_NUMBER SQUAD_NAME Uniforms); 
        class ItemInfo: UniformItem {
            uniformClass=QUOTE(DOUBLES(AUX_95th_Unit_Light_Rolled,PLAYER_NAME));
            uniformModel="-";
            containerClass="Supply150";
            mass=40;
        };
        class XtdGearInfo {
            model = QUOTE(DOUBLES(AUX_95th_Uniform_Squad,SQUAD_KEY));
            Sleeves = "Rolled";
            Camo = "Standard";
            Type = QUOTE(Light);
            Player = QUOTE(PLAYER_NAME_BEAUTIFIED);
        };
    };
    
    class AUX_95th_Uniform_Light_Rolled_Snow_##PLAYER_NAME : AUX_95th_Uniform_Light_Rolled_##PLAYER_NAME {
        class ItemInfo: ItemInfo {uniformClass=QUOTE(DOUBLES(AUX_95th_Unit_Light_Rolled_Snow,PLAYER_NAME));};
        class XtdGearInfo: XtdGearInfo {Camo = "Snow";};
    };

    class FIG_CadianUniformV3_U_B;
    class AUX_95th_Uniform_Medium_##PLAYER_NAME : FIG_CadianUniformV3_U_B {
        scope = 2;
        scopeArsenal = 2;
        author="95th Aux Team";
        picture=QUOTE(\z\AUX_95th_40k_IG_Main\addons\players\shared\insignias\SQUAD_KEY.paa);
        displayName=QUOTE([95th] SQUAD_NUMBER SQUAD_NAME Uniforms); 
        class ItemInfo: UniformItem {
            uniformClass=QUOTE(DOUBLES(AUX_95th_Unit_Medium,PLAYER_NAME));
            uniformModel="-";
            containerClass="Supply150";
            mass=40;
        };
        class XtdGearInfo {
            model = QUOTE(DOUBLES(AUX_95th_Uniform_Squad,SQUAD_KEY));
            Sleeves = "Down";
            Camo = "Standard";
            Type = QUOTE(Medium);
            Player = QUOTE(PLAYER_NAME_BEAUTIFIED);
        };
    };
    
    class AUX_95th_Uniform_Medium_Snow_##PLAYER_NAME : AUX_95th_Uniform_Medium_##PLAYER_NAME {
        class ItemInfo: ItemInfo {uniformClass=QUOTE(DOUBLES(AUX_95th_Unit_Medium_Snow,PLAYER_NAME));};
        class XtdGearInfo: XtdGearInfo {Camo = "Snow";};
    };

    class FIG_CadianUniformV3Rolled_U_B;
    class AUX_95th_Uniform_Medium_Rolled_##PLAYER_NAME : FIG_CadianUniformV3Rolled_U_B {
        scope = 2;
        scopeArsenal = 2;
        author="95th Aux Team";
        picture=QUOTE(\z\AUX_95th_40k_IG_Main\addons\players\shared\insignias\SQUAD_KEY.paa);
        displayName=QUOTE([95th] SQUAD_NUMBER SQUAD_NAME Uniforms); 
        class ItemInfo: UniformItem {
            uniformClass=QUOTE(DOUBLES(AUX_95th_Unit_Medium_Rolled,PLAYER_NAME));
            uniformModel="-";
            containerClass="Supply150";
            mass=40;
        };
        class XtdGearInfo {
            model = QUOTE(DOUBLES(AUX_95th_Uniform_Squad,SQUAD_KEY));
            Sleeves = "Rolled";
            Camo = "Standard";
            Type = QUOTE(Medium);
            Player = QUOTE(PLAYER_NAME_BEAUTIFIED);
        };
    };
    
    class AUX_95th_Uniform_Medium_Rolled_Snow_##PLAYER_NAME : AUX_95th_Uniform_Medium_Rolled_##PLAYER_NAME {
        class ItemInfo: ItemInfo {uniformClass=QUOTE(DOUBLES(AUX_95th_Unit_Medium_Rolled_Snow,PLAYER_NAME));};
        class XtdGearInfo: XtdGearInfo {Camo = "Snow";};
    };

    class FIG_CadianUniformV4_U_B;
    class AUX_95th_Uniform_Heavy_##PLAYER_NAME : FIG_CadianUniformV4_U_B {
        scope = 2;
        scopeArsenal = 2;
        author="95th Aux Team";
        picture=QUOTE(\z\AUX_95th_40k_IG_Main\addons\players\shared\insignias\SQUAD_KEY.paa);
        displayName=QUOTE([95th] SQUAD_NUMBER SQUAD_NAME Uniforms); 
        class ItemInfo: UniformItem {
            uniformClass=QUOTE(DOUBLES(AUX_95th_Unit_Heavy,PLAYER_NAME));
            uniformModel="-";
            containerClass="Supply150";
            mass=40;
        };
        class XtdGearInfo {
            model = QUOTE(DOUBLES(AUX_95th_Uniform_Squad,SQUAD_KEY));
            Sleeves = "Down";
            Camo = "Standard";
            Type = QUOTE(Heavy);
            Player = QUOTE(PLAYER_NAME_BEAUTIFIED);
        };
    };

    class AUX_95th_Uniform_Heavy_Snow_##PLAYER_NAME : AUX_95th_Uniform_Heavy_##PLAYER_NAME {
        class ItemInfo: ItemInfo {uniformClass=QUOTE(DOUBLES(AUX_95th_Unit_Heavy_Snow,PLAYER_NAME));};
        class XtdGearInfo: XtdGearInfo {Camo = "Snow";};
    };
#endif

#if UNIFORM_NCO == 1
    class FIG_CadianUniformV5_U_B;
    class AUX_95th_Uniform_NCO_##PLAYER_NAME : FIG_CadianUniformV5_U_B {
        scope = 2;
        scopeArsenal = 2;
        author="95th Aux Team";
        picture=QUOTE(\z\AUX_95th_40k_IG_Main\addons\players\shared\insignias\SQUAD_KEY.paa);
        displayName=QUOTE([95th] SQUAD_NUMBER SQUAD_NAME Uniforms); 
        class ItemInfo: UniformItem {
            uniformClass=QUOTE(DOUBLES(AUX_95th_Unit_NCO,PLAYER_NAME));
            uniformModel="-";
            containerClass="Supply150";
            mass=40;
        };
        class XtdGearInfo {
            model = QUOTE(DOUBLES(AUX_95th_Uniform_Squad,SQUAD_KEY));
            Sleeves = "Down";
            Camo = "Standard";
            Type = QUOTE(NCO);
            Player = QUOTE(PLAYER_NAME_BEAUTIFIED);
        };
    };

    class AUX_95th_Uniform_NCO_Snow_##PLAYER_NAME : AUX_95th_Uniform_NCO_##PLAYER_NAME {
        class ItemInfo: ItemInfo {uniformClass=QUOTE(DOUBLES(AUX_95th_Unit_NCO_Snow,PLAYER_NAME));};
        class XtdGearInfo: XtdGearInfo {Camo = "Snow";};
    };
#endif