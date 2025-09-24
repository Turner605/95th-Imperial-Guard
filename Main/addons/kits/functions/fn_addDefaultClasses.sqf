// Maybe add a setting to decide if we should init this for other servers benefit?

// 01 - Rifleman
// 01 - Marksman
// 02 - Machine Gunner
// 03 - Weapon Crew
// 04 - Engineer
// 05 - Medicae
// 06 - AT
// 07 - Advanced AT
// 08 - AA
// 09 - Grenadier
// 10 - Flamer
// 11 - Melta Gunner
// 12 - Plasma Gunner
// 13 - Vox-Operator
// 14 - NCO
// 15 - Crewman


if (!isServer) exitWith {};

//-----------------------------# Weapon Options #-----------------------------------
private _laspistol = ["FIG_Laspistol","","","",["FIG_LasPistol_Standart",30],[],""];
private _lasgun = ["FIG_M36Kantrael","","","",["FIG_LasGun_Standart",60],[],""];
private _longlas = ["TIOW_LongLas_836","","","",["TIOW_LongLas_Mag",20],[],""];
private _shotgun = ["FIG_CombatShotgun","","","",["FIG_6Rnd_ShotgunMag",6],["FIG_6Rnd_ShotgunMagSlug",6],""];
private _stubber = ["ICP_LMG_01_imp","","","",["ic_100rnd_825_HP_Tracer_rifleMag",100],["ic_30rnd_825_Tracer_rifleMag",30],""];
private _autogun = ["dm_cad_autogunPara","","","",["ic_30rnd_825_Tracer_rifleMag",30],[],""];
private _plasmagun = ["ML700_PlasmaRifle_F","","","",["ML700_PlasmaRifle_BatteryT",20],["ML700_PlasmaRifle_Battery_Overcharged",1],""];
private _meltagun = ["TIOW_Meltagun_Mag","","","",["TIOW_Meltagun_Mag",5],[],""];
private _grenadelauncher = ["ML700_Grenade_Launcher","","","",["ML700_6rnd_HE",6],[],""];
private _flamer = ["TIOW_IG_Flamer","","","",["TIOW_Krieg_Flamer_mag",90],[],""];
private _knife = ["FIG_Knife","","","",[],[],""];
private _aalauncher = ["IC_Launcher_AA_grey","","","",["IC_Flak_Missile_mag",1],[],""];
private _guidatlauncher = ["IC_Launcher_AT_grey","","","",["IC_krakk_Missile_mag",1],["IC_frag_Missile_mag",1],""];
private _atlauncher = ["IC_CAD_Rocketlauncher_base","","","",["IC_Krak_rocket_mag",1],["IC_Frag_rocket_mag",1],""];

//-----------------------------# Ammo Options #-----------------------------------
private _laspistol_Ammo = [["FIG_LasPistol_Standart",5,30],[]];
private _lasgun_Ammo = [["FIG_LasGun_Standart",7,60]];
private _longlas_Ammo = _laspistol_Ammo + [["TIOW_LongLas_Mag",7,20],[]];
private _shotgun_Ammo = [["FIG_6Rnd_ShotgunMag",7,6]];
private _stubber_Ammo = _laspistol_Ammo + [["ic_100rnd_825_HP_Tracer_rifleMag",7,100]];
private _autogun_Ammo = [["ic_30rnd_825_Tracer_rifleMag",7,30]];
private _plasmagun_Ammo = _laspistol_Ammo + [["ML700_PlasmaRifle_BatteryT",7,20]];
private _meltagun_Ammo = _laspistol_Ammo + [["TIOW_Meltagun_Mag",7,5]];
private _grenadelauncher_Ammo = _laspistol_Ammo + [["ML700_6rnd_HE",7,6]];
private _flamer_Ammo = _laspistol_Ammo + [["TIOW_Krieg_Flamer_mag",7,90]];
private _aalauncher_Ammo = [["IC_Flak_Missile_mag",3,1]];
private _guidatlauncher_Ammo = [["IC_krakk_Missile_mag",3,1]];
private _atlauncher_Ammo = [["IC_Krak_rocket_mag",3,1]];

