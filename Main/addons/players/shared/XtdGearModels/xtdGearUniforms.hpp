author = "95th Aux Team";
options[] = {"Type", "Player", "Sleeves"};

class Sleeves {
	labels = "Sleeves";
	values[] = {"Down","Rolled"};
	class Down { label = "Down"; description = "Down"; };
	class Rolled { label = "Rolled"; description = "Rolled Up"; };
};

class Type {
	alwaysSelectable = 1;
	labels = "Type";
	values[] = {"Unarmoured", "Light", "Medium", "Heavy", "NCO"};
	class Unarmoured { label = "Unarmoured"; description = "Unarmoured Uniform"; };
	class Light { label = "Light"; description = "Light Armour Uniform"; };
	class Medium { label = "Medium"; description = "Medium Armour Uniform"; };
	class Heavy { label = "Heavy"; description = "Heavy Armour Uniform"; };
	class NCO { label = "NCO"; description = "NCO Uniform"; };
};