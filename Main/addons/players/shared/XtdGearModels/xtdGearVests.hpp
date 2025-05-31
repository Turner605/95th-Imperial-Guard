author = "95th Aux Team";
options[] = {"Player", "Type", "Variant"};

class Type {
	labels = "Type";
	alwaysSelectable = 1;
	values[] = {"Light", "Medium", "Heavy"};
	class Light { label = "Light"; description = "Light Vest"; };
	class Medium { label = "Medium"; description = "Medium Vest"; };
	class Heavy { label = "Heavy"; description = "Heavy Vest"; };
};

class Variant {
	labels = "Variant";
	values[] = {"One", "Two", "Three", "Four", "Five"};
	class One { label = "1"; description = "Type 1"; };
	class Two { label = "2"; description = "Type 2"; };
	class Three { label = "3"; description = "Type 3"; };
	class Four { label = "4"; description = "Type 4"; };
	class Five { label = "5"; description = "Type 5"; };
};