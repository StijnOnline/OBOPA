#include <iostream>
#include <algorithm>
#include <functional>
#include <vector>
#include <set>

int main() {
	std::vector<std::string> colours{ "red", "green", "white", "blue", "orange", "green", "orange", "black", "purple" };
	// gebruik functies uit <algorithm> en <functional> om (steeds vanuit een ORIGINELE copie van deze vector)
	// 1) de vector in 2 nieuwe vectoren te splitsen: 1 met alles wat alfabetisch voor 'purple' komt, 1 met alles er na
	std::vector<std::string> copy;
	for (int i = 0; i < colours.size(); i++)
		copy.push_back(colours[i]);

	std::sort(copy.begin(), copy.end());
	auto purple = find(copy.begin(), copy.end(), "purple");

	std::vector<std::string> beforePurple(copy.begin(),purple);
	std::vector<std::string> afterPurple(++purple,copy.end());

	for (int i = 0; i < beforePurple.size(); i++)
		std::cout << beforePurple[i] << std::endl;
	std::cout << " - purple" << std::endl;
	for (int i = 0; i < afterPurple.size(); i++)
		std::cout << afterPurple[i] << std::endl;
	std::cout << std::endl;
	// 2) alle elementen UPPERCASE te maken.
	copy.resize(0);
	for (int i = 0; i < colours.size(); i++)
		copy.push_back(colours[i]);

	for (int i = 0; i < copy.size(); i++)
		for (auto& c : copy[i]) c = toupper(c);
	
	for (int i = 0; i < copy.size(); i++)
		std::cout << copy[i] << std::endl;
	std::cout << std::endl;
	// 3) alle dubbele te verwijderen
	copy.resize(0);
	for (int i = 0; i < colours.size(); i++)
		copy.push_back(colours[i]);

	//to set and back to vector
	/*std::set<int> s(copy.begin(), copy.end());
	copy.assign(s.begin(), s.end());*/




	std::vector<double> numbers{ 10, 324422, 6, -23, 234.5, 654.1, 3.1242, -9.23, 635 };
	// gebruik functies uit <algorithm> en <functional> om (steeds vanuit een ORIGINELE copie van deze vector)
	// 1) alle negatieve elementen te verwijderen

	//removeif


	// 2) voor alle elementen te bepalen of ze even of oneven zijn

	// if ( x % 2 == 0 )

	// 3) de som, het gemiddelde, en het product van alle getallen te berekenen

	return 0;
}