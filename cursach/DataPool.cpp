#include "pch.h"
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

DataPool::DataPool() {}

DataPool::~DataPool() {
	for (size_t i = 0; i < diseases.size(); i++) {
		delete diseases.at(i);
	}
	for (size_t i = 0; i < doctors.size(); i++) {
		delete doctors.at(i);
	}
	for (size_t i = 0; i < patients.size(); i++) {
		delete patients.at(i);
	}
	for (size_t i = 0; i < sickLists.size(); i++) {
		delete sickLists.at(i);
	}
}

void DataPool::retrieveDiseases() {
	string fileName = "d:/test/diseases.txt";
	ifstream in(fileName);
	if (in.is_open()) {
		int size;
		in >> size;
		for (int i = 0; i < size; i++) {
			Disease* d = new Disease();
			d->readFromFile(in);
			diseases.push_back(d);
		}
	}
	else {
		cout << "Error open file: " << fileName << endl;
	}
}

void DataPool::retrieveDoctors() {
	string fileName = "d:/test/doctors.txt";
	ifstream in(fileName);
	if (in.is_open()) {
		int size;
		in >> size;
		for (int i = 0; i < size; i++) {
			Doctor* doctor = new Doctor();
			doctor->readFromFile(in);
			doctors.push_back(doctor);
		}
	}
	else {
		cout << "Error open file: " << fileName << endl;
	}
}

void DataPool::retrievePatients() {
	string fileName = "d:/test/patients.txt";
	ifstream in(fileName);
	if (in.is_open()) {
		int size;
		in >> size;
		for (int i = 0; i < size; i++) {
			Patient* patient = new Patient();
			patient->readFromFile(in);
			patients.push_back(patient);
		}
	}
	else {
		cout << "Error open file: " << fileName << endl;
	}
}

void DataPool::retrieveSickLists() {
	string fileName = "d:/test/sickLists.txt";
	ifstream in(fileName);
	if (in.is_open()) {
		int size;
		in >> size;
		for (int i = 0; i < size; i++) {
			SickList* sickList = new SickList();
			sickList->readFromFile(in);
			sickLists.push_back(sickList);
		}
	}
	else {
		cout << "Error open file: " << fileName << endl;
	}
}

void DataPool::getDataFromStorage() {
	retrieveDiseases();
	retrieveDoctors();
	retrievePatients();
	retrieveSickLists();
}

void DataPool::writeAllDiseases() {
	string fileName = "d:/test1/diseases.txt";
	ofstream out(fileName);
	if (out.is_open()) {
		int size = diseases.size();
		out << size << endl;
		for (int i = 0; i < size; i++) {
			diseases.at(i)->writeToFile(out);
		}
		out.close();
	}
	else {
		cout << "Error open file" << fileName << endl;
	}
}

void DataPool::writeAllDoctors() {
	string fileName = "d:/test1/doctors.txt";
	ofstream out(fileName);
	if (out.is_open()) {
		int size = doctors.size();
		out << size << endl;
		for (int i = 0; i < size; i++) {
			doctors.at(i)->writeToFile(out);
		}
		out.close();
	}
	else {
		cout << "Error open file" << fileName << endl;
	}
}

void DataPool::writeAllPatients() {
	string fileName = "d:/test1/patients.txt";
	ofstream out(fileName);
	if (out.is_open()) {
		int size = patients.size();
		out << size << endl;
		for (int i = 0; i < size; i++) {
			patients.at(i)->writeToFile(out);
		}
		out.close();
	}
	else {
		cout << "Error open file" << fileName << endl;
	}
}

void DataPool::writeAllSickLists() {
	string fileName = "d:/test1/sickLists.txt";
	ofstream out(fileName);
	if (out.is_open()) {
		int size = sickLists.size();
		out << size << endl;
		for (int i = 0; i < size; i++) {
			sickLists.at(i)->writeToFile(out);
		}
		out.close();
	}
	else {
		cout << "Error open file" << fileName << endl;
	}
}

vector<Disease*>* DataPool::getDiseases() {
	return &diseases;
}

vector<Doctor*>* DataPool::getDoctors() {
	return &doctors;
}

vector<Patient*>* DataPool::getPatients() {
	return &patients;
}

vector<SickList*>* DataPool::getSickLists() {
	return &sickLists;
}
