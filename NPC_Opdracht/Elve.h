#pragma once
#include "NPC.h"
class Elve : public NPC
{
	public:
		Elve(std::string name);
		virtual ~Elve();

		void render();
};

