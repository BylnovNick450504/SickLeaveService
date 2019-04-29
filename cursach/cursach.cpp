#include "pch.h"
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

void testDataPool() {
	DataPool dataPool;
	dataPool.getDataFromStorage();
	DiseaseService diseaseService(&dataPool);
	diseaseService.getAll();
}

void testDiseaseServiceGetAll() {
	DataPool dataPool;
	dataPool.getDataFromStorage();
	DiseaseService diseaseService(&dataPool);
	diseaseService.getAll();
}

void testDiseaseServiceAdd() {
	DataPool dataPool;
	dataPool.getDataFromStorage();
	DiseaseService diseaseService(&dataPool);
	diseaseService.addDisease();
	diseaseService.getAll();
}

void testDiseaseServiceDelete() {
	DataPool dataPool;
	dataPool.getDataFromStorage();
	DiseaseService diseaseService(&dataPool);
	diseaseService.deleteDiseaseById(2);
	diseaseService.getAll();
	diseaseService.deleteDiseaseById(3);
	diseaseService.getAll();
	diseaseService.deleteDiseaseById(1);
	diseaseService.getAll();
}

void testSickLeaveApp() {
	SickLeaveApp s;
	s.operate();

}

int main() {
	testSickLeaveApp();
}
