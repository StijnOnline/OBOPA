#include "DefaultRule.h"

DefaultRule::DefaultRule() {}

DefaultRule::~DefaultRule() {}

bool GetNewCellState(bool currentstate, int neigbours) {
	if ((neigbours < 2 || neigbours > 3) && currentstate) { return false; }
	else if ( neigbours == 3 && !currentstate) { return true; }
	else { return currentstate; }
}