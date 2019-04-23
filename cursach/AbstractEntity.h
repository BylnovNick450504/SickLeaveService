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

	virtual void enterData();
	virtual void printData();
};