author = "95th Aux Team";
options[] = {"Player", "Type", "Variant"};

class Type {
	labels = "Type";
	alwaysSelectable = 1;
	values[] = {"Invisible", "Light", "Standard", "Medic", "Heavy", "Chest", "Power", "RTO", "Weapon"};
	class Invisible { label = "Invisible"; description = "Invisible Bag"; };
	class Light { label = "Light"; description = "Light Bag"; };
	class Standard { label = "Standard"; description = "Standard Bag"; };
	class Medic { label = "Medic"; description = "Medic Bag"; };
	class Heavy { label = "Heavy"; description = "Heavy Bag"; };
	class Power { label = "Power"; description = "Power Pack"; };
	class RTO { label = "RTO"; description = "RTO Pack"; };
	class Chest { label = "Chest"; description = "Chest Rig"; };
	class Weapon { label = "Weapon"; description = "Weapon Pack"; };
};

class Variant {
	labels = "Type";
	values[] = {"One", "Two", "Three", "Four", "Five", "Six", "Seven"};
	class One { label = "1"; description = "1"; };
	class Two { label = "2"; description = "2"; };
	class Three { label = "3"; description = "3"; };
	class Four { label = "4"; description = "4"; };
	class Five { label = "5"; description = "5"; };
	class Six { label = "6"; description = "6"; };
	class Seven { label = "7"; description = "7"; };
};