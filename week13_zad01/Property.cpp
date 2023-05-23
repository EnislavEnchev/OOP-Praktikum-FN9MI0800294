#include"Property.h"
#include<iostream>

bool Property::getTangible() const {
	return tangible;
}

std::string Property::getOwner() const {
	return owner;
}