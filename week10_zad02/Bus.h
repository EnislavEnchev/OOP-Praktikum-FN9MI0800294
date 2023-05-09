#pragma once
#include"Vehicle.h"
#ifndef BUS_H
#define BUS_H
class Bus: public Vehicle {
private:
	unsigned luggageCap;
public:
	Bus(unsigned num, unsigned s, unsigned sp, unsigned p, unsigned l);
};
#endif