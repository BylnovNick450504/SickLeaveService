#pragma once
#include "pch.h"
#include <iostream>
#include <string>
#include "AbstractEntity.h"

class Doctor : public AbstractEntity {
private:
	std::string specialization;
public:
	std::string getSpecialization();
	void setSpecialization(std::string specialization);
	Doctor(int id, std::string name, std::string specialization);
};