#include<string>
#include "CarPart.h"
#include"Piston.h"

Piston::Piston() {
	diameter = 1;
	move = 2;
}

void Piston::display() const {
	baseDisplay();
	std::cout << diameter << ' ' << move << std::endl;
}

