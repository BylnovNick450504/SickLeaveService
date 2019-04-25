#include "pch.h"

void DiseaseService::addDisease() {
	Disease d;
	d.enterData();
	diseases.push_back(d);
}

void DiseaseService::deleteDiseaseById(int id) {
	for (int i = 0; i < diseases.size(); i++) {
		if (diseases.at(i).getId() == id) {
			diseases.erase(diseases.begin() + i);
			return;
		}
	}
}

Disease DiseaseService::findDiseaseById(int id) {
	for (int i = 0; i < diseases.size(); i++) {
		if (diseases.at(i).getId() == id) {
			return diseases.at(i);
		}
	}
}