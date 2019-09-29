#pragma once
#include "Role.h"

class Soldier : public Role
{
public:
	Soldier(NPC* npc);
	virtual ~Soldier();

	void render();
};


