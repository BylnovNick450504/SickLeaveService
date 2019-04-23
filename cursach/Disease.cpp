#include "pch.h"

using namespace std;

Disease::Disease(): AbstractEntity() {
}

Disease::Disease(int id, string name, int diseaseCode): AbstractEntity(id) {
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

void Disease::enterData() {
	AbstractEntity::enterData();
	cout << "Please enter disease name: ";
	cin >> this->name;
	cout << "Please enter disease code: ";
	cin >> this->diseaseCode;
}

void Disease::printData() {
	AbstractEntity::printData();
	cout << "Disease name: " << name << endl;
	cout << "Disease code: " << diseaseCode << endl;
}