//-----------------------------# Base Options #-----------------------------------
private _baseUniformContent = [["ACE_IR_Strobe_Item",4],["WBK_HeadLampItem_Double",1],["ACE_EntrenchingTool",1],["ACE_CableTie",6],["TIOW_ig_smoke_grenade_mag",2,1],["ML700_frag_grenade_magazine",2,1]];
private _baseBackpackContent = [["ACE_morphine",2],["ACE_tourniquet",4],["ACE_elasticBandage",20],["ACE_bodyBag",1],["kat_chestSeal",2],["ACE_epinephrine",2],["kat_guedel",4],["ACE_plasmaIV",2],["ACE_plasmaIV_500",2],["ACE_plasmaIV_250",2],["kat_Pulseoximeter",2],["ACE_splint",2],["ACE_packingBandage",20],["kat_Painkiller",5,10]];
private _medicBackpackContent = [["ACE_morphine",5],["ACE_tourniquet",16],["ACE_elasticBandage",50],["ACE_bodyBag",1],["kat_chestSeal",12],["ACE_epinephrine",5],["kat_guedel",4],["ACE_plasmaIV_500",13],["ACE_plasmaIV_250",2],["kat_Pulseoximeter",8],["ACE_splint",10],["ACE_packingBandage",50],["kat_aatKit",5],["kat_etomidate",10],["kat_flumazenil",10],["kat_lorazepam",10],["ACE_adenosine",5],["kat_larynx",10],["kat_IO_FAST",10],["ACE_plasmaIV",8],["kat_stethoscope",1],["kat_BVM",1],["kat_accuvac",1],["kat_Painkiller",5,10],["kat_Carbonate",1,10]];

//-----------------------------# Rifleman Options #-----------------------------------
private _riflemanUniform = "AUX_95th_Uniform_Medium_trooper";
private _riflemanBackpack = "AUX_95th_Backpack_Standard_One_trooper";
private _heavyBackpack = "AUX_95th_Backpack_Heavy_trooper";
private _medicBackpack = "AUX_95th_Backpack_Medic_trooper";
private _ordnanceBackpack = "AUX_95th_Backpack_Engineer_trooper";
private _radioBackpack = "AUX_95th_Backpack_RTO_trooper";

//-----------------------------# Role Options #-----------------------------------

