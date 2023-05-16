#include<string>
#include"Piston.h"
#include "CarPart.h"
#include"Tire.h"
#include"Engine.h"
#include"FuelTank.h"
#include"Car.h"
#include<iostream>

int main() {
	Tire t;
	Piston p;
	Engine e;
	FuelTank<std::string> ft;
	Car car;
	t.display();
	car.addPart(&ft);
	car.displayCarParts();
	car.addPart(&e);
	car.displayCarParts();
	
}