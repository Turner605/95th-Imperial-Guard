author = "95th Aux Team";
options[] = {"Player", "Type", "Variant"};

class Type {
	labels = "Type";
	alwaysSelectable = 1;
	values[] = {"Invisible", "Light", "Standard", "Medic", "Heavy", "Engineer", "AT", "RTO"};
	class Invisible { label = "Invisible"; description = "Invisible Bag"; };
	class Light { label = "Light"; description = "Light Bag"; };
	class Standard { label = "Standard"; description = "Standard Bag"; };
	class Medic { label = "Medic"; description = "Medic Bag"; };
	class Heavy { label = "Heavy"; description = "Heavy Bag"; };
	class Engineer { label = "Engineer"; description = "Engineer Bag"; };
	class AT { label = "AT"; description = "AT Bag"; };
	class RTO { label = "RTO"; description = "RTO Bag"; };
};

class Variant {
	labels = "Type";
	values[] = {"One", "Two", "Three"};
	class One { label = "1"; description = "1"; };
	class Two { label = "2"; description = "2"; };
	class Three { label = "3"; description = "3"; };
};