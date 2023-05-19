#pragma once
#ifndef ZOOSECTOR_H
#define ZOOSECTOR_H
#include"Animal.h"
#include"Mammal.h"
#include"Bird.h"
#include<iostream>
#include<vector>

class ZooSector {
private:
	std::vector<Animal*> animals;
	int x;
	int y;
public:
	void setCoordinates(int newx, int newy);
	void print();
	void add(Animal* animal);

};
#endif