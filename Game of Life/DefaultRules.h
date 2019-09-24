#pragma once
#include "Rule.h"


class DefaultRule : public Rule {
public:
	DefaultRule();
	virtual ~DefaultRule();
	bool GetNewCellState(bool currentstate, int neigbours) override;
};