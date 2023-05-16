#include<string>
#include "CarPart.h"
#include"FuelTank.h"

FuelTank<std::string>::FuelTank() {
	capacity = 40;
	fuel = "gasolina";
}

void FuelTank<std::string>::display() const {
	baseDisplay();
	std::cout << fuel << ' ' << capacity << std::endl;
}