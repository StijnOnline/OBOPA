#include <iostream>
#include "BankRekening.h"

int main()
{
	BankRekening bankRekening = BankRekening( 163.82 );
	std::cout << bankRekening;
	
	bankRekening += Transactie(14.90, "29/9/19"); //created on stack?
	bankRekening += Transactie(99.99, "4/10/19" , true);

	std::cout << bankRekening;
}