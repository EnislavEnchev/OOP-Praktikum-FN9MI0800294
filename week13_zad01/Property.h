#pragma once
#ifndef PROPERTY_H
#define PROPERTY_H
#include<iostream>
class Property {
private:
	std::string owner;
	bool tangible;
public:
	bool getTangible() const;
	std::string getOwner() const;
};
#endif