#include <iostream>
#include "Board.h"

#include "CellChecker.h"
#include "DefaultRule.h"
#include "ModifiedRule.h"
#include "Rule.h"

Board::Board() {
	//rule = new DefaultRule();
	rule = new ModifiedRule();

	cellChecker = new CellChecker(rule);
}
Board::~Board() {
	delete rule;
	delete cellChecker;
}

void Board::randomize()
{
	for (int x = 0; x < BOARD_SIZE; x++) {
		for (int y = 0; y < BOARD_SIZE; y++) {
			auto r = rand() % 2;
			board[x][y] = r;
		}
	}
}

bool Board::getCell(int x, int y)
{
	if (x < 0 || x >= BOARD_SIZE || y < 0 || y >= BOARD_SIZE) { return false; }
	else { return board[x][y]; }
}

int Board::getneighbours(int x, int y)
{
	int neighbours = 0;
	neighbours += getCell(x - 1, y + 1);//top left
	neighbours += getCell(x, y + 1);//top middle
	neighbours += getCell(x + 1, y + 1);//top right
	neighbours += getCell(x + 1, y);//middle right
	neighbours += getCell(x + 1, y - 1);//bottom right
	neighbours += getCell(x, y - 1);//bottom middle
	neighbours += getCell(x - 1, y - 1);//bottom left
	neighbours += getCell(x - 1, y);//middle left
	return neighbours;
}

void Board::updateBoard()
{
	bool newBoard[BOARD_SIZE][BOARD_SIZE];

	for (int y = 0; y < BOARD_SIZE; y++) {
		for (int x = 0; x < BOARD_SIZE; x++) {
			newBoard[x][y] = cellChecker->getNewCellState(getCell(x, y), getneighbours(x, y));
		}
	}
	//	board = newBoard;
	for (int y = 0; y < BOARD_SIZE; y++) {
		for (int x = 0; x < BOARD_SIZE; x++) {
			board[x][y] = newBoard[x][y];
		}
	}
}

void Board::printBoard()
{
	for (int y = 0; y < BOARD_SIZE; y++) {
		for (int x = 0; x < BOARD_SIZE; x++) {
			if (getCell(x, y)) {
				std::cout << (char)219 << (char)219; //2*█= ██ 
			}
			else {
				std::cout << (char)176 << (char)176; //2*░= ░░
			}
		}
		std::cout << std::endl;
	}
}
