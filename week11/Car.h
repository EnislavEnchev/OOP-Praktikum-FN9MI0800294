#pragma once
#ifndef CAR_H
#define CAR_H
#include<string>
#include<vector>
#include"Piston.h"
#include "CarPart.h"
#include"Tire.h"
#include"Engine.h"
#include"FuelTank.h"
class Car{
public:
	Car();
	Car(const Car& other);
	Car(std::string b, std::string m, CarPart** cp);
	~Car();
	void addPart(CarPart* part);
	void displayCarParts();
private:
	std::string brand;
	std::string model;
	CarPart** parts;
	size_t count;
	size_t cap;
};
#endif