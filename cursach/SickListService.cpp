#include "pch.h"
#include <vector>
#include <string>
#include <iostream>

using namespace std;

SickListService::SickListService(DataPool* dataPool, DiseaseService* diseaseService,
	DoctorService* doctorService, PatientService* patientService) {
	dataPool = dataPool;
	diseaseService = diseaseService;
	doctorService = doctorService;
	patientService = patientService;
	sickLists = dataPool->getSickLists();
}

void SickListService::addSickList() {
	diseaseService->printDiseasesIdAndName();
	cout << "Please choose disease id: ";
	int diseaseId;
	cin >> diseaseId;
	if (diseaseService->findDiseaseById(diseaseId) == nullptr) {
		cout << "Wrong disease id" << endl;
		return;
	}
	doctorService->printDoctorsIdAndName();
	cout << "Please choose doctor id: ";
	int doctorId;
	cin >> doctorId;
	if (doctorService->findDoctorById(doctorId) == nullptr) {
		cout << "Wrong doctor id" << endl;
		return;
	}
	patientService->printPatientsIdAndName();
	cout << "Please choose patient id: ";
	int patientId;
	cin >> patientId;
	if (patientService->findPatientById(patientId) == nullptr) {
		cout << "Wrong patient id" << endl;
		return;
	}
	SickList* sickList = new SickList(dataPool->getNextId());
	sickList->setDiseaseId(diseaseId);
	sickList->setDoctorId(doctorId);
	sickList->setPatientId(patientId);
	sickList->enterData();
	sickLists->push_back(sickList);
}

void SickListService::deleteSickListById(int id) {
	for (vector<SickList*>::iterator it = sickLists->begin(); it != sickLists->end(); it++) {
		if ((*it)->getId() == id) {
			delete (*it);
			sickLists->erase(it);
			return;
		}
	}
}

SickList* SickListService::findSickListById(int id) {
	for (size_t i = 0; i < sickLists->size(); i++) {
		if (sickLists->at(i)->getId() == id) {
			return sickLists->at(i);
		}
	}
	return nullptr;
}

void SickListService::printAll() {
	for (size_t i = 0; i < sickLists->size(); i++) {
		sickLists->at(i)->printData();
	}
	cout << "------------------------" << endl;
}

void SickListService::printSickListsBriefInfo() {
	for (size_t i = 0; i < sickLists->size(); i++) {
		sickLists->at(i)->printBriefInfo();
	}
	cout << "------------------------" << endl;
}