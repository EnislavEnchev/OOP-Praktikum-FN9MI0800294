#include "Vehicle.h"
#include<iostream>

int Vehicle::getPower() const {
	return power;
}

int Vehicle::getWeight() const {
	return weight;
}

void Vehicle::setPower(int p) {
	power = p;
}