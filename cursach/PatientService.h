#pragma once
#include "pch.h"
#include <iostream>
#include <string>
#include <vector>


class PatientService {
private:
	std::vector<Patient*>* patients;
	DataPool* dataPool;
public:
	PatientService(DataPool* dataPool);

	void addPatient();
	void deletePatientById(int id);
	Patient* findPatientById(int id);
	void getAll();
	void printPatientsIdAndName();

};