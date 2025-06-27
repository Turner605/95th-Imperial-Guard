#include "\z\AUX_95th_40k_IG_Main\addons\players\shared\script_squad_defines.hpp"

#if HELMET_BASIC == 1
    class H_HelmetSpecB;
    class FIG_CadianHelm: H_HelmetSpecB {
        class ItemInfo;
    };

    class AUX_95th_40k_IG_Helmet_##PLAYER_NAME : FIG_CadianHelm {
        scope = 2;
        scopeArsenal = 2;
        author="95th Aux Team";
        DSS_HUD_Lowlight_Enabled = 1;
        picture=QUOTE(\z\AUX_95th_40k_IG_Main\addons\players\shared\insignias\SQUAD_KEY.paa);
        displayName=QUOTE([95th] SQUAD_NUMBER SQUAD_NAME Helmets); 
        hiddenSelectionsTextures[]={
            QUOTE(\z\AUX_95th_40k_IG_Main\addons\players\PLAYER_NAME\data\helmets\FIG_CadianHelmet_co.paa)
        };
        class XtdGearInfo {
            model = QUOTE(DOUBLES(AUX_95th_Helmet_Squad,SQUAD_KEY));
            Type = QUOTE(Helmet);
            Variant = QUOTE(Standard);
            Player = QUOTE(PLAYER_NAME_BEAUTIFIED);
        };
        class ItemInfo: ItemInfo {
            class HitpointsProtectionInfo {
                class Head {
                    armor = 10;
                    hitpointName = "HitHead";
                    passThrough = 0.5;
                };
            };
        };
    };

    class FIG_CadianHelmGD: H_HelmetSpecB {
        class ItemInfo;
    };
    
    class AUX_95th_40k_IG_Helmet_GD_##PLAYER_NAME : FIG_CadianHelmGD {
        scope = 2;
        scopeArsenal = 2;
        author="95th Aux Team";
        DSS_HUD_Lowlight_Enabled = 1;
        picture=QUOTE(\z\AUX_95th_40k_IG_Main\addons\players\shared\insignias\SQUAD_KEY.paa);
        displayName=QUOTE([95th] SQUAD_NUMBER SQUAD_NAME Helmets GD); 
        hiddenSelectionsTextures[]={
            QUOTE(\z\AUX_95th_40k_IG_Main\addons\players\PLAYER_NAME\data\helmets\FIG_CadianHelmet_co.paa),
            QUOTE(\z\AUX_95th_40k_IG_Main\addons\players\shared\data\helmets\FIG_CadianGoggles_co.paa)
        };
        class XtdGearInfo {
            model = QUOTE(DOUBLES(AUX_95th_Helmet_Squad,SQUAD_KEY));
            Type = QUOTE(Helmet);
            Variant = QUOTE(GD);
            Player = QUOTE(PLAYER_NAME_BEAUTIFIED);
        };
        class ItemInfo: ItemInfo {
            class HitpointsProtectionInfo {
                class Head {
                    armor = 10;
                    hitpointName = "HitHead";
                    passThrough = 0.5;
                };
            };
        };
    };

    class FIG_CadianHelmGU: H_HelmetSpecB {
        class ItemInfo;
    };

    class AUX_95th_40k_IG_Helmet_GU_##PLAYER_NAME : FIG_CadianHelmGU {
        scope = 2;
        scopeArsenal = 2;
        author="95th Aux Team";
        DSS_HUD_Lowlight_Enabled = 1;
        picture=QUOTE(\z\AUX_95th_40k_IG_Main\addons\players\shared\insignias\SQUAD_KEY.paa);
        displayName=QUOTE([95th] SQUAD_NUMBER SQUAD_NAME Helmets GU); 
        hiddenSelectionsTextures[]={
            QUOTE(\z\AUX_95th_40k_IG_Main\addons\players\PLAYER_NAME\data\helmets\FIG_CadianHelmet_co.paa),
            QUOTE(\z\AUX_95th_40k_IG_Main\addons\players\shared\data\helmets\FIG_CadianGoggles_co.paa)
        };
        class XtdGearInfo {
            model = QUOTE(DOUBLES(AUX_95th_Helmet_Squad,SQUAD_KEY));
            Type = QUOTE(Helmet);
            Variant = QUOTE(GU);
            Player = QUOTE(PLAYER_NAME_BEAUTIFIED);
        };
        class ItemInfo: ItemInfo {
            class HitpointsProtectionInfo {
                class Head {
                    armor = 10;
                    hitpointName = "HitHead";
                    passThrough = 0.5;
                };
            };
        };
    };
