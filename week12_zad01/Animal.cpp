#include"Animal.h"
#include<iostream>
#include<cstring>

size_t Animal::createdAnimals = 0;

void Animal::free() {
	delete[] name;
	delete[] food;
	delete[] sleepPlace;

	name = nullptr;
	food = nullptr;
	sleepPlace = nullptr;
	weight = 0;
}

void Animal::copy(const Animal& other) {
	createdAnimals++;
	name = new char[strlen(other.name) + 1];
	food = new char[strlen(other.food) + 1];
	sleepPlace = new char[strlen(other.sleepPlace) + 1];
	strcpy_s(name, strlen(other.name) + 1, other.name);
	strcpy_s(food, strlen(other.food) + 1, other.food);
	strcpy_s(sleepPlace, strlen(other.sleepPlace) + 1, sleepPlace);
	weight = other.weight;
	eaten = other.eaten;
}

Animal::Animal(const char* n, const char* f, const char* sp, int w) {
	createdAnimals++;
	name = new char[strlen(n) + 1];
	food = new char[strlen(f) + 1];
	sleepPlace = new char[strlen(sp) + 1];
	strcpy_s(name, strlen(n) + 1, n);
	strcpy_s(food, strlen(f) + 1, f);
	strcpy_s(sleepPlace, strlen(sp) + 1, sp);
	weight = w;
	eaten = 0;
}

Animal::~Animal() {
	free();
}



Animal::Animal(const Animal& other) {
	createdAnimals++;
	copy(other);
}

Animal& Animal::operator=(const Animal& other) {
	if (!(this == &other)) {
		free();
		copy(other);
	}
	return *this;
}

double Animal::eat() const {
	return (double)weight / 10;
}
int Animal::getEaten() const{
	return eaten;
}


void Animal::setEaten(int i) {
	eaten += i;
}


char* Animal::getFood() const{
	return food;
}