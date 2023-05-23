#pragma once
#ifndef CAR_H
#define CAR_H
#include"Vehicle.h"
#include"Property.h"
class Car : public Vehicle, public Property {
private:
	char* brand;
	char* model;
	void free();
	void copy(const Car& other);
public:
	Car(const char* b, const char* m);
	~Car();
	Car(const Car& other);
	Car& operator=(const Car& other);
	void startEngine() const override;

};
#endif