#pragma once
#include "pch.h"
#include <iostream>
#include <string>
#include "AbstractEntity.h"

class Human : public AbstractEntity {
private:
	std::string name;
	std::string email;
	std::string phone;
public:
	Human();
	Human(int id, std::string name);
	
	std::string getName();
	void setName(std::string name);
	std::string getEmail();
	void setEmail(std::string email);
	std::string getPhone();
	void setPhone(std::string phone);

	void enterData() override;
	void printData() override;
	void printBriefInfo() override;

	void writeToFile(std::ostream& out) override;
	void readFromFile(std::istream& in) override;
};