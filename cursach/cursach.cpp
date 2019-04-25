#include "pch.h"
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main() {
	Human h;
	Human h1;
	ifstream in("d:/humans.txt");
	// если открылся файл
	if (in.is_open()) {
		h.readFromFile(in);
		h1.readFromFile(in);
	}
	h.printData();
	h1.printData();
}