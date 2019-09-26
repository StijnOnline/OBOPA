#pragma once
#include <string>
#include <vector>
#include "Student.h"
#include "Docent.h"

class Module
{
public:
	Module(std::string name, int EC);
	virtual ~Module();
	std::string name;
	int EC = 0;
	Docent* docent;
	std::vector<Student*> students;

public:
	void AddStudent(Student* student);
	void RemoveStudent(Student* student);
	void printModule();
	
};

