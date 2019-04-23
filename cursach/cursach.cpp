#include "pch.h"
#include <iostream>
#include <string>

int main() {
	AbstractEntity* a;
	AbstractEntity a1;
	Disease d;
	Doctor doc;
	Human h;
	Patient p;
	SickList s;

	/*a = &a1;
	a->enterData();
	a->printData();

	a = &d;
	a->enterData();
	a->printData();

	a = &doc;
	a->enterData();
	a->printData();

	a = &h;
	a->enterData();
	a->printData();*/

	a = &p;
	a->enterData();
	a->printData();

	a = &s;
	a->enterData();
	a->printData();
}