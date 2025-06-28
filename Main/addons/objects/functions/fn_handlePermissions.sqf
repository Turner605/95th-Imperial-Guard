params ["_player", "_type"];

switch (_type) do {
	case "Medic": { 
		if(_player getUnitTrait "Medic") then {
			"Medic Skill Revoked" remoteExec ["hint", _player];
			_player setUnitTrait ["Medic", false];
		} else {
			"Medic Skill Granted" remoteExec ["hint", _player];
			_player setUnitTrait ["Medic", true];
		};
	};

	case "Engineer": { 
		if(_player getUnitTrait "Engineer") then {
			"Engineer Skill Revoked" remoteExec ["hint", _player];
			_player setUnitTrait ["Engineer", false];
			_player setUnitTrait ["ExplosiveSpecialist", false];
		} else {
			"Engineer Skill Granted" remoteExec ["hint", _player];
			_player setUnitTrait ["Engineer", true];
			_player setUnitTrait ["ExplosiveSpecialist", true];
		};
	};

	case "Hacker": { 
		if(_player getUnitTrait "UAVHacker") then {
			"Hacking Skill Revoked" remoteExec ["hint", _player];
			_player setUnitTrait ["UAVHacker", false];
		} else {
			"Hacking Skill Granted" remoteExec ["hint", _player];
			_player setUnitTrait ["UAVHacker", true];
		};
	};
}; 