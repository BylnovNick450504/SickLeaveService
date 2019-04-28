#pragma once
#include "pch.h"
#include <iostream>
#include <string>

class AbstractEntity {
private :
	int id;
public:
	int getId();
	void setId(int id);
	AbstractEntity(int id);
	AbstractEntity();

	virtual void enterData(int id);
	virtual void printData();
	virtual void printBriefInfo() = 0;

	virtual void writeToFile(std::ostream& out);
	virtual void readFromFile(std::istream& in);
};