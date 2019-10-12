#include "concurrent_vector.h"

template<typename T>
concurrent_vector<T>::concurrent_vector()
{
}

template<typename T>
concurrent_vector<T>::~concurrent_vector()
{
}

template<typename T>
void concurrent_vector<T>::add(T item)
{
	std::lock_guard<std::mutex> guard(mutex);

	vector.push_back(item);
	
}

template<typename T>
void concurrent_vector<T>::printLength()
{
	std::lock_guard<std::mutex> guard(mutex);

	std::cout << "Vector has a size of " << vector.size() << std::endl;

}

template<typename T>
void concurrent_vector<T>::printAll()
{
	std::lock_guard<std::mutex> guard(mutex);

	std::cout << "Vector Contents: " << std::endl;
	auto i = vector.begin();
	while (i != vector.end()) {
		std::cout << (*i) << ", ";
		i++;
	}
	std::cout << std::endl;
}