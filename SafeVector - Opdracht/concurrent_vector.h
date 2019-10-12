#pragma once
#include <vector>
#include <mutex>
#include <future>

template<typename T>
class concurrent_vector
{
public:
	bool safe = true;

	concurrent_vector();
	virtual ~concurrent_vector();

	void add(T);
	void printLength();
	void printAll();

private:
	std::vector<T> vector;
	std::mutex mutex;
};