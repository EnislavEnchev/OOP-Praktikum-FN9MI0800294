#pragma once
#include"Vehicle.h"
#ifndef CAR_H
#define CAR_H
class Car : public Vehicle {
private:
	char* brand;
public:
	Car(unsigned num, unsigned s, unsigned sp, unsigned p, const char* b);
};
#endif