#pragma once
#include "Role.h"

class Farmer : public Role
{
public:
	Farmer(NPC* npc);
	virtual ~Farmer();

	void render();
};

