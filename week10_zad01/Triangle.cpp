#include"Triangle.h"
#include"Shape.h"
#include<iostream>

Triangle::Triangle(double s1, double s2, double s3) : Shape("Triangle1") {
	side1 = s1;
	side2 = s2;
	side3 = s3;
}
/*
void Triangle::print() {
	std::cout << " /\\" << std::endl;
	std::cout << "/ \\" << std::endl;
	std::cout << " __ " << std::endl;


}

Shape* Triangle::copy() {
	Triangle* newT = new Triangle(side1, side2, side3);
	return newT;
}

double Triangle::getPerimeter()const {
	return side1 + side2 + side3;
}
*/