#endif

#if HELMET_MASK == 1
    class FIG_CadianHelmOGMask: H_HelmetSpecB {
        class ItemInfo;
    };
    class AUX_95th_40k_IG_Helmet_Mask_Visor_##PLAYER_NAME : FIG_CadianHelmOGMask {
        scope = 2;
        scopeArsenal = 2;
        author="95th Aux Team";
        DSS_HUD_Lowlight_Enabled = 1;
        picture=QUOTE(\z\AUX_95th_40k_IG_Main\addons\players\shared\insignias\SQUAD_KEY.paa);
        displayName=QUOTE([95th] SQUAD_NUMBER SQUAD_NAME Helmets); 
        hiddenSelectionsTextures[]={
            QUOTE(\z\AUX_95th_40k_IG_Main\addons\players\PLAYER_NAME\data\helmets\FIG_CadianHelmet_co.paa),
            QUOTE(\z\AUX_95th_40k_IG_Main\addons\players\PLAYER_NAME\data\helmets\FIG_CadianOGMask_co.paa)
        };
        class XtdGearInfo {
            model = QUOTE(DOUBLES(AUX_95th_Helmet_Squad,SQUAD_KEY));
            Type = QUOTE(Helmet);
            Variant = QUOTE(MaskVisor);
            Player = QUOTE(PLAYER_NAME_BEAUTIFIED);
        };
        class ItemInfo: ItemInfo {
            class HitpointsProtectionInfo {
                class Head {
                    armor = 10;
                    hitpointName = "HitHead";
                    passThrough = 0.5;
                };
            };
        };
    };

    class FIG_CadianHelmOGMaskNV: H_HelmetSpecB {
        class ItemInfo;
    };
    class AUX_95th_40k_IG_Helmet_Mask_##PLAYER_NAME : FIG_CadianHelmOGMaskNV {
        scope = 2;
        scopeArsenal = 2;
        author="95th Aux Team";
        DSS_HUD_Lowlight_Enabled = 1;
        picture=QUOTE(\z\AUX_95th_40k_IG_Main\addons\players\shared\insignias\SQUAD_KEY.paa);
        displayName=QUOTE([95th] SQUAD_NUMBER SQUAD_NAME Helmets); 
        hiddenSelectionsTextures[]={
            QUOTE(\z\AUX_95th_40k_IG_Main\addons\players\PLAYER_NAME\data\helmets\FIG_CadianHelmet_co.paa),
            QUOTE(\z\AUX_95th_40k_IG_Main\addons\players\PLAYER_NAME\data\helmets\FIG_CadianOGMask_co.paa)
        };
        class XtdGearInfo {
            model = QUOTE(DOUBLES(AUX_95th_Helmet_Squad,SQUAD_KEY));
            Type = QUOTE(Helmet);
            Variant = QUOTE(Mask);
            Player = QUOTE(PLAYER_NAME_BEAUTIFIED);
        };
        class ItemInfo: ItemInfo {
            class HitpointsProtectionInfo {
                class Head {
                    armor = 10;
                    hitpointName = "HitHead";
                    passThrough = 0.5;
                };
            };
        };
    };
#endif

