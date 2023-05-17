#pragma once
#ifndef AUTOMOBILE_H
#define AUTOMOBILE_H
#include"Vehicle.h"
class Automobile: public Vehicle {
private:
	unsigned minS = 180;
	unsigned maxS = 240;
	unsigned modifierM = 1;
	unsigned modifierS = 1;
	unsigned modifierT = 1;
public:
	Automobile(const char* b, unsigned ms);
	Vehicle* copy() const override;
	unsigned getMin() const;
	unsigned getMax() const;
	unsigned getModifierM() const;
	unsigned getModifierS() const;
	unsigned getModifierT() const;
};
#endif