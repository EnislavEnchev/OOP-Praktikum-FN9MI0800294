#include"Vehicle.h"
#include"Car.h"
#include<iostream>
#include<cstring>
Car::Car(unsigned num, unsigned s, unsigned sp, unsigned p, const char* b) {
	uniqueNum = num;
	seats = s;
	maxSpeed = sp;
	pricePerDay = p;
	brand = new char[strlen(b) + 1];
	strcpy_s(brand, strlen(b) + 1, b);
}