#include"Shape.h"
#include<iostream>

Shape::Shape(std::string l) {
	label = l;
}

std::string Shape::getLabel()const {
	return label;
}