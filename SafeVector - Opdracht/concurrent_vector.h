#pragma once
#include <vector>
#include <mutex>
#include <future>

template<typename T>
class concurrent_vector
{
public:
	concurrent_vector();
	virtual ~concurrent_vector();

	void add(T);
	void get(std::promise<T>* promise, int i);
	void erase(int i);
	void print();

private:
	std::vector<T> vector;
	std::mutex mutex;
};