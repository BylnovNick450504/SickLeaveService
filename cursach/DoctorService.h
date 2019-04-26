#pragma once
#include "pch.h"
#include <iostream>
#include <string>
#include <vector>

class DoctorService {
private:
	std::vector<Doctor*>* doctors;
	DataPool* dataPool;
public:
	DoctorService(DataPool* dataPool);

	void addDoctor();
	void deleteDoctorById(int id);
	Doctor* findDoctorById(int id);
	void getAll();
	void printDoctorsIdAndName();
};