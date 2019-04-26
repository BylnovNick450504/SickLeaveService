#pragma once
#include "pch.h"
#include <iostream>
#include "Human.h"

class Patient: public Human {
private:
	std::string cardNumber;
	std::string passportNumber;
public:
	Patient();
	Patient(int id, std::string name);

	std::string getCardNumber();
	void setCardNumber(std::string cardNumber);
	std::string getPassportNumber();
	void setPassportNumber(std::string passportNumber);
	
	void enterData() override;
	void printData() override;
	void printBriefInfo() override;

	void writeToFile(std::ostream& out) override;
	void readFromFile(std::istream& in) override;
};