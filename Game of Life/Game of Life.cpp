#include <iostream>
#include <windows.h>

#include "Board.h"

int main()
{
	const int MAX_CYCLES = 10;

	Board* board = new Board();
	board->randomize();

	for (int i = 0; i <= MAX_CYCLES; i++) {
		Sleep(2000);
		system("CLS");
		board->updateBoard();
		std::cout << "Cycle " << i << " of " << MAX_CYCLES <<std::endl;
		board->printBoard();
	}

}