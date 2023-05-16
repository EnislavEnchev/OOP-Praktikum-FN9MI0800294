#pragma once
#ifndef FUELTANK_H
#define FUELTANK_H
#include<string>
#include "CarPart.h"
template <typename T>
class FuelTank : public CarPart {
public:
	void display() const override {
		baseDisplay();
		std::cout << fuel << ' ' << capacity << std::endl;
	}
	FuelTank<T>() {
		fuel = "gasolina";
		capacity = 40;
	}
private:
	unsigned capacity;
	T fuel;
};
#endif