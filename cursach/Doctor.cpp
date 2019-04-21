#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

Doctor::Doctor(int id, string name, string specialization): Human(id, name) {
	this->specialization = specialization;
}

string Doctor::getSpecialization() {
	return this->specialization;
}

void Doctor::setSpecialization(string specialization) {
	this->specialization = specialization;
}