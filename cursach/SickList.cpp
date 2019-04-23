#include "pch.h"

using namespace std;

SickList::SickList(): AbstractEntity() {}

SickList::SickList(int id): AbstractEntity(id) {}

int SickList::getDoctorId() {
	return doctorId;
}

void SickList::setDoctorId(int doctorId) {
	this->doctorId = doctorId;
}

int SickList::getPatientId() {
	return patientId;
}

void SickList::setPatientId(int patientId) {
	this->patientId = patientId;
}

int SickList::getDiseaseId() {
	return diseaseId;
}

void SickList::setDiseaseId(int diseaseId) {
	this->diseaseId = diseaseId;
}

tm SickList::getStartDate() {
	return startDate;
}

void SickList::setStartDate(tm startDate) {
	this->startDate = startDate;
}

tm SickList::getDueDate() {
	return dueDate;
}

void SickList::setDueDate(tm dueDate) {
	this->dueDate = dueDate;
}

string SickList::getDescription() {
	return description;
}

void SickList::setDescription(string description) {
	this->description = description;
}

void SickList::printData() {
	AbstractEntity::printData();
	cout << "Please enter doctor id: " << doctorId << endl;
}

void SickList::enterData() {
	AbstractEntity::enterData();
	cout << "Please enter doctor id: ";
	cin >> doctorId;
	cout << "Please enter patient id: ";
	cin >> patientId;
	cout << "Please enter disease id: ";
	cin >> diseaseId;

	cout << "Please enter start date year: ";
	cin >> startDate.tm_year;
	cout << "Please enter start date month: ";
	cin >> startDate.tm_mon;
	cout << "Please enter start date day: ";
	cin >> startDate.tm_mday;

	cout << "Please enter due date year: ";
	cin >> dueDate.tm_year;
	cout << "Please enter due date month: ";
	cin >> dueDate.tm_mon;
	cout << "Please enter due date day: ";
	cin >> dueDate.tm_mday;

	cout << "Please enter description: ";
	cin >> description;
}