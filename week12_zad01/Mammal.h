#pragma once
#include"Animal.h"
#ifndef MAMMAL_H
#define MAMMAL_H
class Mammal : public Animal {
private:
	char* owner;
	//void copy(const Mammal& other);
	void free();
public:
	Mammal(const char* n, const char* f, const char* sp, int w, const char* o);
	~Mammal();
	Mammal(const Mammal& other);
	Mammal& operator=(const Mammal& other);
	Animal* clone() const override;
	//int eat() override;
	//char* getFood() const override;

};
#endif