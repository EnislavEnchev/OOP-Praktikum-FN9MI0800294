#include"BasePerson.h"
#include<iostream>

void BasePerson::display() const{
	std::cout << "Name: " << name << std::endl;
}

BasePerson::~BasePerson() {
	std::cout << "Destruct...";
}

BasePerson::BasePerson(std::string n) {
	name = n;
}

BasePerson::BasePerson(const BasePerson& other) {
	name = other.name;
}

