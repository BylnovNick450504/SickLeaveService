#pragma once
#include "pch.h"
#include "AbstractEntity.h"
#include <iostream>
#include <string>

class SickList : public AbstractEntity {
private: 
	int doctorId;
	int patientId;
	int diseaseId;
	tm startDate;
	tm dueDate;
	std::string description;
public:
	SickList();
	SickList(int id);
	
	int getDoctorId();
	void setDoctorId(int doctorId);
	
	int getPatientId();
	void setPatientId(int patientId);

	int getDiseaseId();
	void setDiseaseId(int diseaseId);

	tm getStartDate();
	void setStartDate(tm startDate);

	tm getDueDate();
	void setDueDate(tm dueDate);

	std::string getDescription();
	void setDescription(std::string description);

	void enterData() override;
	void printData() override;
};