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
	mutex.lock();
	vector.push_back(item);
	mutex.unlock();
}

template<typename T>
void concurrent_vector<T>::get(std::promise<T>* promise, int i)
{
	mutex.lock();
	T value = vector[i];	
	promise->set_value(value);
	mutex.unlock();
}

template<typename T>
void concurrent_vector<T>::erase(int i)
{
	mutex.lock();
	vector.erase(i);
	mutex.unlock();
}

template<typename T>
void concurrent_vector<T>::print()
{
	auto i = vector.begin();
	while (i != vector.end()) {
		std::cout << (*i) << std::endl;
		i++;
	}
}
