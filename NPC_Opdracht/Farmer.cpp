#include "Farmer.h"
#include <iostream>

Farmer::Farmer(NPC* npc) : Role(npc) {
}

Farmer::~Farmer() {}

void Farmer::render()
{
	Role::render();
	std::cout << "- Role: Farmer" << std::endl;
}
