#pragma once
#include"Shape.h"
#include<iostream>
#ifndef TRIANGLE_H
#define TRIANGLE_H
class Triangle : public Shape {
private:
	double side1;
	double side2;
	double side3;
public:
	Triangle(double s1, double s2, double s3);
	void print() override {
		std::cout << " /\\" << std::endl;
		std::cout << "/__\\" << std::endl;
	}
	Shape* copy() override {
		Shape* newT = new Triangle(side1, side2, side3);
		return newT;
	}
	double getPerimeter() const override {
		return side1 + side2 + side3;
	}
};

#endif