#include "Triangle.h"
#include <iostream>

int main() {
	Triangle triangle(3, 4, 5);

	std::cout << std::boolalpha << triangle.isIsosceles()<< std::endl;
	std::cout << std::boolalpha << triangle.isRectangular() << std::endl;
	std::cout << triangle.perimeter() << std::endl;
	std::cout << triangle.area() << std::endl;
	std::cout << triangle.height('c') << std::endl;
	std::cout << triangle.radiusOfInnerCircle() << std::endl;

}