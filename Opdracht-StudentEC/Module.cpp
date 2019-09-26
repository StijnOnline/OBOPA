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

void Module::RemoveStudent(Student* student)
{
	auto position = std::find(students.begin(), students.end(), student);
	if (position != students.end())
		students.erase(position);

	auto position2 = std::find((*student).modules.begin(), (*student).modules.end(), this);
	if (position2 != (*student).modules.end())
		(*student).modules.erase(position2);
}

void Module::printModule()
{
	std::cout << "Module: " << name << ", Docent: " << docent->name << std::endl;
	std::cout << "Students: ";

	std::vector<Student *>::iterator i = students.begin();
	while (i != students.end()) {
		std::cout << (*(*i)).name << " , ";
		i++;
	}
	std::cout << std::endl << std::endl;
}
