#include"Pet.h"
#include"Animal.h"
#include<cstring>
#include<iostream>

void Pet::copy(const Pet& other) {
	owner = new char[strlen(other.owner) + 1];
}
void Pet::destroy() {
	delete[] owner;
	tel = 0;
}
Pet::Pet() :Animal(){
	owner = new char[5];
	strcpy_s(owner, 5, "None");
	tel = 1;
}

Pet::~Pet() {
	
	destroy();
}

Pet::Pet(const Pet& other) : Animal(other){
	copy(other);
}

Pet& Pet::operator=(const Pet& other) {
	if (!(this == &other)) {
		Animal::operator=(other);
		destroy();
		copy(other);
	}
	return *this;
}

void Pet::changeOwner(const char* newOwner) {
	delete[] owner;
	owner = new char[strlen(newOwner) + 1];
	strcpy_s(owner, strlen(newOwner)+1, newOwner);
}

void Pet::print() {
	std::cout << name << ' ' << age << ' ' << owner << ' ' << tel << ' ' << std::endl;
}