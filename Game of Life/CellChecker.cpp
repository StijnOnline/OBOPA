#include "CellChecker.h"

CellChecker::CellChecker(Rule* rule){
	CellChecker::rule = rule;
}
CellChecker::~CellChecker() {
}

bool CellChecker::getNewCellState(bool currentstate, int neighbours) {
	return (*rule).getNewCellState(currentstate, neighbours);
}