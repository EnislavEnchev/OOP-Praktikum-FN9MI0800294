#pragma once
#include "Shape.h"
#include "Circle.h"
#include "Square.h"
#include "Triangle.h"
#include<vector>
#ifndef SHAPECONTAINER_H
#define SHAPECONTAINER_H
class ShapeContainer {
public:
	ShapeContainer() = default;
	std::vector <Shape*> shapes;
	void addShape(Shape* s);
	void printInfo();
	void printPics();
};
#endif