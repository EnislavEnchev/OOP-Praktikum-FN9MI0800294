#pragma once
#ifndef AUTOMOBILE_H
#define AUTOMOBILE_H
#include"Vehicle.h"
class Truck : public Vehicle {
private:
	unsigned minS = 80;
	unsigned maxS = 140;
	unsigned modifierM = 2;
	unsigned modifierS = 4;
	unsigned modifierT = 14;
public:
	Truck(const char* b, unsigned ms);
	Vehicle* copy() const override;
	unsigned getMin() const;
	unsigned getMax() const;
	unsigned getModifierM() const;
	unsigned getModifierS() const;
	unsigned getModifierT() const;
};
#endif