#pragma once
#include "pch.h"
#include "AbstractEntity.h"
#include <iostream>
#include <string>

class SickList : public AbstractEntity {
private: 
	int doctorId;
	int patientId;
};