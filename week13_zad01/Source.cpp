#include"Car.h"
#include"Vehicle.h"
#include"Property.h"
#include"ElectricCar.h"
#include<iostream>
#include<cstring>

int main() {
	Car car("BMW", "123");
	car.setPower(90);
	car.startEngine();
	ElectricCar ec("Tesla", "456");
	ec.startEngine();
}