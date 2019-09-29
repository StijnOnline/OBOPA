#include <iostream>
#include "BankRekening.h"

int main()
{
	BankRekening bankRekening = BankRekening( 163.82 );

	Transactie t = Transactie(14.90 , "29/9/19" );

	bankRekening += t;

	std::cout << bankRekening;
}