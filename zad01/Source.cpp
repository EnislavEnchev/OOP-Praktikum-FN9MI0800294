#include"Relations.h"
#include<iostream>

int main() {
	RelationElement<int> r1(2, 6, " is smaller than ");
	RelationElement<int> r2(6, 3, " is divisible by ");
	(r1 * r2).print();
	std::cout << std::endl;
	RelationElement<int> r;
	r = r1 * r2;
	r.print();
}