#pragma once
#include"Shape.h"
#include<iostream>
#ifndef CIRCLE_H
#define CIRCLE_H
class Circle : public Shape {
private:
	double radius;
public:
	Circle(double r);
	void print() override {
		std::cout << "   -  " << std::endl;
		std::cout << " /   \\ " << std::endl;
		std::cout << "|     |" << std::endl;
		std::cout << " \\   / " << std::endl;
		std::cout << "   -  " << std::endl;
	}
	Shape* copy() override {
		Shape* newC = new Circle(radius);
		return newC;
	}
	double getPerimeter() const override {
		return 3.14 * 2 * radius;
	}
};

#endif