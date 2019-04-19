#pragma once
#include "pch.h"

class AbstractEntity {
private :
	int id;
public:
	int getId();
	void setId(int id);
	AbstractEntity(int id);
};