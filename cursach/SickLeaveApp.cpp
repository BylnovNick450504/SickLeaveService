#include "pch.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;

SickLeaveApp::SickLeaveApp() {
	dataPool = new DataPool();
	dataPool->getDataFromStorage();
	doctorService = new DoctorService(dataPool);
	diseaseService = new DiseaseService(dataPool);
	patientService = new PatientService(dataPool);
	sickLeaveService = new SickListService(dataPool);
}

SickLeaveApp::~SickLeaveApp() {
	delete sickLeaveService;
	delete patientService;
	delete diseaseService;
	delete doctorService;
	delete dataPool;
}