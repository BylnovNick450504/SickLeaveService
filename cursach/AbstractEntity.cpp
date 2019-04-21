#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

AbstractEntity::AbstractEntity(int id, string name) {
	this->id = id;
	this->name = name;
}

int AbstractEntity::getId() {
	return id;
}

string AbstractEntity::getName() {
	return name;
}

void AbstractEntity::setId(int id) {
	this->id = id;
}

void AbstractEntity::setName(string name) {
	this->name = name;
}