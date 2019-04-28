#pragma once
#include "pch.h"
#include <iostream>
#include <string>

class DataPool {
private:
	int nextId;
	std::vector<Disease*> diseases;
	std::vector<Doctor*> doctors;
	std::vector<Patient*> patients;
	std::vector<SickList*> sickLists;

	void retrieveNextId();
public:
	DataPool();
	~DataPool();

	void getDataFromStorage();

	void retrieveDiseases();
	void retrieveDoctors();
	void retrievePatients();
	void retrieveSickLists();

	void writeAllDiseases();
	void writeAllDoctors();
	void writeAllPatients();
	void writeAllSickLists();

	std::vector<Disease*>* getDiseases();
	std::vector<Doctor*>* getDoctors();
	std::vector<Patient*>* getPatients();
	std::vector<SickList*>* getSickLists();

	int getNextId();
};