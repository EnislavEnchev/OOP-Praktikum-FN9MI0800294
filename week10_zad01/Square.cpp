#include"Square.h"
#include"Shape.h"
#include<iostream>

Square::Square(double s) : Shape("Square1") {
	side = s;
}
/*
void Square::print() {
	std::cout << " ----" << std::endl;
	std::cout << "|    |" << std::endl;
	std::cout << "|    |" << std::endl;
	std::cout << " ----" << std::endl;


}

Shape* Square::copy() {
	Square* newS = new Square(side);
	return newS;
}

double Square::getPerimeter()const {
	return 4*side;
}
*/