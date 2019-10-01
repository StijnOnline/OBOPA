#include "Transactie.h"


#include <iostream>
#include <string>

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
	return date;
}
