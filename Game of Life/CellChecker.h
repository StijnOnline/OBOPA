#pragma once
#include "Rule.h"

class CellChecker {

public:
	CellChecker(Rule* rule);
	virtual ~CellChecker();

	bool getNewCellState(bool currentstate, int neighbours);

private:
	Rule* rule;
};

