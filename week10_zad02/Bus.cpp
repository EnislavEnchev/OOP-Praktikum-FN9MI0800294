#include"Vehicle.h"
#include"Bus.h"
#include<iostream>
#include<cstring>
Bus::Bus(unsigned num, unsigned s, unsigned sp, unsigned p, unsigned l) {
	uniqueNum = num;
	seats = s;
	maxSpeed = sp;
	pricePerDay = p;
	luggageCap = l;
}