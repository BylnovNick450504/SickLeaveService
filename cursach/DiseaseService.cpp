#include "pch.h"
#include <iterator>

using namespace std;

DiseaseService::DiseaseService(DataPool* dataPool) {
	this->diseases = dataPool->getDiseases();
	this->dataPool = dataPool;
}

void DiseaseService::addDisease() {
	Disease* disease = new Disease();
	disease->enterData(dataPool->getNextId());
	diseases->push_back(disease);
}

void DiseaseService::deleteDiseaseById(int id) {
	for (vector<Disease*>::iterator it = diseases->begin(); it != diseases->end(); it++) {
		if ((*it)->getId() == id) {
			delete (*it);
			diseases->erase(it);
			return;
		}
	}
}

Disease* DiseaseService::findDiseaseById(int id) {
	for (size_t i = 0; i < diseases->size(); i++) {
		if (diseases->at(i)->getId() == id) {
			return diseases->at(i);
		}
	}
	return nullptr;
}

void DiseaseService::getAll() {
	for (size_t i = 0; i < diseases->size(); i++) {
		diseases->at(i)->printData();
	}
	cout << "------------------------" << endl;
}

void DiseaseService::printDiseasesIdAndName() {
	for (size_t i = 0; i < diseases->size(); i++) {
		diseases->at(i)->printBriefInfo();
	}
	cout << "------------------------" << endl;
}