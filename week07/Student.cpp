#include "Power.h"
#include<iostream>
#include <string>
#include "Student.h"



Student::Student() {
	this->name = "Gosho";
	this->health = 100;
}

Student::Student(const std::string& name) {
	this->health = 100;
	this->name = name;
}

const std::string& Student::getName() {
	return this->name;
}

const std::string& Student::getHouse() {
	return this->house;
}

void Student::setHouse(const std::string& house) {
	this->house = house;
}

int Student::getHealth() {
	return this->health;
}

void Student::takeDamage(int damage) {
	this->health -= damage;
}

void Student::setPower(const Power* power) {
	this->power = power;
}

const Power* Student::getPower() {
	return this->power;
}

bool Student::isAlive() {
	if (this->health <= 0) {
		return false;
	}
	return true;
}

int Student::attack() {
	return power->getDamage();
}