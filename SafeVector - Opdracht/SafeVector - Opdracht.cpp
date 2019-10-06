#include <iostream>
#include "concurrent_vector.h"
//somehow needed
#include "concurrent_vector.cpp"

int main()
{
	std::promise<int> promise;
	std::future<int> future = promise.get_future();

	concurrent_vector<int>* cvector = new concurrent_vector<int>();

	std::thread thread1 = std::thread(&concurrent_vector<int>::add, cvector, 1);
	std::thread thread2 = std::thread(&concurrent_vector<int>::get, &promise, 0);
	//^ something wrong with this line causes:
	//	C2672 in thread line 39:14
	//  C2893 in thread line 35:1


	thread1.join();
	//thread2.join();

	cvector->print();


	std::cout << future.get();
}