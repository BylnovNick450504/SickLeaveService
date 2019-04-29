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
	cout << "Disease id = " << diseaseId << endl;
	cout << "Doctor id =  " << doctorId << endl;
	cout << "Patient id = " << patientId << endl;
	cout << "Start Date = " << startDate.tm_year << "." << startDate.tm_mon << "." << startDate.tm_mday << endl;
	cout << "Due Date = " << dueDate.tm_year << "." << dueDate.tm_mon << "." << dueDate.tm_mday << endl;
	cout << "Description = " << description << endl;
}

void SickList::printBriefInfo() {
	cout << getId() << " " << endl;
}

void SickList::enterData(int id) {
	AbstractEntity::enterData(id);
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

void SickList::enterData() {
	
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

void SickList::writeToFile(std::ostream& out) {
	AbstractEntity::writeToFile(out);
	out << doctorId << "\n"
		<< patientId << "\n"
		<< diseaseId << "\n"
		<< startDate.tm_year << "\n"
		<< startDate.tm_mon << "\n"
		<< startDate.tm_mday << "\n"
		<< dueDate.tm_year << "\n"
		<< dueDate.tm_mon << "\n"
		<< dueDate.tm_mday << "\n"
		<< description << endl;
}

void SickList::readFromFile(std::istream& in) {
	AbstractEntity::readFromFile(in);
	in >> doctorId;
	in >> patientId;
	in >> diseaseId;
	in >> startDate.tm_year;
	in >> startDate.tm_mon;
	in >> startDate.tm_mday;
	in >> dueDate.tm_year;
	in >> dueDate.tm_mon;
	in >> dueDate.tm_mday;
	in >> description;
}