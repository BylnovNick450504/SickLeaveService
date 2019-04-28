#include "pch.h"
#include <vector>
#include <string>
#include <iostream>

using namespace std;

SickListService::SickListService(DataPool* dataPool) {
	dataPool = dataPool;
	sickLists = dataPool->getSickLists();
}