#include "pch.h"

using namespace std;

SickList::SickList(int id) : AbstractEntity(id) {}

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