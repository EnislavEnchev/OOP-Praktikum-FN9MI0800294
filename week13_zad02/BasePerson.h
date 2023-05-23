#pragma once
#ifndef BASEPERSON_H
#define BASEPERSON_H
#include<iostream>
class BasePerson {
private:
	std::string name;
public:
	BasePerson(std::string n);
	BasePerson(const BasePerson& other);
	virtual BasePerson* clone() = 0;
	virtual ~BasePerson();
	virtual void display() const;

};
#endif