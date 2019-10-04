#pragma once
#include <string>

class Transactie
{
private:
	int ID;
	bool receive = false;
	double amount = 0;
	std::string date; //makkelijker als een string
public:
	Transactie(int ID, double amount, std::string date, bool receiving = false);
	virtual ~Transactie();

	int getID() const;
	bool isReceive() const;
	double getAmount() const;
	std::string getDate() const;
};