#if PATROL_CAP == 1
    class FIG_CadianCap: H_HelmetSpecB {
        class ItemInfo;
    };
    class AUX_95th_40k_IG_Patrol_Cap_##PLAYER_NAME : FIG_CadianCap {
        scope = 2;
        scopeArsenal = 2;
        author="95th Aux Team";
        DSS_HUD_Lowlight_Enabled = 1;
        picture=QUOTE(\z\AUX_95th_40k_IG_Main\addons\players\shared\insignias\SQUAD_KEY.paa);
        displayName=QUOTE([95th] SQUAD_NUMBER SQUAD_NAME Helmets); 
        hiddenSelectionsTextures[]={
            QUOTE(\z\AUX_95th_40k_IG_Main\addons\players\PLAYER_NAME\data\helmets\FIG_CadianCap_co.paa)
        };
        class XtdGearInfo {
            model = QUOTE(DOUBLES(AUX_95th_Helmet_Squad,SQUAD_KEY));
            Type = QUOTE(PatrolCap);
            Variant = QUOTE(Standard);
            Player = QUOTE(PLAYER_NAME_BEAUTIFIED);
        };
        class ItemInfo: ItemInfo {
            class HitpointsProtectionInfo {
                class Head {
                    armor = 10;
                    hitpointName = "HitHead";
                    passThrough = 0.5;
                };
            };
        };
    };
#endif

#if TANKER_CAP == 1
    class IC_tanker_cap: H_HelmetSpecB {
        class ItemInfo;
    };
    class AUX_95th_40k_IG_Tanker_Cap_##PLAYER_NAME : IC_tanker_cap {
        scope = 2;
        scopeArsenal = 2;
        author="95th Aux Team";
        DSS_HUD_Lowlight_Enabled = 1;
        picture=QUOTE(\z\AUX_95th_40k_IG_Main\addons\players\shared\insignias\SQUAD_KEY.paa);
        hiddenSelectionsTextures[]={
            QUOTE(\z\AUX_95th_40k_IG_Main\addons\players\PLAYER_NAME\data\helmets\cad_tankcap_co.paa)
        };
        displayName=QUOTE([95th] SQUAD_NUMBER SQUAD_NAME Helmets); 
        class XtdGearInfo {
            model = QUOTE(DOUBLES(AUX_95th_Helmet_Squad,SQUAD_KEY));
            Type = QUOTE(TankerCap);
            Variant = QUOTE(Standard);
            Player = QUOTE(PLAYER_NAME_BEAUTIFIED);
        };
        class ItemInfo: ItemInfo {
            class HitpointsProtectionInfo {
                class Head {
                    armor = 10;
                    hitpointName = "HitHead";
                    passThrough = 0.5;
                };
            };
        };
    };
#endif

#if NCO_CAP == 1
    class IC_Stormtrooper_beret: H_HelmetSpecB {
        class ItemInfo;
    };
    class AUX_95th_40k_IG_NCO_Cap_##PLAYER_NAME : IC_Stormtrooper_beret {
        scope = 2;
        scopeArsenal = 2;
        author="95th Aux Team";
        DSS_HUD_Lowlight_Enabled = 1;
        picture=QUOTE(\z\AUX_95th_40k_IG_Main\addons\players\shared\insignias\SQUAD_KEY.paa);
        displayName=QUOTE([95th] SQUAD_NUMBER SQUAD_NAME Helmets); 
        hiddenSelectionsTextures[]={
            QUOTE(\z\AUX_95th_40k_IG_Main\addons\players\PLAYER_NAME\data\helmets\IC_Stormtrooper_BERET_co.paa)
        };
        class XtdGearInfo {
            model = QUOTE(DOUBLES(AUX_95th_Helmet_Squad,SQUAD_KEY));
            Type = QUOTE(NCOCap);
            Variant = QUOTE(Standard);
            Player = QUOTE(PLAYER_NAME_BEAUTIFIED);
        };
        class ItemInfo: ItemInfo {
            class HitpointsProtectionInfo {
                class Head {
                    armor = 10;
                    hitpointName = "HitHead";
                    passThrough = 0.5;
                };
            };
        };
    };
#endif

