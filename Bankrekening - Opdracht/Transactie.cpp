#include "Transactie.h"

Transactie::Transactie(double amount, std::string date, bool receive )
	: receive(receive), amount(amount), date(date)
{
}

Transactie::~Transactie()
{
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
