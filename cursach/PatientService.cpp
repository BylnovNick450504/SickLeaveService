#include "pch.h"
#include <iostream>

using namespace std;

PatientService::PatientService(DataPool* dataPool) {
	this->patients = dataPool->getPatients();
	this->dataPool = dataPool;
}

void PatientService::addPatient() {
	Patient* patient = new Patient();
	patient->enterData();
	patients->push_back(patient);
}

void PatientService::deletePatientById(int id) {
	for (vector<Patient*>::iterator it = patients->begin(); it != patients->end(); it++) {
		if ((*it)->getId() == id) {
			delete (*it);
			patients->erase(it);
			return;
		}
	}
}

Patient* PatientService::findPatientById(int id) {
	for (int i = 0; i < patients->size(); i++) {
		if (patients->at(i)->getId() == id) {
			return patients->at(i);
		}
	}
	return nullptr;
}

void PatientService::getAll() {
	for (size_t i = 0; i < patients->size(); i++) {
		patients->at(i)->printData();
	}
	cout << "------------------------" << endl;
}

void PatientService::printPatientsIdAndName() {
	for (size_t i = 0; i < patients->size(); i++) {
		patients->at(i)->printBriefInfo();
	}
	cout << "------------------------" << endl;
}