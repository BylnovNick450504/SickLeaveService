#pragma once
#include "pch.h"
#include <iostream>
#include <string>
#include <vector>

class SickLeaveApp {
private:
	DataPool* dataPool;
	DiseaseService* diseaseService;
	DoctorService* doctorService;
	PatientService* patientService;
	SickListService* sickLeaveService;
public:
	SickLeaveApp();
	~SickLeaveApp();
};