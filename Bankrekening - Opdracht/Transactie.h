#pragma once
#include <string>

class Transactie
{
private:
	bool receive = false;
	double amount = 0;
	std::string date; //makkelijker
public:
	Transactie(double amount, std::string date, bool receive = false);
	virtual ~Transactie();

	bool isReceive() const;
	double getAmount() const;
	std::string getDate() const;
};

