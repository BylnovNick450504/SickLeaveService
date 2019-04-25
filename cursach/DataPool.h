#pragma once
#include "pch.h"
#include <iostream>
#include <string>

class DataPool {
private:
	std::vector<Disease*> diseases;
	std::vector<Doctor*> doctors;
	std::vector<Patient*> patients;
	std::vector<SickList*> sickLists;
public:
	DataPool();
	~DataPool();

	void getDataFromStorage();

	void retrieveDiseases();
	void retrieveDoctors();
	void retrievePatients();
	void retrieveSickLists();

	//AbstractEntity createEntity(std::string& type);
};