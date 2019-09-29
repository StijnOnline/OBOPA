#pragma once
#include "Role.h"

class Shaman : public Role
{
public:
	Shaman(NPC* npc);
	virtual ~Shaman();

	void render();
};

