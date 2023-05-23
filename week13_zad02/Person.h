#pragma once
#ifndef PERSON_H
#define PERSON_H
#include<iostream>
#include"BasePerson.h"
class Person : public BasePerson{
private:
	//smenyam malko arhitekturata
	static size_t created;
	size_t id;
	std::string occupation;
public:
	Person(std::string n, std::string o);
	BasePerson* clone() override;
	void display() const override;

};

#endif