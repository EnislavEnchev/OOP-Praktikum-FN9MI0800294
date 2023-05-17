#pragma once
#ifndef AUTOMOBILE_H
#define AUTOMOBILE_H
#include"Vehicle.h"
class Minivan : public Vehicle {
private:
	unsigned minS = 120;
	unsigned maxS = 160;
	unsigned modifierM = 1;
	unsigned modifierS = 2;
	unsigned modifierT = 3;
public:
	Minivan(const char* b, unsigned ms);
	Vehicle* copy() const override;
	unsigned getMin() const;
	unsigned getMax() const;
	unsigned getModifierM() const;
	unsigned getModifierS() const;
	unsigned getModifierT() const;
};
#endif