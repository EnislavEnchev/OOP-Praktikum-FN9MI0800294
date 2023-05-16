#include"CarPart.h"

unsigned CarPart::count = 0;
CarPart::CarPart() {
	name = "None";
	manufacturer = "Empty";
	yearOfRelease = 2020;
	serialNumber = count;
	CarPart::count++;
}

void CarPart::baseDisplay() const{
	std::cout << serialNumber << ' ' << name << ' ' << manufacturer << ' ' << yearOfRelease << ' ';
}