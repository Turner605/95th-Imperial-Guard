#include "script_component.hpp"

player addEventHandler ["Fired", {
    _flare = _this select 6;

    [[_flare], {
        params ["_flare"];

        [_flare] spawn AUX_95TH_40K_IG_MAIN_fnc_enhanceFlare;
    }] remoteExec ["call", 0, true];
}];

// Leftover shit
// FOR vanilla mortars place this line inside their init field.
// this addEventHandler ["Fired",{private ["_al_flare"]; _al_flare = _this select 6;[[_al_flare],"AL_flare_fix\al_flare_enhance.sqf"] remoteExec ["execVM",0,true]}];