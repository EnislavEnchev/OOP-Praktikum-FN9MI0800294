#include "Shape.h"
#include "Circle.h"
#include "Square.h"
#include "Triangle.h"
#include "ShapeContainer.h"
#include<vector>
#include<iostream>

int main() {
	Circle c(2);
	Square s(4);
	Triangle t(3, 4, 5);
	ShapeContainer some;
	some.addShape(&s);
	some.addShape(&t);
	some.printPics();
}