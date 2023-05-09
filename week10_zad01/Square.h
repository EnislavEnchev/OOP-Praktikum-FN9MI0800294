#pragma once
#include"Shape.h"
#include<iostream>
#ifndef SQUARE_H
#define SQUARE_H
class Square : public Shape {
private:
	double side;
public:
	Square(double s);
	void print() override {
		std::cout << " ----" << std::endl;
		std::cout << "|    |" << std::endl;
		std::cout << "|    |" << std::endl;
		std::cout << " ----" << std::endl;
	};
	Shape* copy() override {
		Shape* newS = new Square(side);
		return newS;
	}
	double getPerimeter() const override {
		return 4 * side;
	}
};

#endif