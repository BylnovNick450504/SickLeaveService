#include "pch.h"
#include <iterator>

using namespace std;

DiseaseService::DiseaseService(std::vector<Disease*>* diseases) {
	this->diseases = diseases;
}

void DiseaseService::addDisease() {
	Disease* disease = new Disease();
	disease->enterData();
	diseases->push_back(disease);
}

void DiseaseService::deleteDiseaseById(int id) {
	for (size_t i = 0; i < diseases->size(); i++) {
		if (diseases->at(i)->getId() == id) {
			diseases->erase(diseases->begin() + i);
			return;
		}
	}
}

Disease* DiseaseService::findDiseaseById(int id) {
	for (int i = 0; i < diseases->size(); i++) {
		if (diseases->at(i)->getId() == id) {
			return diseases->at(i);
		}
	}
	return nullptr;
}

void DiseaseService::getAll() {
	for (size_t i = 0; i < diseases->size(); i++) {
		cout << diseases->at(i);
	}
}