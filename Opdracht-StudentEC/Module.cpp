#include "Module.h"
#include <iostream>
#include <iterator>

Module::Module(std::string name, int EC) : name(name), EC(EC) {}
Module::~Module(){}

void Module::AddStudent(Student* student)
{
	students.push_back(student);
	(*student).modules.push_back(this);
}

void Module::printModule()
{
	std::cout << "Module: " << name << ", Docent: " << docent->name << std::endl;
	std::cout << "Students: " << std::endl;

	std::vector<Student *>::iterator i = students.begin();
	while (i != students.end()) {
		std::cout << (*(*i)).name << std::endl;
		i++;
	}

}
