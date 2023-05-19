#pragma once
#include"Animal.h"
#ifndef BIRD_H
#define BIRD_H
#include<iostream>
class Bird : public Animal {
private:
	std::string origin;
public:
	Animal* clone() const override;
	Bird(const char* n, const char* f, const char* sp, int w, const char* o);
	Bird(const Bird& other);
};
#endif
