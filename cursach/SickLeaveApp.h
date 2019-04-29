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
	SickListService* sickListService;
public:
	SickLeaveApp();
	~SickLeaveApp();
	void operateDiseases();
	void operateDoctors();
	void operatePatients();
	void operateSickLists();
	void operate();
};