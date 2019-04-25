#include "pch.h"
#include "Human.h"
#include <iostream>
#include <string>

using namespace std;

Human::Human(): AbstractEntity() {}

Human::Human(int id, string name): AbstractEntity(id) {
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

void Human::printData() {
	AbstractEntity::printData();
	cout << "Name: " << name << endl;
	cout << "Email: " << email << endl;
	cout << "Phone: " << phone << endl;
}

void Human::enterData() {
	AbstractEntity::enterData();
	cout << "Please enter name: ";
	cin >> name;
	cout << "Please enter email: ";
	cin >> email;
	cout << "Please enter phone: ";
	cin >> phone;
}

void Human::writeToFile(ostream& out) {
	AbstractEntity::writeToFile(out);
	out << name << "\n"
		<< email << "\n"
		<< phone << endl;
	return;
}

void Human::readFromFile(istream& in) {
	AbstractEntity::readFromFile(in);
	in >> name;
	in >> email;
	in >> phone;
	return;
}