#include <iostream>
#include "concurrent_vector.h"
//somehow needed
#include "concurrent_vector.cpp"

int main()
{
	concurrent_vector<int>* cvector = new concurrent_vector<int>();
	cvector->add(0);

	std::thread thread1 = std::thread(&concurrent_vector<int>::add, cvector, 1);
	std::thread thread2 = std::thread(&concurrent_vector<int>::printLength, cvector);

	//apparently working, but not for me

	thread1.join();
	thread2.join();

	cvector->printAll();

	std::cin.ignore();
}