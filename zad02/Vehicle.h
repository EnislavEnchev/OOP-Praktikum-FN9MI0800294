#pragma once
#ifndef VEHICLE_H
#define VEHICLE_H
class Vehicle {
private:
	char* brand;
	unsigned maxspeed;
public:
	virtual Vehicle* copy() const;
	char* getBrand()const;
	unsigned getMaxSpeed() const;
	Vehicle(const char* b, unsigned ms);
	~Vehicle();
};
#endif