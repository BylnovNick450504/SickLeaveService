#pragma once
#include "pch.h"
#include "AbstractEntity.h"
#include <iostream>
#include <string>

class Disease : public AbstractEntity {
private:
	std::string name;
	int diseaseCode;
public:
	Disease();
	Disease(int id, std::string name, int diseaseCode);
	std::string getName();
	void setName(std::string name);
	int getDiseaseCode();
	void setDiseaseCode(int diseaseCode);

	void enterData() override;
	void printData() override;
	void printBriefInfo() override;

	void writeToFile(std::ostream& out) override;
	void readFromFile(std::istream& in) override;
};