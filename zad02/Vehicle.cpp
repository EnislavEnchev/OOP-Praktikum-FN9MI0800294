#include"Vehicle.h"
#include<iostream>
#include<cstring>

Vehicle* Vehicle::copy()const {
	Vehicle* v = new Vehicle(v->getBrand(), v->getMaxSpeed());
	return v;
}

Vehicle::Vehicle(const char* b, unsigned ms) {
	brand = new char[strlen(b) + 1];
	strcpy_s(brand, strlen(b) + 1, b);
	maxspeed = ms;
}

unsigned Vehicle::getMaxSpeed()const {
	return maxspeed;
}

char* Vehicle::getBrand() const {
	return brand;
}
Vehicle::~Vehicle() {
	delete[] brand;
	maxspeed = 0;
}
