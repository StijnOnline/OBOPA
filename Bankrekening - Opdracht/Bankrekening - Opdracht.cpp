#include <iostream>
#include "BankRekening.h"

int main()
{
	BankRekening* bankRekening = new BankRekening(163.82);
	std::cout << (*bankRekening);

	(*bankRekening) += Transactie(0, 14.90, "29/9/19"); //created on stack?
	(*bankRekening) += Transactie(1, 99.99, "4/10/19", true);

	Transactie t = Transactie(2, 49.99, "10/10/19", true);
	(*bankRekening) += t;
	(*bankRekening) -= t;

	std::cout << (*bankRekening);
	   
	std::cin.ignore();
}