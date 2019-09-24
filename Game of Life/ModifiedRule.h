#pragma once
#include "Rule.h"

class ModifiedRule : public Rule
{
public:
	ModifiedRule();
	virtual ~ModifiedRule();
	bool getNewCellState(bool currentstate, int neigbour) override;
};