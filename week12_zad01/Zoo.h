#pragma once
#ifndef ZOO_H
#define ZOO_H
#include"Animal.h"
#include"Mammal.h"
#include"ZooSector.h"
class Zoo {
public:
	static size_t created;
	Zoo(std::string n, int kp, int km);
	~Zoo();
	Zoo(const Zoo& other);
	Zoo& operator=(const Zoo& other);
	void addInventory(Animal* animal);
	bool canFeed();
private:
	size_t used;
	size_t capacity;
	void free();
	void copy(const Zoo& other);
	int kgOfPlants;
	int kgOfMeat;
	std::string name;
	Animal** inventory;
	

};


#endif;