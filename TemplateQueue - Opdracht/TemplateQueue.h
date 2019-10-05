#pragma once
template<typename T>
class TemplateQueue
{
public:
	TemplateQueue() {
	}

	void put(T element) {
		elements.push_back(element);
	}

	T get() {
		T temp = elements.back();
		elements.erase(--elements.end());
		return temp;
	}

	int size() {
		return elements.size();
	}

private:
	std::vector<T> elements;
};