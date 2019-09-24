#include <iostream>
#include "Board.h"

#include "CellChecker.h"
#include "DefaultRule.h"
#include "Rule.h"

Board::Board(){
	rule = new DefaultRules();
	cellChecker = new CellChecker(rule);
}
Board::~Board(){}

void Board::randomize()
{
	for (int x = 0; x < 5; x++) {
		for (int y = 0; y < 5; y++) {
			auto r = rand() % 2;
			board[x][y] = r;
		}
	}
}

bool Board::getCell(int x, int y)
{
	if (x < 0 || x>4 || y < 0 || y>4) { return false; }
	else { return board[x][y]; }
}

int Board::getNeigbours(int x, int y)
{
	int neighbours = 0;
	neighbours += getCell(x+1, y);
	neighbours += getCell(x-1, y);
	neighbours += getCell(x, y+1);
	neighbours += getCell(x, y-1);
	return neighbours;
}

void Board::updateBoard()
{	
	bool newBoard[5][5];

	for (int y = 0; y < 5; y++) {
		for (int x = 0; x < 5; x++) {
			newBoard[x][y] = cellChecker->getNewCellState(getCell(x, y), getNeigbours(x, y));
		}
	}
	board = newBoard;
}

void Board::printBoard()
{
	for (int y = 0; y < 5; y++) {
		for (int x = 0; x < 5; x++) {
			std::cout << getCell(x, y);
		}
		std::cout << std::endl;
	}
}
