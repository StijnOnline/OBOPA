#include "Role.h"
#include "NPC.h"

Role::Role(NPC* this_npc){
	npc = this_npc;
}

Role::~Role(){
	if (npc) { delete npc; }
}

void Role::render() {
	npc->render();
}
