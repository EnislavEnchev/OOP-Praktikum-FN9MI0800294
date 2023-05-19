#include"Animal.h"
#include"Mammal.h"
#include"ZooSector.h"
#include<vector>
#include<iostream>

void ZooSector::setCoordinates(int newx, int newy) {
	x = newx;
	y = newy;
}

void ZooSector::add(Animal* animal) {
	animals.push_back(animal);
}

void ZooSector::print() {
	int size = animals.size();
	for (size_t i = 0; i < size; i++) {
		std::cout << animals[i]->getFood()<<std::endl;
	}
}