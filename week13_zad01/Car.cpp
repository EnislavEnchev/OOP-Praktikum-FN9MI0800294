#include"Car.h"
#include"Vehicle.h"
#include"Property.h"
#include<iostream>
#include<cstring>

void Car::free() {
	delete[] brand;
	delete[] model;
}

void Car::copy(const Car& other) {
	brand = new char[strlen(other.brand) + 1];
	model = new char[strlen(other.model) + 1];
	strcpy_s(brand, strlen(other.brand) + 1, other.brand);
	strcpy_s(model, strlen(other.model) + 1, other.model);
}

Car::Car(const char* b, const char* m) {
	brand = new char[strlen(b) + 1];
	model = new char[strlen(m) + 1];
	strcpy_s(brand,strlen(b) + 1, b);
	strcpy_s(model, strlen(m) + 1, m);
}

Car::~Car() {
	free();
}

Car::Car(const Car& other) {
	copy(other);
}

Car& Car::operator=(const Car& other) {
	if (!(this == &other)) {
		free();
		copy(other);
	}
	return *this;
}

void Car::startEngine() const {
	int cap = getPower() / 30;
	std::cout << "Vr";
	for (int i = 0; i < cap; i++) {
		std::cout << 'o';
	}
	std::cout << 'm' << std::endl;
}
