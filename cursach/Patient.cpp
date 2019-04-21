#include "pch.h"

using namespace std;

Patient::Patient(int id, string name) : Human(id, name) {}

string Patient::getCardNumber() {
	return cardNumber;
}

void Patient::setCardNumber(string cardNumber) {
	this->cardNumber = cardNumber;
}

string Patient::getPassportNumber() {
	return pasportNumber;
}

void Patient::setPassportNumber(string passportNumber) {
	this->pasportNumber = passportNumber;
}