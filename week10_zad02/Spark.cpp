#include "Spark.h"
#include"Vehicle.h"
#include"Bus.h"
#include"Car.h"
#include"SUV.h"
#include<iostream>

Spark::Spark() {
	used = cap = 0;
	inventory = new Vehicle * [1];
}

void Spark::addVehicle(Vehicle* v) {
	if (used == cap) {
		cap *= 2;
		Vehicle** newInv = new Vehicle * [cap];
		for (size_t i = 0; i < used; i++) {
			newInv[i] = inventory[i];
		}
		delete[] inventory;
		inventory = newInv;
	}
	inventory[used] = v;
	used++;
}

unsigned Spark::operator[](size_t id) {
	return inventory[id]->pricePerDay;
}