#pragma once
#include <string>

class Transactie
{
private:
	bool receive = false;
	double amount = 0;
	std::string date; //makkelijker als een string
public:
	Transactie(double amount, std::string date, bool receiving = false);
	virtual ~Transactie();

	bool isReceive() const;
	double getAmount() const;
	std::string getDate() const;
};