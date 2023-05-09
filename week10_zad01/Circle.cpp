#include"Circle.h"
#include"Shape.h"
#include<iostream>

Circle::Circle(double r) : Shape("Circle1") {
	radius = r;
}

/*void Circle::print() {
	std::cout << "   -  " << std::endl;
	std::cout << " /   \\ " << std::endl;
	std::cout << "|     |" << std::endl;
	std::cout << " \\   / " << std::endl;
	std::cout << "   -  " << std::endl;

}

Shape* Circle::copy() {
	Circle* newC = new Circle(radius);
	return newC;
}

double Circle::getPerimeter()const {
	return 3.14 * 2 * radius;
}
*/