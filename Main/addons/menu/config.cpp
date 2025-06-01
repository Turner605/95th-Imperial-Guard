#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "AUX_95th_40k_IG_Main_main",
			"A3_Data_F_Enoch_Loadorder",
            "A3_Data_F",
			"A3_UI_F",
			"A3_Ui_F_Oldman",
			"A3_UI_F_AOW"
        };
        authors[] = {"Turner"};
        VERSION_CONFIG;
    };
};

class RscStandardDisplay;
class RscPicture;
class RscControlsGroupNoScrollbars;
class RscControlsGroupNoHScrollbars;
class RscActivepicture;

class RscDisplayLoadCustom: RscStandardDisplay {
	class controlsBackground {
		class LoadingPic: RscPicture {
			idc = 1; x = "SafeZoneX"; y = "SafeZoneY"; h = "SafeZoneH"; w = "SafeZoneW";
			text = "\z\AUX_95th_40k_IG_Main\addons\menu\data\backgroundOne.paa"; 
		};
	};
};

class RscDisplayLoadMission: RscStandardDisplay {
	class controlsBackground {
		class LoadingPic: RscPicture {
			idc = 1; x = "SafeZoneX"; y = "SafeZoneY"; h = "SafeZoneH"; w = "SafeZoneW";
			text = "\z\AUX_95th_40k_IG_Main\addons\menu\data\backgroundTwo.paa"; 
		};
	};
};

class RscDisplayStart: RscStandardDisplay {
	class controls {
		class LoadingPic: RscPicture {
			idc = 1; x = "SafeZoneX"; y = "SafeZoneY"; h = "SafeZoneH"; w = "SafeZoneW";
			text = "\z\AUX_95th_40k_IG_Main\addons\menu\data\backgroundThree.paa"; 
		};
	};
};

class RscDisplayMPPlayers;
class RscDisplayClientWait: RscDisplayMPPlayers {
	class LoadingPic: RscPicture {
		idc = 1; x = "SafeZoneX"; y = "SafeZoneY"; h = "SafeZoneH"; w = "SafeZoneW";
		text = "\z\AUX_95th_40k_IG_Main\addons\menu\data\backgroundFour.paa"; 
	};
};

class RscDisplayClient: RscStandardDisplay {
	class controlsBackground {
		class LoadingPic: RscPicture {
			idc = 1; x = "SafeZoneX"; y = "SafeZoneY"; h = "SafeZoneH"; w = "SafeZoneW";
			text = "\z\AUX_95th_40k_IG_Main\addons\menu\data\backgroundFive.paa"; 
		};
	};
};

class RscDisplayLoading {
	class Variants {

		class LoadingOne {
			idd = 250;
			class controls { class LoadingPic: RscPicture {
				idc = 1; x = "SafeZoneX"; y = "SafeZoneY"; h = "SafeZoneH"; w = "SafeZoneW";
				text = "\z\AUX_95th_40k_IG_Main\addons\menu\data\backgroundOne.paa"; 
			}; };
		};

		class Loading_West1: LoadingOne {
			class controls { class LoadingPic {
				idc = 1; x = "SafeZoneX"; y = "SafeZoneY"; h = "SafeZoneH"; w = "SafeZoneW";
				text = "\z\AUX_95th_40k_IG_Main\addons\menu\data\backgroundTwo.paa"; 
			}; };
		};

		class Loading_West2: LoadingOne {
			class controls { class LoadingPic {
				idc = 1; x = "SafeZoneX"; y = "SafeZoneY"; h = "SafeZoneH"; w = "SafeZoneW";
				text = "\z\AUX_95th_40k_IG_Main\addons\menu\data\backgroundThree.paa"; 
			}; };
		};

		class Loading_East1: LoadingOne {
			class controls { class LoadingPic {
				idc = 1; x = "SafeZoneX"; y = "SafeZoneY"; h = "SafeZoneH"; w = "SafeZoneW";
				text = "\z\AUX_95th_40k_IG_Main\addons\menu\data\backgroundFour.paa"; 
			}; };
		};

		class Loading_East2: LoadingOne {
			class controls { class LoadingPic {
				idc = 1; x = "SafeZoneX"; y = "SafeZoneY"; h = "SafeZoneH"; w = "SafeZoneW";
				text = "\z\AUX_95th_40k_IG_Main\addons\menu\data\backgroundFive.paa"; 
			}; };
		};
	};
};

class RscMainMenuSpotlight: RscControlsGroupNoScrollbars {show = 0; onLoad = "";};

class RscDisplayMain: RscStandardDisplay {
	enableDisplay = 0;
	delete Spotlight;

	// Main Menu background
	class controlsBackground {
		class LoadingPic: RscPicture {
			idc = 1; x = "SafeZoneX"; y = "SafeZoneY"; h = "SafeZoneH"; w = "SafeZoneW";
			text = "\z\AUX_95th_40k_IG_Main\addons\menu\data\backgroundMenu.paa"; 
		};
	};

	class controls {
		// 95th Logo
        class logo:RscActivepicture {text="\z\AUX_95th_40k_IG_Main\addons\menu\data\MainScreenBanner.paa"; url=""; tooltip="95th Legion"; onButtonClick=""; onload="";};
        class logoApex:logo {show=0; onload=""; text="";};
        class infomods:RscControlsGroupNoHScrollbars {show=0;};
        class infoDLCsOwned:infomods {show=0;};
        class infoDLCs:infoDLCsOwned {show=0;};
        class infoNews:infomods {show=0;};
        class infoVersion:infoNews {show=0;};

		// 95th Server Join Button
		class GroupSingleplayer: RscControlsGroupNoScrollbars {
            class Controls;
        };

        class GroupMultiplayer: GroupSingleplayer {
			h = "(6 * 	1.5) * 	(pixelH * pixelGrid * 2)";

            class Controls: Controls {
                class ServerBrowser;

                class JoinMainServer: ServerBrowser {
                    idc = -1;
                    text = "95th Main";
                    tooltip = "Connect to the 95th Main server";
                    y = "(3 * 	1.5) * 	(pixelH * pixelGrid * 2) + 	(pixelH)";
                    onbuttonclick = "connectToServer ['135.125.189.7', 2302, '95th']";
                };
            };
        };

		delete Spotlight1;
		delete Spotlight2;
		delete Spotlight3;
		delete BackgroundSpotlightRight;
		delete BackgroundSpotlightLeft;
		delete BackgroundSpotlight;
	};
};

#include "CfgEventHandlers.hpp"
