#pragma once
#include <vector>
#include "Transactie.h"
#include <string>
#include <iostream>

class BankRekening
{
private:
	double saldo = 0;
	std::vector<const Transactie*> transacties;
public:
	BankRekening(double saldo);
	virtual ~BankRekening();

	BankRekening& operator+=(const  Transactie& transactie);
	BankRekening& operator-=(const  Transactie& transactie);

	friend std::ostream& operator<<(std::ostream& os, const BankRekening& rekening);
};