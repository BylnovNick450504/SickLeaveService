#include "pch.h"
#include <iterator>

using namespace std;

DiseaseService::DiseaseService(DataPool* dataPool) {
	this->diseases = dataPool->getDiseases();
}

void DiseaseService::addDisease() {
	Disease* disease = new Disease();
	disease->enterData();
	diseases->push_back(disease);
}

void DiseaseService::deleteDiseaseById(int id) {
	//for (size_t i = 0; i < diseases->size(); i++) {
	//	if (diseases->at(i)->getId() == id) {
	//		vector<Disease*>::iterator it = diseases->begin() + i;
	//		Disease* pointer = *it;
	//		delete pointer;
	//		return;
	//	}
	//}

	for (vector<Disease*>::iterator it = diseases->begin(); it != diseases->end(); it++) {
		if ((*it)->getId() == id) {
			delete (*it);
			diseases->erase(it);
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
	cout << "------------------------" << endl;
	for (size_t i = 0; i < diseases->size(); i++) {
		diseases->at(i)->printData();
	}
	cout << "------------------------" << endl;
}