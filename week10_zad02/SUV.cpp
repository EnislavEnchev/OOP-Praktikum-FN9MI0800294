#include"Vehicle.h"
#include"SUV.h"
#include<iostream>

SUV::SUV(unsigned num, unsigned s, unsigned sp, unsigned p, bool i) {
	uniqueNum = num;
	seats = s;
	maxSpeed = sp;
	pricePerDay = p;
	is4x4 = i;
}