#include "Spark.h"
#include"Vehicle.h"
#include"Bus.h"
#include"Car.h"
#include"SUV.h"
#include<iostream>

int main() {
	SUV s(12, 4, 200, 500, true);
	Car c(13, 4, 200, 250, "BMW");
	Bus b(14, 4, 200, 700, 1000);
	Spark company;
	company.addVehicle(&s);
	company.addVehicle(&b);
	company.addVehicle(&c);
	std::cout << company[2];
}