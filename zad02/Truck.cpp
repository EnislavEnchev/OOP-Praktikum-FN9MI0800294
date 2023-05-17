#include"Truck.h"
#include"Vehicle.h"
#include<iostream>
#include<cstring>
Truck::Truck(const char* b, unsigned ms) :Vehicle(b, ms) {}

Vehicle* Truck::copy() const{
	Vehicle* v = new Truck(getBrand(), getMaxSpeed());
	return v;
}
unsigned Truck::getMin() const {
	return minS;
}
unsigned Truck::getMax() const {
	return maxS;
}
unsigned Truck::getModifierM() const {
	return modifierM;
}
unsigned Truck::getModifierS() const {
	return modifierS;
}
unsigned Truck::getModifierT() const {
	return modifierT;
}