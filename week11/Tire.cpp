#include<string>
#include "CarPart.h"
#include"Tire.h"

Tire::Tire() {
	width = 100;
	profile = 100;
	diameter = 10;
}

void Tire::display() const {
	 baseDisplay();
	 std::cout << width << ' ' << profile << std::endl;
}

