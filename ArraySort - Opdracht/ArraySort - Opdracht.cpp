#include <iostream>
#include <algorithm>

class Poep {

};


template<typename T>
void templateSort(T list, int size) {	
	std::sort(list, list + size);
}

int main()
{
	float floatlist[] = { 1,3,2 };
	templateSort(floatlist,3);
	std::cout << floatlist[0] << floatlist[1] << floatlist[2] << std::endl;

	std::string stringlist[] = {  "Citroen", "Banaan","Appel" };
	templateSort(stringlist, 3);
	std::cout << stringlist[0] << stringlist[1] << stringlist[2] << std::endl;

	bool boollist[] = { false, true, false }; //dacht dat dit niet zou werken, maar realizeerde dat het wel kan
	templateSort(boollist, 3);
	std::cout << boollist[0] << boollist[1] << boollist[2] << std::endl;	

}