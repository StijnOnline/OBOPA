#pragma once
#include <string>
#include <vector>

class Student
{
public:
	Student(std::string name);
	virtual ~Student();
	std::string name;	
	std::vector<Module*> modules;
public:
	void printEC();
};

