#pragma once
#include "pch.h"
#include <iostream>
#include <string>
#include "AbstractEntity.h"

class Human : public AbstractEntity {
private:
	std::string name;
public:
	std::string getName();
	void setName(std::string name);
	Human(int id, std::string name);
};