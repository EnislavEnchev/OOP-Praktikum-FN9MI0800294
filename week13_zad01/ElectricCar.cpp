#include"Car.h"
#include"Vehicle.h"
#include"Property.h"
#include"ElectricCar.h"
#include<iostream>
#include<cstring>

ElectricCar::ElectricCar(const char* b, const char* m) : Car(b,m){}

ElectricCar::ElectricCar(const ElectricCar& other) :Car(other){}

ElectricCar& ElectricCar::operator=(const ElectricCar& other) {
		Car::operator=(other);
		return *this;
}

void ElectricCar::startEngine() const {
	std::cout << "(No Sound)" << std::endl;
}
