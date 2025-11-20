#include "script_component.hpp"
ADDON = false;

#include "XEH_PREP.hpp"

["enhanceFlares_flare_intensity", // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
    "SLIDER", // setting type
    ["Rally Point Tickets", "The amount of times a built rally point can be used before being disabled"], // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
    ["95th Aux Mod", "Fortify"], // Pretty name of the category where the setting can be found. Can be stringtable entry.
    [1, 100, 30, 0, false], // data for this setting: [min, max, default, number of shown trailing decimals]
    1, // "_isGlobal" flag. Set this to true to always have this setting synchronized between all clients in multiplayer
    {} // function that will be executed once on mission start and every time the setting is changed.
] call CBA_fnc_addSetting;

["enhanceFlares_flare_range", // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
    "SLIDER", // setting type
    ["Rally Point Tickets", "The amount of times a built rally point can be used before being disabled"], // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
    ["95th Aux Mod", "Fortify"], // Pretty name of the category where the setting can be found. Can be stringtable entry.
    [1, 1000, 200, 0, false], // data for this setting: [min, max, default, number of shown trailing decimals]
    1, // "_isGlobal" flag. Set this to true to always have this setting synchronized between all clients in multiplayer
    {} // function that will be executed once on mission start and every time the setting is changed.
] call CBA_fnc_addSetting;

["enhanceFlares_mortar_flare_intensity", // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
    "SLIDER", // setting type
    ["Rally Point Tickets", "The amount of times a built rally point can be used before being disabled"], // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
    ["95th Aux Mod", "Fortify"], // Pretty name of the category where the setting can be found. Can be stringtable entry.
    [1, 1000, 100, 0, false], // data for this setting: [min, max, default, number of shown trailing decimals]
    1, // "_isGlobal" flag. Set this to true to always have this setting synchronized between all clients in multiplayer
    {} // function that will be executed once on mission start and every time the setting is changed.
] call CBA_fnc_addSetting;

["enhanceFlares_mortar_flare_range", // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
    "SLIDER", // setting type
    ["Rally Point Tickets", "The amount of times a built rally point can be used before being disabled"], // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
    ["95th Aux Mod", "Fortify"], // Pretty name of the category where the setting can be found. Can be stringtable entry.
    [1, 2000, 450, 0, false], // data for this setting: [min, max, default, number of shown trailing decimals]
    1, // "_isGlobal" flag. Set this to true to always have this setting synchronized between all clients in multiplayer
    {} // function that will be executed once on mission start and every time the setting is changed.
] call CBA_fnc_addSetting;

ADDON = true;
