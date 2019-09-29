#include "Soldier.h"
#include <iostream>

Soldier::Soldier(NPC* npc) : Role(npc) {
}

Soldier::~Soldier() {}

void Soldier::render()
{
	Role::render();
	std::cout << "- Role: Soldier" << std::endl;
}