#if OFFICER_CAP == 1
    class TIOW_IG_Officer_Cap1_667: H_HelmetSpecB {
        class ItemInfo;
    };
    class AUX_95th_40k_IG_Officer_Cap_##PLAYER_NAME : TIOW_IG_Officer_Cap1_667 {
        scope = 2;
        scopeArsenal = 2;
        author="95th Aux Team";
        DSS_HUD_Lowlight_Enabled = 1;
        picture=QUOTE(\z\AUX_95th_40k_IG_Main\addons\players\shared\insignias\SQUAD_KEY.paa);
        displayName=QUOTE([95th] SQUAD_NUMBER SQUAD_NAME Helmets); 
        hiddenSelectionsTextures[]={
            QUOTE(\z\AUX_95th_40k_IG_Main\addons\players\PLAYER_NAME\data\helmets\Officer_caps_667_CA.paa)
        };
        class XtdGearInfo {
            model = QUOTE(DOUBLES(AUX_95th_Helmet_Squad,SQUAD_KEY));
            Type = QUOTE(OfficerCap);
            Variant = QUOTE(Standard);
            Player = QUOTE(PLAYER_NAME_BEAUTIFIED);
        };
        class ItemInfo: ItemInfo {
            class HitpointsProtectionInfo {
                class Head {
                    armor = 10;
                    hitpointName = "HitHead";
                    passThrough = 0.5;
                };
            };
        };
    };
#endif

#if BOONIE_HAT == 1
    class H_Booniehat_khk: H_HelmetSpecB {
        class ItemInfo;
    };
    class AUX_95th_40k_IG_Booniehat_##PLAYER_NAME : H_Booniehat_khk {
        scope = 2;
        scopeArsenal = 2;
        author="95th Aux Team";
        DSS_HUD_Lowlight_Enabled = 1;
        picture=QUOTE(\z\AUX_95th_40k_IG_Main\addons\players\shared\insignias\SQUAD_KEY.paa);
        displayName=QUOTE([95th] SQUAD_NUMBER SQUAD_NAME Helmets); 
        hiddenSelectionsTextures[]={
            QUOTE(\z\AUX_95th_40k_IG_Main\addons\players\PLAYER_NAME\data\helmets\boonieHat.paa)
        };
        class XtdGearInfo {
            model = QUOTE(DOUBLES(AUX_95th_Helmet_Squad,SQUAD_KEY));
            Type = QUOTE(BoonieHat);
            Variant = QUOTE(Standard);
            Player = QUOTE(PLAYER_NAME_BEAUTIFIED);
        };
        class ItemInfo: ItemInfo {
            class HitpointsProtectionInfo {
                class Head {
                    armor = 10;
                    hitpointName = "HitHead";
                    passThrough = 0.5;
                };
            };
        };
    };

    class H_Booniehat_khk_hs: H_HelmetSpecB {
        class ItemInfo;
    };
    class AUX_95th_40k_IG_Booniehat_Headset_##PLAYER_NAME : H_Booniehat_khk_hs {
        scope = 2;
        scopeArsenal = 2;
        author="95th Aux Team";
        DSS_HUD_Lowlight_Enabled = 1;
        picture=QUOTE(\z\AUX_95th_40k_IG_Main\addons\players\shared\insignias\SQUAD_KEY.paa);
        displayName=QUOTE([95th] SQUAD_NUMBER SQUAD_NAME Helmets); 
        hiddenSelectionsTextures[]={
            QUOTE(\z\AUX_95th_40k_IG_Main\addons\players\PLAYER_NAME\data\helmets\boonieHat.paa)
        };
        class XtdGearInfo {
            model = QUOTE(DOUBLES(AUX_95th_Helmet_Squad,SQUAD_KEY));
            Type = QUOTE(BoonieHat);
            Variant = QUOTE(Headset);
            Player = QUOTE(PLAYER_NAME_BEAUTIFIED);
        };
        class ItemInfo: ItemInfo {
            class HitpointsProtectionInfo {
                class Head {
                    armor = 10;
                    hitpointName = "HitHead";
                    passThrough = 0.5;
                };
            };
        };
    };

#endif