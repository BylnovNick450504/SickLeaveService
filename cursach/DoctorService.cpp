#include "pch.h"
#include <iterator>

using namespace std;

DoctorService::DoctorService(DataPool* dataPool) {
	this->doctors = dataPool->getDoctors();
	this->dataPool = dataPool;
}

void DoctorService::addDoctor() {
	Doctor* doctor = new Doctor();
	doctor->enterData(dataPool->getNextId());
	doctors->push_back(doctor);
	dataPool->writeAllDoctors();
}

void DoctorService::deleteDoctorById(int id) {
	for (vector<Doctor*>::iterator it = doctors->begin(); it != doctors->end(); it++) {
		if ((*it)->getId() == id) {
			delete (*it);
			doctors->erase(it);
			dataPool->writeAllDoctors();
			return;
		}
	}
}

Doctor* DoctorService::findDoctorById(int id) {
	for (size_t i = 0; i < doctors->size(); i++) {
		if (doctors->at(i)->getId() == id) {
			return doctors->at(i);
		}
	}
	return nullptr;
}

void DoctorService::getAll() {
	for (size_t i = 0; i < doctors->size(); i++) {
		doctors->at(i)->printData();
	}
	cout << "------------------------" << endl;
}

void DoctorService::printDoctorsIdAndName() {
	for (size_t i = 0; i < doctors->size(); i++) {
		doctors->at(i)->printBriefInfo();
	}
	cout << "------------------------" << endl;
}