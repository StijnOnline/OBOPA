#include <iostream>
#include "Board.h"

int main()
{
	Board* board = new Board();
	board->randomize();
	
	//tests
	//std::cout << (*board).getNeigbours(1, 0) << std::endl; // false
	//std::cout << cellChecker->getNewCellState(true,0) << std::endl; // false
	//std::cout << cellChecker->getNewCellState(true,5) << std::endl; //false
	//std::cout << cellChecker->getNewCellState(false,3) << std::endl; //true
	//std::cout << cellChecker->getNewCellState(false,0) << std::endl; //false

	std::cout << std::endl;
	board->printBoard();
}