#include "pch.h"
#include "Human.h"
#include <iostream>
#include <string>

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

string Human::getEmail() {
	return email;
}

void Human::setEmail(string email) {
	this->email = email;
}

string Human::getPhone() {
	return phone;
}

void Human::setPhone(string phone) {
	this->phone = phone;
}