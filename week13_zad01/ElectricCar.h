#pragma once
#ifndef ELECTRICCAR_H
#define ELECTRICCAR_H
#include"Car.h"
#include"Vehicle.h"
#include"Property.h"
#include<iostream>
#include<cstring>
class ElectricCar : public Car {
public:
	ElectricCar(const char* b, const char* m);
	ElectricCar(const ElectricCar& other);
	ElectricCar& operator=(const ElectricCar& other);
	void startEngine() const override;

};
#endif