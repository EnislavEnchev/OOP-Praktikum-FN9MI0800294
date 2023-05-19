#include"Animal.h"
#include"Mammal.h"
#include<cstring>
#include<iostream>

void Mammal::free() {
	delete[] owner;
	owner = nullptr;
}

Mammal::Mammal(const char* n, const char* f, const char* sp, int w, const char* o): Animal(n,f,sp,w) {
	owner = new char[strlen(o) + 1];
	strcpy_s(owner,strlen(o) + 1, o);
}

Mammal::~Mammal() {
	free();
}
Animal* Mammal::clone() const {
	return new Mammal(*this);
}
Mammal::Mammal(const Mammal& other) : Animal(other){
	owner = new char[strlen(other.owner)+1];
	strcpy_s(owner, strlen(other.owner) + 1, other.owner);
}

Mammal& Mammal::operator=(const Mammal& other) {
	if (!(this == &other)) {
		Animal::operator=(other);
		free();
		owner = new char[strlen(other.owner) + 1];
		strcpy_s(owner, strlen(other.owner) + 1, other.owner);
	}
	return *this;
}
