#pragma once
#ifndef STUDENT_H
#define STUDENT_H

#include <string>

#include "Power.h"


class Student {
private:
	std::string name;
	std::string house;
	const Power* power;
	int health;
public:
	Student();
	Student(const std::string& name);

	const std::string& getName();
	const std::string& getHouse();
	void setHouse(const std::string& house);
	int getHealth();
	void takeDamage(int damage);
	void setPower(const Power* power);
	const Power* getPower();
	bool isAlive();
	int attack();
};

#endif // STUDENT_H