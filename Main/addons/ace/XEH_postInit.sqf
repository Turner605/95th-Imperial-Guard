#include "script_component.hpp"

player addEventHandler["Respawn", {
	params ["_unit", "_corpse"];

    [{
        params ["_unit"];

        private _rallyPointObject = (missionNamespace getVariable "AUX_95th_Rally_Point_Object"); 
        private _rallyPointRespawn = (missionNamespace getVariable "AUX_95th_Rally_Point_Respawn");
        private _rallyPointTickets = (missionNamespace getVariable "AUX_95th_Rally_Point_Tickets");

        if((_unit distance _rallyPointObject) < 20) then {
            private _newTickets = (_rallyPointTickets - 1);

            if(_newTickets == 0) then {
                _rallyPointObject setVariable ["AUX_95th_Rally_Point_Tickets", _newTickets, true];
                _rallyPointRespawn call BIS_fnc_removeRespawnPosition;
            } else {
                _rallyPointObject setVariable ["AUX_95th_Rally_Point_Tickets", _newTickets, true];

                _rallyPointRespawn call BIS_fnc_removeRespawnPosition;

                private _newRallyPointRespawn = ([west, _rallyPointObject, "Rally Point (" + (str _newTickets) + ")"] call BIS_fnc_addRespawnPosition); 
                
                missionNamespace setVariable ["AUX_95th_Rally_Point_Respawn", _newRallyPointRespawn, true];
            };

            missionNamespace setVariable ["AUX_95th_Rally_Point_Tickets", _newTickets, true];
        };

    }, [_unit], 1 ] call CBA_fnc_waitAndExecute;

}];

["acex_fortify_objectPlaced", {
    params ["_unit", "_side", "_objectPlaced"];

    if (isServer) then {
        if((typeOf _objectPlaced) == "AUX_95th_ListeningPost") then {
            private _oldRallyPoint = (missionNamespace getVariable "AUX_95th_Rally_Point_Object");
            private __oldRallyPointRespawn = (missionNamespace getVariable "AUX_95th_Rally_Point_Respawn");

            deleteVehicle _oldRallyPoint;
            __oldRallyPointRespawn call BIS_fnc_removeRespawnPosition;

            private _newRallyPoint = _objectPlaced;
            private _newRallyPointRespawn = ([west, _newRallyPoint, "Rally Point (" + (str AUX_95th_40k_IG_Fortify_Rally_Tickets) + ")"] call BIS_fnc_addRespawnPosition); 

            missionNamespace setVariable ["AUX_95th_Rally_Point_Object", _newRallyPoint, true];
            missionNamespace setVariable ["AUX_95th_Rally_Point_Respawn", _newRallyPointRespawn, true];
            missionNamespace setVariable ["AUX_95th_Rally_Point_Tickets", AUX_95th_40k_IG_Fortify_Rally_Tickets, true];
        };
    };

}] call CBA_fnc_addEventHandler;

["acex_fortify_objectDeleted", {
    params ["_unit", "_side", "_objectDeleted"];

}] call CBA_fnc_addEventHandler;

if(AUX_95th_40k_IG_Fortify_Forceload_Enabled) then {
    [] call AUX_95TH_40K_IG_MAIN_fnc_setupFortify;
};

// ATSS (Anti Turner Salute System)
player addEventHandler ["AnimChanged", {
    params ["_unit", "_anim"];

    if (!(isNull cursorObject)) then {
        if(isPlayer cursorObject) then {
            private _playerId = getPlayerUID cursorObject;
            private _playerIds = ["76561198065789267", "76561198104865945"];

            if(_playerId in _playerIds) then {
                if("salute" in (animationState _unit)) then {
                    systemChat "No Saluting";

                    _unit remoteExecCall ["WBK_Goliath_SpecialAttackGroundShard", _unit];
                    // _unit setDamage 1;
                };
            };
        };
    };
}];

[] call AUX_95th_40k_IG_fnc_checkVersion;