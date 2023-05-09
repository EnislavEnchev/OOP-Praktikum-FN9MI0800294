#pragma once
#include<string>
#include<cstring>
#ifndef SHAPE_H
#define SHAPE_H
class Shape {
public:
	Shape(std::string l);
	std::string label;
	std::string getLabel()const;
	virtual void print() = 0;
	virtual Shape* copy() = 0;
	virtual double getPerimeter() const = 0;
};

#endif
