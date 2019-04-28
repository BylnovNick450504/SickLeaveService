#pragma once
#include "pch.h"
#include <iostream>
#include <vector>
#include <string>

class SickListService {
private:
	DataPool* dataPool;
	std::vector<SickList*>* sickLists;
public:
	SickListService(DataPool* dataPool);
};
