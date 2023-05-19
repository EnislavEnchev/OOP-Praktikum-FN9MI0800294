#include"Animal.h"
#include"Mammal.h"
#include"ZooSector.h"
#include"Zoo.h"
#include<iostream>

size_t Zoo::created = 0;

void Zoo::free() {
	delete[] inventory;
	inventory = nullptr;
}

void Zoo::copy(const Zoo& other) {
	capacity = other.capacity;
	used = other.used;
	name = other.name;
	for (size_t i = 0; i < used; i++) {
		inventory[i] = other.inventory[i];
	}
}

Zoo::Zoo(std::string n, int kp, int km) {
	kgOfMeat = km;
	kgOfPlants = kp;
	capacity = 10;
	used = 0;
	name = n;
	inventory = new Animal * [capacity];

}

Zoo::~Zoo() {
	free();
}

Zoo::Zoo(const Zoo& other) {
	copy(other);
}

Zoo& Zoo::operator=(const Zoo& other) {
	if (!(this == &other)) {
		free();
		copy(other);
	}
	return *this;
}

void Zoo::addInventory(Animal* animal) {
	if (capacity == used) {
		capacity *= 2;
		Animal** newA = new Animal * [capacity];
		for (size_t i= 0; i < used; i++){
			newA[i] = inventory[i];
		}
		free();
		inventory = newA;
	}
	inventory[used] = animal;
	used++;
}

bool Zoo::canFeed() {
	int tempM = kgOfMeat;
	int tempP = kgOfPlants;
	for (size_t i = 0; i < used; i++) {
		
		if (strcmp(inventory[i]->getFood(), "Meat") == 0 || strcmp(inventory[i]->getFood(), "Omnivore") == 0) {
			std::cout << inventory[i]->eat() << std::endl;
			tempM -= inventory[i]->eat();
		}
		if (strcmp(inventory[i]->getFood(), "Plants") == 0 || strcmp(inventory[i]->getFood(), "Omnivore") == 0) {
			tempP -= inventory[i]->eat();
		}
	}
	std::cout << tempP;
	if (tempM < 0 || tempP < 0) {
		return false;
	}
	return true;
}