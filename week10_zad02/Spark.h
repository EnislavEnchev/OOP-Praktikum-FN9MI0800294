#pragma once
#include"Vehicle.h"
#include"Bus.h"
#include"Car.h"
#include"SUV.h"
#ifndef SPARK_H
#define SPARK_H
class Spark {
private:
	size_t cap;
	size_t used;
	Vehicle** inventory;
public:
	Spark();
	void addVehicle(Vehicle* v);
	unsigned operator[](const size_t id);

};
#endif
