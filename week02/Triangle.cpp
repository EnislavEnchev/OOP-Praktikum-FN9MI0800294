#include "Triangle.h"
#include <iostream>
#include <cmath>


Triangle::Triangle(double a, double b, double c) {
	this->a = a;
	this->b = b;
	this->c = c;
}

bool Triangle::isRectangular() {
	if (c*c == a*a + b*b || b*b == a*a + c*c || a*a == b*b + c*c) {
		return true;
	}
	return false;
}

bool Triangle::isIsosceles() {
	if (a == b || b == c || a == c) {
		return true;
	}
	return false;
}
double Triangle::halfPerimeter() {
	return (a + b + c) / 2;
}
double Triangle::area() {
	return sqrt(halfPerimeter() * (halfPerimeter() - a) * (halfPerimeter() - b) * (halfPerimeter() - c));
}
double Triangle::perimeter() {
	return a + b + c;
}

double Triangle::height(char side) {
	switch (side) {
	case 'a' : return (area() * 2) / a;
				break;
	case 'b' : return (area() * 2) / b;
				break;
	case 'c' : return (area() * 2) / c;
				break;
	}			
}

double Triangle::radiusOfInnerCircle() {
	return (2 * area()) / perimeter();
}