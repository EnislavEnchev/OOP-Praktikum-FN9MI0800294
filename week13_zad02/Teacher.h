#pragma once
#ifndef TEACHER_H
#define TEACHER_H
#include "BasePerson.h"
#include <iostream>
class Teacher :virtual public BasePerson {
private:
	std::string department;
	std::string* disciplines;
	size_t count;
	size_t capacity;
	void free();
	void copy(const Teacher& other);
public:
	void addDis(std::string dis);
	Teacher(std::string n, std::string de);
	~Teacher();
	Teacher(const Teacher& other);
	Teacher& operator=(const Teacher& other);
	BasePerson* clone() override;
	void display() const override;
};
#endif