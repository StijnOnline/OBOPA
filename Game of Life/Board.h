#pragma once
#include "Rule.h"
#include "CellChecker.h"
class Board
{
public:
	Board();
	virtual ~Board();
	void randomize();
	bool getCell(int x, int y);
	int getneighbours(int x, int y);
	void updateBoard();
	void printBoard();
private:
	static const int BOARD_SIZE = 5;
	bool board[BOARD_SIZE][BOARD_SIZE] = { 0 };
	Rule* rule;
	CellChecker* cellChecker;
};