#include<string>
#include"Piston.h"
#include "CarPart.h"
#include"Tire.h"
#include"Engine.h"
#include"FuelTank.h"
#include"Car.h"

Car::Car() {
	parts = new CarPart * [10];
	brand = "None";
	model = "Lada";
	cap = 10;
	count = 0;
}

Car::Car(const Car& other) {
	parts = other.parts;
	brand = other.brand;
	model = other.model;
	count = other.count;
	cap = other.cap;
}

Car::~Car() {
	delete[] parts;
}

Car::Car(std::string b, std::string m, CarPart** cp) {
	brand = b;
	model = m;
	parts = cp;
	count = sizeof(sizeof(cp) / sizeof(CarPart*));
	cap = count * 2;
}

void Car::addPart(CarPart* part) {
	if (count == cap) {
		cap *= 2;
		CarPart** newParts = new CarPart * [cap];
		for (size_t i = 0; i < count; i++) {
			newParts[i] = parts[i];
		}
		delete[] parts;
		parts = newParts;
	}
	parts[count] = part;
	count++;
}


void Car::displayCarParts() {
	for (size_t i = 0; i < count; i++) {
		parts[i]->display();
	}
}