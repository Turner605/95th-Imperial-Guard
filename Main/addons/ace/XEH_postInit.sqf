#include "script_component.hpp"

["acex_fortify_objectPlaced", {
    params ["_unit", "_side", "_objectPlaced"];

}] call CBA_fnc_addEventHandler;

["acex_fortify_objectDeleted", {
    params ["_unit", "_side", "_objectDeleted"];

}] call CBA_fnc_addEventHandler;

if(AUX_95th_40k_IG_Fortify_Forceload_Enabled) then {
    [] call AUX_95th_40k_IG_fnc_setupFortify;
};

// ATSS (Anti Turner Salute System)
player addEventHandler ["AnimChanged", {
    params ["_unit", "_anim"];

    if (!(isNull cursorObject)) then {
        if(isPlayer cursorObject) then {
            private _playerId = getPlayerUID cursorObject;

            if(_playerId == "76561198065789267") then {
                if("salute" in (animationState _unit)) then {
                    systemChat "No Saluting";

                    _unit remoteExec ["Flame_Death_container", _unit];
                };
            };
        };
    };
}];

[] call AUX_95th_40k_IG_fnc_checkVersion;