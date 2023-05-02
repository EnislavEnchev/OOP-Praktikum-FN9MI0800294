#pragma once
#include"Animal.h"
#ifndef PET_H
#define PET_H
class Pet : public Animal {
private:
	void destroy();
	void copy(const Pet& other);
	char* owner;
	unsigned tel;
public:
	Pet();
	~Pet();
	Pet(const Pet& other);
	Pet& operator=(const Pet& other);
	void print();
	void changeOwner(const char* newOwner);
};
#endif