#include "BankRekening.h"
#include <algorithm>

BankRekening::BankRekening(double saldo) : saldo(saldo) {}

BankRekening::~BankRekening(){}

BankRekening& BankRekening::operator+=(const  Transactie& transactie) //wat is const&  ?
{
	saldo += transactie.getAmount() * (transactie.isReceive() ? 1 : -1);
	const Transactie* t = &transactie;
	transacties.push_back(t);
	return *this;
}

BankRekening& BankRekening::operator-=(const  Transactie& transactie)
{
	saldo -= transactie.getAmount() * (transactie.isReceive() ? 1 : -1);
	auto i = std::find(transacties.begin(), transacties.end(), &transactie);
	transacties.erase(i);
	return *this;
}

std::ostream& operator<<(std::ostream& os, const BankRekening& rekening) {
	os << "Saldo: " << rekening.saldo << std::endl;
	if (rekening.transacties.size() == 0) {
		os << "Geen Transacties" << std::endl;
	}
	else {
		os << "Transacties: " << std::endl;
		auto i = rekening.transacties.begin();
		while (i != rekening.transacties.end()) {
			os << " " << ((*i)->isReceive() ? "+" : "-") << " ";
			os << (*i)->getAmount() << " ";
			os << (*i)->getDate() << std::endl; //getDate not executed?
			i++;
		}
	}
		
	os <<std::endl;
	return os;
}
