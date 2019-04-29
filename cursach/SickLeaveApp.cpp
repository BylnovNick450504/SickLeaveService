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
	sickListService = new SickListService(dataPool, diseaseService, doctorService, patientService);
}

SickLeaveApp::~SickLeaveApp() {
	delete sickListService;
	delete patientService;
	delete diseaseService;
	delete doctorService;
	delete dataPool;
}

void SickLeaveApp::operateDiseases() {
	int choice = -1;
	while (true) {
		cout << "Please enter command:" << endl;
		cout << "1 - Add disease" << endl;
		cout << "2 - Delete disease" << endl;
		cout << "3 - Find disease" << endl;
		cout << "4 - Print all diseases" << endl;
		cout << "5 - Quit" << endl;
		cin >> choice;
		
		switch (choice) {
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
	int choice = -1;
	while (true) {
		cout << "Please enter command:" << endl;
		cout << "1 - Add doctor" << endl;
		cout << "2 - Delete doctor" << endl;
		cout << "3 - Find doctor" << endl;
		cout << "4 - Print all doctors" << endl;
		cout << "5 - Quit" << endl;
		cin >> choice;

		switch (choice) {
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

void SickLeaveApp::operatePatients() {
	int choice = -1;
	while (true) {
		cout << "Please enter command:" << endl;
		cout << "1 - Add patient" << endl;
		cout << "2 - Delete patient" << endl;
		cout << "3 - Find patient" << endl;
		cout << "4 - Print all patients" << endl;
		cout << "5 - Quit" << endl;
		cin >> choice;

		switch (choice) {
		case 1: {
			patientService->addPatient();
			break;
		}
		case 2: {
			patientService->printPatientsIdAndName();
			int id;
			cout << "Please enter id: ";
			cin >> id;
			patientService->deletePatientById(id);
			break;
		}
		case 3: {
			patientService->printPatientsIdAndName();
			int id;
			cout << "Please enter id: ";
			cin >> id;
			Patient* patient = patientService->findPatientById(id);
			if (patient != nullptr) {
				patient->printData();
			}
			else {
				cout << "Patient with id = " << id << " not found" << endl;
			}
			break;
		}
		case 4: {
			patientService->getAll();
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

void SickLeaveApp::operateSickLists() {
	int choice = -1;
	while (true) {
		cout << "Please enter command:" << endl;
		cout << "1 - Add sick list" << endl;
		cout << "2 - Delete sick list" << endl;
		cout << "3 - Find sick list" << endl;
		cout << "4 - Print all sick lists" << endl;
		cout << "5 - Quit" << endl;
		cin >> choice;

		switch (choice) {
		case 1: {
			sickListService->addSickList();
			break;
		}
		case 2: {
			sickListService->printSickListsBriefInfo();
			int id;
			cout << "Please enter id: ";
			cin >> id;
			sickListService->deleteSickListById(id);
			break;
		}
		case 3: {
			sickListService->printSickListsBriefInfo();
			int id;
			cout << "Please enter id: ";
			cin >> id;
			SickList* sickList = sickListService->findSickListById(id);
			if (sickList != nullptr) {
				sickList->printData();
			}
			else {
				cout << "Sick list with id = " << id << " not found" << endl;
			}
			break;
		}
		case 4: {
			sickListService->printAll();
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

void SickLeaveApp::operate() {
	int choice = -1;
	while (true) {
		cout << "Please enter command:" << endl;
		cout << "1 - Opearations with diseases" << endl;
		cout << "2 - Operations with doctors" << endl;
		cout << "3 - Operations with patients" << endl;
		cout << "4 - Operations with sick lists" << endl;
		cout << "5 - Quit" << endl;
		cin >> choice;

		switch (choice) {
		case 1: {
			operateDiseases();
			break;
		}
		case 2: {
			operateDoctors();
			break;
		}
		case 3: {
			operatePatients();
			break;
		}
		case 4: {
			operateSickLists();
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