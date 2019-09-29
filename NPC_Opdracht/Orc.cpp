#include "Orc.h"
#include <iostream>

Orc::Orc(std::string this_name)
{
	name = this_name;
}

Orc::~Orc(){}

void Orc::render()
{
	std::cout << "ORC: "<< name << std::endl;
}
