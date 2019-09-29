#pragma once
#include <vector>
#include "Transactie.h"

class BankRekening
{
private:
	double saldo = 0;
	std::vector<Transactie*> transacties;
public:
	BankRekening(double saldo);
	virtual ~BankRekening();

	BankRekening& operator+=(Transactie& transactie);
	BankRekening& operator-=(Transactie& transactie);

	friend std::ostream& operator<<(std::ostream& os, const BankRekening& rekening);
};

