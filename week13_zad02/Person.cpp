#pragma once
#include"Person.h"
#include"BasePerson.h"
#include<iostream>

size_t Person::created = 1;

Person::Person(std::string n, std::string o):BasePerson(n) {
	occupation = o;
	id = created;
	created++;
}

BasePerson* Person::clone() {
	return new Person(*this);
}

void Person::display() const {
	BasePerson::display();
	std::cout << occupation << ' ' << id << std::endl;
}