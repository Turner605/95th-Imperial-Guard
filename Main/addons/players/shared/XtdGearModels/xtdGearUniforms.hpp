author = "95th Aux Team";
options[] = {"Type", "Player", "Sleeves", "Camo"};

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

class Camo {
	alwaysSelectable = 0;
	labels = "Type";
	values[] = {"Standard", "Snow"};
	class Standard { label = "Standard"; description = "Standard Deployment Uniform"; };
	class Snow { label = "Snow"; description = "Snow Uniform"; };
};