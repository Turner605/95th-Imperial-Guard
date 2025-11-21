params ["_flareFired"];

if (!hasInterface) exitWith {};

if(!(_flareFired isKindOf "FlareCore")) exitWith {};

private _flareColour = [0,0,0];
private _flareFiredIsMortar = false;
private _flareIntensityModifier = 1;
private _flareRangeModifier = 1;

if(_flareFired isKindOf "F_40mm_White") then {_flareColour = [0.7,0.7,0.8];};
if(_flareFired isKindOf "F_40mm_Red") then {_flareColour = [0.7,0.15,0.1];};
if(_flareFired isKindOf "F_40mm_Yellow") then {_flareColour = [0.7,0.7,0];};
if(_flareFired isKindOf "F_40mm_Green") then {_flareColour = [0.2,0.7,0.2];};

if((_flareFired) isKindOf "Flare_82mm_AMOS_White") then {
	_flareColour = [1,1,1];
	_flareIntensityModifier = enhanceFlares_mortar_flare_intensity_modifier;
	_flareRangeModifier = enhanceFlares_mortar_flare_range_modifier;
};

sleep 3;

private _flareIntensity = (enhanceFlares_flare_intensity*_flareIntensityModifier);
private _flareAttenuation = (enhanceFlares_flare_range*_flareRangeModifier);

private _flareLight = "#lightpoint" createVehicle (getPosATL _flareFired);  
_flareLight setLightAmbient _flareColour;  
_flareLight setLightColor _flareColour;
_flareLight setLightIntensity _flareIntensity;
_flareLight setLightUseFlare true;
_flareLight setLightFlareSize 10;
_flareLight setLightFlareMaxDistance 2000;
_flareLight setLightAttenuation [_flareAttenuation,1,100,0,50,_flareAttenuation-10]; 
_flareLight setLightDayLight true;

_inter_flare = 0;

while {!isNull _flareFired} do {
	_int_mic = 0.05 + random 0.01;
	sleep _int_mic;
	_flare_brig = _flareIntensity+random 10;
	_flareLight setLightIntensity _flare_brig;
	_inter_flare = _inter_flare + _int_mic;
	_flareLight setPos (getPosATL _flareFired);
};