#pragma once
#ifndef FUELTANK_H
#define FUELTANK_H
#include<string>
#include "CarPart.h"
template <typename T>
class FuelTank : public CarPart {
public:
	void display() const override;
	FuelTank();
private:
	unsigned capacity;
	T fuel;
};
#endif