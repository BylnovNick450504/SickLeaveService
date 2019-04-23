#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

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
	cout << "Id: " + this->id;
}

void AbstractEntity::enterData() {
	cout << "Please enter id: ";
	cin >> this->id;
}
