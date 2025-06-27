author = "95th Aux Team";
options[] = {"Rank", "Type", "Variant"};

class Rank {
	alwaysSelectable = 1;
	labels = "Type";
	values[] = {"Trooper", "Veteran", "NCO", };
	class Trooper { label = "Trooper"; description = "Anyone can wear these"; };
	class Veteran { label = "Veteran"; description = "Only Veteran+ can wear these"; };
	class NCO { label = "NCO"; description = "Only NCO+ can wear these"; };
};

class Type {
	alwaysSelectable = 1;
	labels = "Type";
	values[] = {"Chestwear"};
	class Chestwear { label = "Chestwear"; description = "Chestwear"; };
};

class Variant {
	labels = "Variant";
	values[] = {"One", "Two", "Three", "Four", "Five", "Six"};
	class One { label = "1"; description = "1"; };
	class Two { label = "2"; description = "2"; };
	class Three { label = "3"; description = "3"; };
	class Four { label = "4"; description = "4"; };
	class Five { label = "5"; description = "5"; };
	class Six { label = "6"; description = "6"; };
};