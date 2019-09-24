#include "CellChecker.h"

CellChecker::CellChecker(Rule* rule){
	CellChecker::rule = rule;
}
CellChecker::~CellChecker() {
}

bool CellChecker::getNewCellState(bool currentstate, int neigbours) {
	return (*rule).getNewCellState(currentstate, neigbours);

	/*float btw = berekening->geefBTW(type, bedrag);

	float totaalPrijs = bedrag + btw;

	std::cout << "Totaal : " << totaalPrijs << std::endl;
	std::cout << "   BTW : " << btw << std::endl;*/
}