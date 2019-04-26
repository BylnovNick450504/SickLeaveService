#include "pch.h"

using namespace std;

Patient::Patient(): Human() {}
Patient::Patient(int id, string name): Human(id, name) {}

string Patient::getCardNumber() {
	return cardNumber;
}

void Patient::setCardNumber(string cardNumber) {
	this->cardNumber = cardNumber;
}

string Patient::getPassportNumber() {
	return passportNumber;
}

void Patient::setPassportNumber(string passportNumber) {
	this->passportNumber = passportNumber;
}

void Patient::printData() {
	Human::printData();
	cout << "Card number: " << cardNumber << endl;
	cout << "Passport number: " << passportNumber << endl;
}

void Patient::printBriefInfo() {
	Human::printBriefInfo();
}

void Patient::enterData() {
	Human::enterData();
	cout << "Please enter card number: ";
	cin >> cardNumber;
	cout << "Please enter passport number: ";
	cin >> passportNumber;
}

void Patient::writeToFile(ostream& out) {
	Human::writeToFile(out);
	out << cardNumber << "\n"
		<< passportNumber << endl;
	return;
}

void Patient::readFromFile(istream& in) {
	Human::readFromFile(in);
	in >> cardNumber;
	in >> passportNumber;
	return;
}