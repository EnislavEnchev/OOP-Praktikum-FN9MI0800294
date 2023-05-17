#pragma once
#ifndef GARAGE_H
#define GARAGE_H
#include"Vehicle.h"
#include"Automobile.h"
#include"Truck.h"
#include"Minivan.h"
#include<vector>
#include<iostream>
class Garage {
private:
	std::vector<Vehicle*> vehicles;
	size_t capacity;
	size_t used;
public:
	Garage();
	~Garage();
	void addVehicle(Vehicle* v);
	unsigned check(unsigned length, unsigned minutes);
};

#endif