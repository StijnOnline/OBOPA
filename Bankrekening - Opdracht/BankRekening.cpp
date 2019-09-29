#include "BankRekening.h"

BankRekening::BankRekening(double saldo) : saldo(saldo) {}

BankRekening::~BankRekening(){}

BankRekening& BankRekening::operator+=(Transactie& transactie) //wat is const&  ?
{
	saldo += transactie.getAmount() * ((transactie.isReceive() * 2) - 1);
	transacties.push_back(&transactie);
	return *this;
}

BankRekening& BankRekening::operator-=(Transactie& transactie)
{
	saldo -= transactie.getAmount() * ((transactie.isReceive() * 2) - 1);
	auto i = std::find(transacties.begin(), transacties.end(), transactie);
	transacties.erase(i);
	return *this;
}

std::ostream& operator<<(std::ostream& os, const BankRekening& rekening) {
	//os << "Saldo: "<< rekening.saldo;    strings geven error
	os << rekening.saldo;
	return os;
}
