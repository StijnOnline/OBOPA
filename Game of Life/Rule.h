#pragma once
class Rule
{
public: 
	Rule();
	virtual ~Rule();
	virtual bool getNewCellState(bool currentstate, int neighbours) = 0;
};

