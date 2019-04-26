#include "pch.h"
#include <iterator>

using namespace std;

DoctorService::DoctorService(DataPool* dataPool) {
	this->doctors = dataPool->getDoctors();
	this->dataPool = dataPool;
}

void DoctorService::addDoctor() {
	Doctor* doctor = new Doctor();
	doctor->enterData();
	doctors->push_back(doctor);
}

void DoctorService::deleteDoctorById(int id) {
	for (vector<Doctor*>::iterator it = doctors->begin(); it != doctors->end(); it++) {
		if ((*it)->getId() == id) {
			delete (*it);
			doctors->erase(it);
			return;
		}
	}
}

Doctor* DoctorService::findDoctorById(int id) {
	for (int i = 0; i < doctors->size(); i++) {
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