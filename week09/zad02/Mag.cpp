#include"Item.h"
#include"Mag.h"
#include<iostream>
#include<cstring>

Mag::Mag() : Item() {
	issueNumber = 4;
}

Mag::~Mag() {
	issueNumber = 0;
}

Mag& Mag::operator=(const Mag& other) {
	if (!(this == &other)) {
		Item::operator=(other);
		issueNumber = other.issueNumber;
	}
	return *this;
}

Mag::Mag(const Mag& other) :Item(other){
	issueNumber = other.issueNumber;
}

void Mag::print() {
	Item::print();
	std::cout << issueNumber << std::endl;
}