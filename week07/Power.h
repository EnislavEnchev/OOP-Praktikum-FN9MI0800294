#pragma once
#ifndef POWER_H
#define POWER_H
#include <string>

class Power {
private:
	std::string name;
	int damage;
public:
	friend class Student;
	Power(const std::string& name, int damage);

	const std::string& getName();
	int  getDamage() const;
	bool operator<(const Power& other);
};

#endif  // POWER_H