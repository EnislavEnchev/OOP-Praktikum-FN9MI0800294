#include"Automobile.h"
#include"Vehicle.h"
#include<iostream>
#include<cstring>

Automobile::Automobile(const char* b, unsigned ms) :Vehicle(b,ms) {}

Vehicle* Automobile::copy() const{
	Vehicle* v = new Automobile(getBrand(), getMaxSpeed());
	return v;
}

unsigned Automobile::getMin() const {
	return minS;
}
unsigned Automobile::getMax() const {
	return maxS;
}
unsigned Automobile::getModifierM() const {
	return modifierM;
}
unsigned Automobile::getModifierS() const {
	return modifierS;
}
unsigned Automobile::getModifierT() const {
	return modifierT;
}