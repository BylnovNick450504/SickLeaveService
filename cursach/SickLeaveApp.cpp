#include "pch.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;

SickLeaveApp::SickLeaveApp() {
	dataPool = new DataPool();
	dataPool->getDataFromStorage();
	doctorService = new DoctorService(dataPool);
	diseaseService = new DiseaseService(dataPool);
	patientService = new PatientService(dataPool);
	sickListService = new SickListService(dataPool);
}

SickLeaveApp::~SickLeaveApp() {
	delete sickListService;
	delete patientService;
	delete diseaseService;
	delete doctorService;
	delete dataPool;
}

void SickLeaveApp::operateDiseases() {
	int choise = -1;
	while (true) {
		cout << "Please enter command:" << endl;
		cout << "1 - Add disease" << endl;
		cout << "2 - Delete disease" << endl;
		cout << "3 - Find disease" << endl;
		cout << "4 - Print all diseases" << endl;
		cout << "5 - Quit" << endl;
		cin >> choise;
		
		switch (choise) {
			case 1: {
				diseaseService->addDisease();
				break;
			}
			case 2: {
				diseaseService->printDiseasesIdAndName();
				int id;
				cout << "Please enter id: ";
				cin >> id;
				diseaseService->deleteDiseaseById(id);
				break;
			}
			case 3: {
				diseaseService->printDiseasesIdAndName();
				int id;
				cout << "Please enter id: ";
				cin >> id;
				Disease* disease = diseaseService->findDiseaseById(id);
				if (disease != nullptr) {
					disease->printData();
				}
				else {
					cout << "Disease with id = " << id << " not found." << endl;
				}
				break;
			}
			case 4: {
				diseaseService->getAll();
				break;
			}
			case 5: {
				return;
			}
			default: {
				cout << "Wrong command" << endl;
			}
		}
	}
}

void SickLeaveApp::operateDoctors() {
	int choise = -1;
	while (true) {
		cout << "Please enter command:" << endl;
		cout << "1 - Add doctor" << endl;
		cout << "2 - Delete doctor" << endl;
		cout << "3 - Find doctor" << endl;
		cout << "4 - Print all doctors" << endl;
		cout << "5 - Quit" << endl;
		cin >> choise;

		switch (choise) {
		case 1: {
			doctorService->addDoctor();
			break;
		}
		case 2: {
			doctorService->printDoctorsIdAndName();
			int id;
			cout << "Please enter id: ";
			cin >> id;
			doctorService->deleteDoctorById(id);
			break;
		}
		case 3: {
			doctorService->printDoctorsIdAndName();
			int id;
			cout << "Please enter id: ";
			cin >> id;
			Doctor* doctor = doctorService->findDoctorById(id);
			if (doctor != nullptr) {
				doctor->printData();
			}
			else {
				cout << "Doctor with id = " << id << " not found" << endl;
			}
			break;
		}
		case 4: {
			doctorService->getAll();
			break;
		}
		case 5: {
			return;
		}
		default: {
			cout << "Wrong command" << endl;
		}
		}
	}
}