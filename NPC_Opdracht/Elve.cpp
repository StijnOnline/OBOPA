#include "Elve.h"
#include <iostream>
Elve::Elve(std::string this_name)
{
	name = this_name;
}

Elve::~Elve() {}

void Elve::render()
{
	std::cout << "Elve: " << name << std::endl;
}
