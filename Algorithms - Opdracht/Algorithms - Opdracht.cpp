#include <iostream>
#include <algorithm>
#include <functional>
#include <vector>
#include <set>
#include <cmath>

template<typename T>
void printVector(T vector) {
	for (int i = 0; i < vector.size(); i++)
		std::cout << vector[i] << std::endl;
}

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

	std::cout << "Sorted Alphabetically:" << std::endl;
	printVector(beforePurple);
	std::cout << " - purple" << std::endl;
	printVector(afterPurple);
	std::cout << std::endl;
	// 2) alle elementen UPPERCASE te maken.
	copy.resize(0);
	for (int i = 0; i < colours.size(); i++)
		copy.push_back(colours[i]);

	for (int i = 0; i < copy.size(); i++)
		for (auto& c : copy[i]) c = toupper(c);
	
	std::cout << "All uppercase:" << std::endl;
	printVector(copy);
	std::cout << std::endl;
	// 3) alle dubbele te verwijderen
	copy.resize(0);
	for (int i = 0; i < colours.size(); i++)
		copy.push_back(colours[i]);

	std::set<std::string> s(copy.begin(), copy.end());
	copy.assign(s.begin(), s.end());

	std::cout << "No double strings:" << std::endl;
	printVector(copy);
	std::cout << std::endl;


	std::vector<double> numbers{ 10, 324422, 6, -23, 234.5, 654.1, 3.1242, -9.23, 635 };
	// gebruik functies uit <algorithm> en <functional> om (steeds vanuit een ORIGINELE copie van deze vector)
	// 1) alle negatieve elementen te verwijderen
	std::vector<double> copy2;
	for (int i = 0; i < numbers.size(); i++)
		copy2.push_back(numbers[i]);
	
	auto isnegative = [](double number) -> bool {
		return number < 0;
	};

	copy2.erase(std::remove_if(copy2.begin(), copy2.end(), isnegative), copy2.end());

	std::cout << "Positive numbers:" << std::endl;
	printVector(copy2);
	std::cout << std::endl;

	// 2) voor alle elementen te bepalen of ze even of oneven zijn
	copy2.resize(0);
	for (int i = 0; i < numbers.size(); i++)
		copy2.push_back(numbers[i]);

	auto isodd = [](double number) -> bool {
		return (fmod(number, 2) != 0);
	};

	copy2.erase(std::remove_if(copy2.begin(), copy2.end(), isodd), copy2.end());

	std::cout << "Even numbers:" << std::endl;
	printVector(copy2);
	std::cout << std::endl;
	

	// 3) de som, het gemiddelde, en het product van alle getallen te berekenen
	copy2.resize(0);
	for (int i = 0; i < numbers.size(); i++)
		copy2.push_back(numbers[i]);

	double sum = 0;
	for (std::vector<double>::iterator it = numbers.begin(); it != numbers.end(); ++it)
		sum += *it;

	std::cout << "Sum of numbers: " << sum << std::endl;

	double average = sum / numbers.size();

	std::cout << "Average of numbers: " << average << std::endl;

	double product = 1;
	for (auto it = numbers.begin(); it != numbers.end(); ++it)
		product *= *it;

	std::cout << "Product of numbers: " << product << std::endl;

	return 0;
}