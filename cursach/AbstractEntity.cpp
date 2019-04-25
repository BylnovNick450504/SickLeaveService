#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

AbstractEntity::AbstractEntity() {
}

AbstractEntity::AbstractEntity(int id) {
	this->id = id;
}

int AbstractEntity::getId() {
	return id;
}

void AbstractEntity::setId(int id) {
	this->id = id;
}

void AbstractEntity::printData() {
	cout << "id: " << id << endl;
}

void AbstractEntity::enterData() {
	cout << "Please enter id: ";
	cin >> id;
}

void AbstractEntity::writeToFile(ostream& out) {
	out << id << endl;
}

void AbstractEntity::readFromFile(istream& in) {
	in >> id;
}
