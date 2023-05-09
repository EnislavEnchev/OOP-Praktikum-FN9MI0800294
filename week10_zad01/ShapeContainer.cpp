#include "Shape.h"
#include "Circle.h"
#include "Square.h"
#include "Triangle.h"
#include "ShapeContainer.h"
#include<vector>
#include<iostream>

void ShapeContainer::addShape(Shape* s) {
	shapes.push_back(s);
}

void ShapeContainer::printInfo() {
	for (Shape* i : shapes) {
		std::cout << i->getLabel() << " - " << i->getPerimeter() << std::endl;
	}
}

void ShapeContainer::printPics() {
	for (Shape* i : shapes) {
		i->print();
	}
}