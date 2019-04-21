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
