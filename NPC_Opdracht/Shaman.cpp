#include "Shaman.h"
#include <iostream>

Shaman::Shaman(NPC* npc) : Role(npc){
}

Shaman::~Shaman(){}

void Shaman::render()
{
	Role::render();
	std::cout << "- Role: Shaman" << std::endl;
}
