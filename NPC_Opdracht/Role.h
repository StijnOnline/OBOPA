#pragma once
#include "NPC.h"

class Role : public NPC
{
private:
	NPC* npc;
public:
	Role(NPC* this_npc);
	virtual ~Role();


	virtual void render();
};