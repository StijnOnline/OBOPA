#include "ModifiedRule.h"

ModifiedRule::ModifiedRule() {}
ModifiedRule::~ModifiedRule() {}


bool ModifiedRule::getNewCellState(bool currentstate, int neighbours) {
	return neighbours % 2 == 0; 
}
