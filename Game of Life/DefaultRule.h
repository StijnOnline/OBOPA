#pragma once
#include "Rule.h"


class DefaultRules: public Rule
{
public:
	DefaultRules();
	virtual ~DefaultRules();
	bool getNewCellState(bool currentstate, int neigbour) override;
};