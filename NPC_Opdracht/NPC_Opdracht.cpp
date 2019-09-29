#include <iostream>
#include "NPC.h"

#include "Orc.h"
#include "Elve.h"

#include "Soldier.h"
#include "Farmer.h"
#include "Shaman.h"

int main()
{
	NPC* npc1 = new Shaman(new Orc("morgul"));
	NPC* npc2 = new Soldier(new Shaman(new Elve("murgl")));
	NPC* npc3 = new Farmer(new Soldier(new Shaman(new Elve("murgl"))));

	npc1->render();
	npc2->render();
	npc3->render();

}