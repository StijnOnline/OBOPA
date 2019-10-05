#include <iostream>
#include <vector>
#include "TemplateQueue.h"

int main()
{
	TemplateQueue<int> test;
	test.put(1);
	test.put(3);
	test.put(2);

	std::cout << "Size: " << test.size() << " Get: " << test.get() << std::endl; 
	std::cout << "Size: " << test.size() << " Get: " << test.get() << std::endl;
	std::cout << "Size: " << test.size() << " Get: " << test.get() << std::endl; //get function is executed first, size here is 0
	std::cout << "Size: " << test.size();


	return 0;
}