#pragma once
#ifndef CARPART_H
#define CARPART_H
#include<string>
#include<iostream>
class CarPart {
private:
	friend class Car;
	std::string name;
	std::string manufacturer;
	unsigned yearOfRelease;
	unsigned serialNumber;
	static unsigned count;
protected:
	void baseDisplay()const;
public:
	CarPart();
	virtual void display() const = 0;
};
#endif
