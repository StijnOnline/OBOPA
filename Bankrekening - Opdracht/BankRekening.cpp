#include "BankRekening.h"
#include <algorithm>

BankRekening::BankRekening(double saldo) : saldo(saldo) {}

BankRekening::~BankRekening(){
	//does this work?
	auto i = transacties.begin();
	while (i != transacties.end()) {
		delete (*i);
		i++;
	}	
	transacties.resize(0);
}

BankRekening& BankRekening::operator+=(const  Transactie& transactie)
{
	//TODO: if does not already contain

	saldo += transactie.getAmount() * (transactie.isReceive() ? 1 : -1);
	const Transactie* t = new Transactie(transactie.getID(), transactie.getAmount(),transactie.getDate(),transactie.isReceive());
	transacties.push_back(t);
	
	return *this;
}

BankRekening& BankRekening::operator-=(const  Transactie& transactie)
{
	auto i = transacties.begin();
	while (i != transacties.end()) {
		if ((*i)->getID() == transactie.getID()) {
			//does this work?
			delete (*i);
			transacties.erase(i);
			break;
		}
		else {
			i++;
		}
	}

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
			os << (*i)->getDate() << std::endl;
			i++;
		}
	}
		
	os <<std::endl;
	return os;
}
