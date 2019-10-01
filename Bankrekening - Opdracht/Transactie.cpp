#include "Transactie.h"


#include <iostream>

Transactie::Transactie(double amount, std::string date, bool receiving )
	: receive(receiving), amount(amount), date(date)
{
	
}

Transactie::~Transactie(){}

bool Transactie::isReceive() const
{
	return receive;
}

double Transactie::getAmount() const
{
	return amount;
}

std::string Transactie::getDate() const
{
	std::cout << date; //not executed
	return date;
}
