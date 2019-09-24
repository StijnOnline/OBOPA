#include "DefaultRule.h"

DefaultRules::DefaultRules() {}
DefaultRules::~DefaultRules() {}


bool DefaultRules::getNewCellState(bool currentstate, int neigbours) {
	if ((neigbours < 2 || neigbours > 3) && currentstate) { return false; }
	else if ( neigbours == 3 && !currentstate) { return true; }
	else { return currentstate; }
}


