#pragma once
#include "pch.h"
#include <iostream>
#include <string>
#include <vector>
#include "DataPool.h"

class DiseaseService {
private:
	std::vector<Disease*>* diseases;
	DataPool* dataPool;

public:
	DiseaseService(DataPool* dataPool);

	void addDisease();
	void deleteDiseaseById(int id);
	Disease* findDiseaseById(int id);
	void getAll();
	void printDiseasesIdAndName();
};