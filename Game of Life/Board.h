#pragma once
class Board
{
public:
	Board();
	virtual ~Board();
	void randomize();
	bool getCell(int x, int y);
	int getNeigbours(int x, int y);
	void updateBoard();
	void printBoard();
private:
	bool board[5][5] = { 0 };
	Rule* rule;
	CellChecker* cellChecker;
};

