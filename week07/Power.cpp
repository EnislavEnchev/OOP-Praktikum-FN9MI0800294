#include "Power.h"
#include<iostream>
#include <string>

Power::Power(const std::string& name, int damage) {
	this->name = name;
	this->damage = damage;
}


const std::string& Power::getName() {
	return this->name;
}

int Power::getDamage() const {
	return this->damage;
}

bool Power::operator<(const Power& other) {
	if (this->damage > other.damage) {
		return true;
	}
	return false;
}