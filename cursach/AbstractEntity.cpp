#include "pch.h"

AbstractEntity::AbstractEntity(int id) {
	this->id = id;
}

int AbstractEntity::getId() {
	return id;
}

void AbstractEntity::setId(int id) {
	this->id = id;
}