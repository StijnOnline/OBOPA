#include "Student.h"
#include "Module.h"
#include <iostream>

Student::Student(std::string name) : name(name) {}
Student::~Student(){}

void Student::printEC()
{
	int EC = 0;
	std::vector<Module*>::iterator i = modules.begin();
	while (i != modules.end()) {
		EC += (*(*i)).EC;
	}
	std::cout << "Student: " << name << " EC:" << EC << std::endl;
}
