#pragma once
#include "pch.h"
#include <iostream>
#include <vector>
#include <string>

class SickListService {
private:
	DataPool* dataPool;
	std::vector<SickList*>* sickLists;
	DiseaseService* diseaseService;
	DoctorService* doctorService;
	PatientService* patientService;
public:
	SickListService(DataPool* dataPool, DiseaseService* diseaseService,
		DoctorService* doctorService, PatientService* patientService);

	void addSickList();
	void deleteSickListById(int id);
	SickList* findSickListById(int id);
	void printAll();
	void printSickListsBriefInfo();
};
