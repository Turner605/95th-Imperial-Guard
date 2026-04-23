#include "\z\AUX_95th_40k_IG_Main\addons\players\shared\script_squad_defines.hpp"

#if HELMET_BASIC == 1
    class H_HelmetSpecB;
    class FIG_IronCultHelmNM: H_HelmetSpecB {
        class ItemInfo;
    };

    class AUX_95th_40k_IG_Helmet_##PLAYER_NAME : FIG_IronCultHelmNM {
        scope = 2;
        scopeArsenal = 2;
        author="95th Aux Team";
        DSS_HUD_Lowlight_Enabled = 1;
        picture=QUOTE(\z\AUX_95th_40k_IG_Main\addons\players\shared\insignias\SQUAD_KEY.paa);
        displayName=QUOTE([95th] SQUAD_NUMBER SQUAD_NAME Helmets); 
        hiddenSelectionsTextures[]={
            QUOTE(\z\AUX_95th_40k_IG_Main\addons\players\PLAYER_NAME\data\helmets\FIG_IronCultHelm_co.paa)
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
#endif

#if HELMET_MASK == 1
    class FIG_IronCultHelm: H_HelmetSpecB {
        class ItemInfo;
    };
    class AUX_95th_40k_IG_Helmet_Mask_##PLAYER_NAME : FIG_IronCultHelm {
        scope = 2;
        scopeArsenal = 2;
        author="95th Aux Team";
        DSS_HUD_Lowlight_Enabled = 1;
        picture=QUOTE(\z\AUX_95th_40k_IG_Main\addons\players\shared\insignias\SQUAD_KEY.paa);
        displayName=QUOTE([95th] SQUAD_NUMBER SQUAD_NAME Helmets); 
        hiddenSelectionsTextures[]={
            QUOTE(\z\AUX_95th_40k_IG_Main\addons\players\PLAYER_NAME\data\helmets\FIG_IronCultHelm_co.paa)
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

#if TANKER_CAP == 1
    class Cad_Tnk_Helm: H_HelmetSpecB {
        class ItemInfo;
    };
    class AUX_95th_40k_IG_Tanker_Cap_##PLAYER_NAME : Cad_Tnk_Helm {
        scope = 2;
        scopeArsenal = 2;
        author="95th Aux Team";
        DSS_HUD_Lowlight_Enabled = 1;
        picture=QUOTE(\z\AUX_95th_40k_IG_Main\addons\players\shared\insignias\SQUAD_KEY.paa);
        hiddenSelectionsTextures[]={
            QUOTE(\z\AUX_95th_40k_IG_Main\addons\players\PLAYER_NAME\data\helmets\tanker_cap_co.paa)
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