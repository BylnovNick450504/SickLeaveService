#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

Doctor::Doctor(): Human() {}

Doctor::Doctor(int id, string name, string specialization): Human(id, name) {
	this->specialization = specialization;
}

string Doctor::getSpecialization() {
	return this->specialization;
}

void Doctor::setSpecialization(string specialization) {
	this->specialization = specialization;
}

void Doctor::enterData(int id) {
	Human::enterData(id);
	cout << "Please enter specialization: ";
	cin >> specialization;
}

void Doctor::printData() {
	Human::printData();
	cout << "Specialization: " << specialization << endl;
}

void Doctor::printBriefInfo() {
	Human::printBriefInfo();
}

void Doctor::writeToFile(ostream& out) {
	Human::writeToFile(out);
	out << specialization << endl;
	return;
}

void Doctor::readFromFile(istream& in) {
	Human::readFromFile(in);
	in >> specialization;
	return;
}