#pragma once
#ifndef TIRE_H
#define TIRE_H
#include<string>
#include "CarPart.h"
class Tire : public CarPart {
public:
	Tire();
	void display() const override;
private:
	friend class Car;
	unsigned width;
	double profile;
	unsigned diameter;
};
#endif