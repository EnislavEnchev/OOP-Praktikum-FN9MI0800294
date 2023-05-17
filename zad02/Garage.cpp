#include"Vehicle.h"
#include"Automobile.h"
#include"Truck.h"
#include"Minivan.h"
#include"Garage.h"
#include<iostream>
#include<cstring>

Garage::Garage() {
	capacity = 10;
	used = 0;
}

Garage::~Garage() {
	capacity = 0;
	used = 0;
}

void Garage::addVehicle(Vehicle* v) {
	if (used != capacity) {
		vehicles.push_back(v);
	}
}

unsigned Garage::check(unsigned length, unsigned minutes) {
	unsigned counter = 0;
	for (size_t i = 0; i < used; i++) {
		if(vehicles[i]->getMaxSpeed()*vehicles[i]->get)
	}
}