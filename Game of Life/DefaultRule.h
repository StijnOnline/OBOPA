#pragma once
#include "Rule.h"


class DefaultRule: public Rule
{
public:
	DefaultRule();
	virtual ~DefaultRule();
	bool getNewCellState(bool currentstate, int neigbour) override;
};