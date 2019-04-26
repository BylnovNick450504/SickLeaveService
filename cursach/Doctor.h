#pragma once
#include "pch.h"
#include <iostream>
#include <string>
#include "Human.h"

class Doctor : public Human {
private:
	std::string specialization;
public:
	Doctor();
	Doctor(int id, std::string name, std::string specialization);
	
	std::string getSpecialization();
	void setSpecialization(std::string specialization);
	
	void enterData() override;
	void printData() override;
	void printBriefInfo() override;

	void writeToFile(std::ostream& out) override;
	void readFromFile(std::istream& in) override;
};