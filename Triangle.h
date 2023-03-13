#ifndef TRIANGLE_H
#define TRIANGLE_H

class Triangle {
private:
	double a, b, c;

public:
	Triangle(double a, double b, double c);
	bool isRectangular();
	bool isIsosceles();// znaeh ya tazi duma :)
	double halfPerimeter();
	double area();
	double perimeter();
	double height(char side);
	double radiusOfInnerCircle();
};



#endif
