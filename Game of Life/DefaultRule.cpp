#include "DefaultRule.h"

DefaultRule::DefaultRule() {}
DefaultRule::~DefaultRule() {}


bool DefaultRule::getNewCellState(bool currentstate, int neighbours) {
	if ((neighbours < 2 || neighbours > 3) && currentstate) { return false; }
	else if ( neighbours == 3 && !currentstate) { return true; }
	else { return currentstate; }
}


