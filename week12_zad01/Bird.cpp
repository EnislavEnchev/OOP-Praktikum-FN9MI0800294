#include"Bird.h"
#include"Animal.h"
#include<iostream>

Bird::Bird(const char* n, const char* f, const char* sp, int w, const char* o):Animal(n,f,sp,w) {
	origin = o;
}

Bird::Bird(const Bird& other) : Animal(other){
	origin = other.origin;
}

Animal* Bird::clone() const{
	return new Bird(*this);
}