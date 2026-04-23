author = "95th Aux Team";
options[] = {"Type", "Player", "Variant"};

class Type {
	alwaysSelectable = 1;
	labels = "Type";
	values[] = {"Helmet", "TankerCap"};
	class Helmet { label = "Helmet"; description = "Basic Helmet"; };
	class TankerCap { label = "Tanker"; description = "Tanker Cap"; };
};

class Variant {
	labels = "Phase";
	values[] = {"Standard","Mask"};
	class Standard { label = "Standard"; description = "Standard Helmet"; };
	class Mask { label = "Veteran"; description = "Veteran Only"; };
};