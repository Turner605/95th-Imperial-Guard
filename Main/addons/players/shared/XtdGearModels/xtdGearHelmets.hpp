author = "95th Aux Team";
options[] = {"Type", "Player", "Variant"};

class Type {
	labels = "Type";
	values[] = {"Helmet", "Cap"};
	class Helmet { label = "Helmet"; description = "Helmet"; };
	class Cap { label = "Cap"; description = "Cap"; };
};

class Variant {
	labels = "Variant";
	values[] = {"Standard", "Masked", "Tanker", "Pilot"};
	class Standard { label = "Standard"; description = "Standard for all players"; };
	class Masked { label = "Masked"; description = "Masked for veteran players"; };
	class Tanker { label = "Tanker"; description = "Tanker for all mechanized"; };
	class Pilot { label = "Pilot"; description = "Pilot for all pilots"; };
};