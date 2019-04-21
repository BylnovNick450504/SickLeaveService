#include "pch.h"
#include "Human.h"

using namespace std;

Human::Human(int id, string name) : AbstractEntity(id) {
	this->name = name;
}

string Human::getName() {
	return name;
}

void Human::setName(string name) {
	this->name = name;
}