author = "95th Aux Team";
options[] = {"Type", "Player", "Variant"};

class Type {
	alwaysSelectable = 1;
	labels = "Type";
	values[] = {"Helmet", "PatrolCap", "TankerCap", "NCOCap", "OfficerCap", "BoonieHat"};
	class Helmet { label = "Helmet"; description = "Basic Helmet"; };
	class PatrolCap { label = "Cap"; description = "Patrol Cap"; };
	class TankerCap { label = "Tanker"; description = "Tanker Cap"; };
	class NCOCap { label = "NCO"; description = "NCO Cap"; };
	class OfficerCap { label = "Officer"; description = "Officer Cap"; };
	class BoonieHat { label = "Boonie"; description = "Boonie Hat"; };
};

class Variant {
	labels = "Phase";
	values[] = {"Standard","Mask","Headset","MaskVisor","GU","GD"};
	class Standard { label = "S"; description = "Standard"; };
	class Mask { label = "M"; description = "Mask Only"; };
	class Headset { label = "H"; description = "Headset"; };
	class MaskVisor { label = "MV"; description = "Mask+Visor"; };
	class GU { label = "GU"; description = "Googles Up"; };
	class GD { label = "GD"; description = "Googles Down"; };
};