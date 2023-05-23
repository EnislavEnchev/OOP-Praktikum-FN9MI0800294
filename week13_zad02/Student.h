#pragma once
#ifndef STUDENT_H
#define STUDENT_H
#include "BasePerson.h"
#include<iostream>
class Student : virtual public BasePerson {
private:
	std::string facultyNumber;
public:
	Student(std::string n, std::string fn);
	BasePerson* clone() override;
	void display() const override;
};
#endif