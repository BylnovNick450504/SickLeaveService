#pragma once
#include "pch.h"
#include <iostream>
#include <string>

class AbstractEntity {
private :
	int id;
	std::string name;
public:
	int getId();
	std::string getName();
	void setId(int id);
	void setName(std::string name);
	AbstractEntity(int id, std::string name);
};