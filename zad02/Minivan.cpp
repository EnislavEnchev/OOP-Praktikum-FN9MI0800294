#include"Minivan.h"
#include"Vehicle.h"
#include<iostream>
#include<cstring>

Minivan::Minivan(const char* b, unsigned ms) :Vehicle(b, ms) {}



Vehicle* Minivan::copy() const {
	Vehicle* v = new Minivan(this->getBrand(), this->getMaxSpeed());
	return v;
}
unsigned Minivan::getMin() const {
	return minS;
}
unsigned Minivan::getMax() const {
	return maxS;
}
unsigned Minivan::getModifierM() const {
	return modifierM;
}
unsigned Minivan::getModifierS() const {
	return modifierS;
}
unsigned Minivan::getModifierT() const {
	return modifierT;
}