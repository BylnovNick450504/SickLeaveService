#pragma once
#include "pch.h"
#include <iostream>
#include "Human.h"

class Patient: public Human {
private:
	std::string cardNumber;
	std::string pasportNumber;
public:
	Patient(int id, std::string name);

	std::string getCardNumber();
	void setCardNumber(std::string cardNumber);
	std::string getPassportNumber();
	void setPassportNumber(std::string passportNumber);
};