#include"Animal.h"
#include<iostream>
#include<cstring>

void Animal::copy(const Animal& other) {
	name = new char[strlen(other.name) + 1];
	strcpy_s(name,strlen(other.name), other.name);
	age = other.age;
}

void Animal::destroy() {
	delete[] name;
	
}

Animal::Animal() {
	name = new char[6];
	strcpy_s(name, 6, "Empty");
	age = 0;
}

Animal::~Animal() {
	destroy();
	age = 0;
}

Animal::Animal(const Animal& other) {
	copy(other);
}

Animal& Animal::operator=(const Animal& other) {
	if (!(this == &other)) {
		destroy();
		age = 0;
		copy(other);
	}
	return *this;
}

void Animal::changeName(const char* newName) {
	destroy();
	name = new char[strlen(newName) + 1];
	strcpy_s(name,strlen(newName)+1,newName);
}