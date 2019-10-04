#include "Transactie.h"


#include <iostream>
#include <string>

Transactie::Transactie(int ID, double amount, std::string date, bool receiving )
	: ID(ID), receive(receiving), amount(amount), date(date)
{
	
}

Transactie::~Transactie(){}

int Transactie::getID() const
{
	return ID;
}

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
