#pragma once
#ifndef F1CAR_H
#define F1CAR_H
#include <fstream>


struct F1Car {
	char name[32];
	int year;
	int wins;
	double engine_capacity;
};

#endif