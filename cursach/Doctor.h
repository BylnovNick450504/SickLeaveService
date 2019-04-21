#pragma once
#include "pch.h"
#include <iostream>
#include <string>
#include "Human.h"

class Doctor : public Human {
private:
	std::string specialization;
public:
	std::string getSpecialization();
	void setSpecialization(std::string specialization);
	Doctor(int id, std::string name, std::string specialization);
};