private _roleArray = [
	[
		"[95th] 00 - Rifleman",
		_lasgun, [], _knife,
		_riflemanUniform, _baseUniformContent,
		"AUX_95th_Vest_Medium_One_trooper", _lasgun_Ammo,
		_riflemanBackpack, _baseBackpackContent,
		"AUX_95th_40k_IG_Helmet_trooper",
		"ItemCompass"
	],
	[
		"[95th] 01 - Marksman",
		_longlas, [], _laspistol,
		_riflemanUnifrm, _baseUniformContent,
		"AUX_95th_Vest_Medium_One_trooper", _longlas_Ammo,
		_riflemanBackpack, _baseBackpackContent,
		"AUX_95th_40k_IG_Helmet_trooper",
		"ItemCompass"
	],
	[
		"[95th] 02 - Machine Gunner",
		_stubber, [], _laspistol,
		_riflemanUniform, _baseUniformContent,
		"AUX_95th_Vest_Medium_One_trooper", _stubber,
		_heavyBackpack, _baseBackpackContent,
		"AUX_95th_40k_IG_Helmet_trooper",
		"ItemCompass"
	],
	[
		"[95th] 03 - Weapon Crew",
		_autogun, [], _knife,
		_riflemanUniform, _baseUniformContent,
		"AUX_95th_Vest_Medium_One_trooper", _z6_Ammo,
		_heavyBackpack, _baseBackpackContent + [["ACE_Tripod",1]],
		"AUX_95th_40k_IG_Helmet_trooper",
		"ItemCompass"
	],
	[
		"[95th] 05 - Medicae",
		_lasgun, [], _knife,
		_riflemanUniform, _baseUniformContent,
		"AUX_95th_Vest_Medium_One_trooper", _lasgun_Ammo,
		_medicBackpack, _medicBackpackContent,
		"AUX_95th_40k_IG_Helmet_trooper",
		"ItemCompass"
	],
	[
		"[95th] 06 - AT",
		_lasgun, _atlauncher, _knife,
		_riflemanUniform, _baseUniformContent,
		"AUX_95th_Vest_Medium_One_trooper", _lasgun_Ammo,
		_ordnanceBackpack, _baseBackpackContent, _atlauncher_Ammo,
		"AUX_95th_40k_IG_Helmet_trooper",
		"ItemCompass"
	],
	[
		"[95th] 07 - Advanced AT",
		_lasgun, _guidatlauncher, _knife,
		_riflemanUniform, _baseUniformContent,
		"AUX_95th_Vest_Medium_One_trooper", _lasgun_Ammo,
		_ordnanceBackpack, _baseBackpackContent, _guidatlauncher_Ammo,
		"AAUX_95th_40k_IG_Helmet_trooper",
		"ItemCompass"
	],
	[
		"[95th] 08 - AA",
		_lasgun, _aalauncher, _knife,
		_riflemanUniform, _baseUniformContent,
		"AUX_95th_Vest_Medium_One_trooper", _lasgun_Ammo,
		_riflemanBackpack, _baseBackpackContent, _aalauncher_Ammo,
		"AUX_95th_40k_IG_Helmet_trooper",
		"ItemCompass"
	],
	[
		"[95th] 09 - Grenadier",
		_grenadelauncher, [], _laspistol,
		_riflemanUniform, _baseUniformContent,
		"AUX_95th_Vest_Medium_One_trooper", _grenadelauncher_Ammo,
		_heavyBackpack, _baseBackpackContent,
		"AUX_95th_40k_IG_Helmet_trooper",
		"ItemCompass"
	],
	[
		"[95th] 10 - Flamer",
		_flamer, [], _laspistol,
		_riflemanUniform, _baseUniformContent,
		"AUX_95th_Vest_Medium_One_trooper", _flamer_Ammo,
		"_riflemanBackpack", _baseBackpackContent,
		"AUX_95th_40k_IG_Helmet_trooper",
		"ItemCompass"
	],
	[
		"[95th] 11 - Melta Gunner",
		_meltagun, [], _laspistol,
		_riflemanUniform, _baseUniformContent,
		"AUX_95th_Vest_Medium_One_trooper", _meltagun_Ammo,
		_riflemanBackpack, _baseBackpackContent,
		"AUX_95th_40k_IG_Helmet_trooper",
		"ItemCompass"
	],
	[
		"[95th] 12 - Plasma Gunner",
		_plasmagun, [], _laspistol,
		_riflemanUniform, _baseUniformContent,
		"AUX_95th_Vest_Medium_One_trooper", _plasmagun_Ammo,
		_riflemanBackpack, _baseBackpackContent,
		"AUX_95th_40k_IG_Helmet_trooper",
		"ItemCompass"
	],
	[
		"[95th] 13 - Vox-Operator",
		_lasgun, [], _knife,
		_riflemanUniform, _baseUniformContent,
		"AUX_95th_Vest_Medium_One_trooper", _lasgun_Ammo,
		_radioBackpack,
		"AUX_95th_40k_IG_Helmet_trooper",
		"ItemCompass"
	],
	[
		"[95th] 14 - NCO",
		_lasgun, [], _laspistol,
		_riflemanUniform, _baseUniformContent,
		"AUX_95th_Vest_Medium_One_trooper", _lasgun_Ammo,
		_radioBackpack,
		"AUX_95th_40k_IG_Helmet_trooper",
		"ItemCompass"
	],
	[
		"[95th] 15 - Crewman",
		_autogun, [], _knife,
		_riflemanUniform, _baseUniformContent,
		"AUX_95th_Vest_Medium_One_trooper", _dc15a_Ammo,
		_riflemanBackpack, _baseBackpackContent,
		"AUX_95th_40k_IG_Helmet_trooper",
		"ItemCompass"
	]
];

{[
	_x select 0, 
	[
		[
			_x select 1,
			_x select 2, 
			_x select 3,
			[_x select 4, _x select 5], 
			[_x select 6, _x select 7], 
			[_x select 8, _x select 9], 
			_x select 10, 
			"", ["","","","",["Laserbatteries",1],[],""], ["ItemMap","ItemMicroDAGR","HOV_SW_Vox",(_x select 11),"ItemWatch",""]
		], createHashMapFromArray []
	],
	true
] call ace_arsenal_fnc_addDefaultLoadout; } forEach _roleArray;


