#include "pch.h"

using namespace std;

Disease::Disease(int id, string name, int diseaseCode) : AbstractEntity(id) {
	this->name = name;
	this->diseaseCode = diseaseCode;
}

string Disease::getName() {
	return name;
}

void Disease::setName(string name) {
	this->name = name;
}

int Disease::getDiseaseCode() {
	return diseaseCode;
}

void Disease::setDiseaseCode(int diseaseCode) {
	this->diseaseCode = diseaseCode;
}
