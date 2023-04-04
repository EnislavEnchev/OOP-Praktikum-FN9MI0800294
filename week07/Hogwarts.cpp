#include "Power.h"
#include<iostream>
#include <string>
#include "Student.h"
#include "Hogwarts.h"


void Hogwarts::copy(const Hogwarts& other) {
	this->students = other.students;
	this->size = other.size;
	this->current = other.current;
}

void Hogwarts::destroy() {
	delete[] students;
	size = 0;
}

Hogwarts::Hogwarts() {
	size = 10;
	students = new Student[10];
	current = 0;
	
}

Hogwarts::Hogwarts(const Hogwarts& other) {
		this->copy(other);
	
	
}

Hogwarts::Hogwarts(Hogwarts&& other) {
		this->students = other.students;
		this->size = other.size;
		this->current = other.current;

		other.students = nullptr;
		other.size = 0;
		other.current = -1;

	
}

Hogwarts& Hogwarts::operator=(const Hogwarts& other) {
	if (this != &other) {
		this->destroy();
		this->copy(other);
	}

	return *this;
}

Hogwarts& Hogwarts::operator=(Hogwarts&& other) {
	if (this != &other) {
		this->destroy();
		this->students = other.students;
		this->size = other.size;
		this->current = other.current;

		other.students = nullptr;
		other.size = 0;
		other.current = -1;
	}
	return *this;
}

Hogwarts::~Hogwarts() {
	delete[] students;
}

std::ostream& operator<<(std::ostream& out, const Hogwarts& hogwarts) {
	for (size_t i = 0; i < hogwarts.size; i++) {
		out << hogwarts.students[i].getName() << hogwarts.students[i].getPower();
	}

	return out;
}

void Hogwarts::addStudent(const Student& student) {
	students[current] = student;
	current++;
}

void Hogwarts::assignHouse(const std::string& studentName, const std::string& house) {
	for (size_t i = 0; i < size; i++) {
		if (students[i].getName() == studentName) {
			students[i].setHouse(house);
		}
	}
}

void Hogwarts::givePower(const std::string& name, const Power& power) {
	for (size_t i = 0; i < size; i++) {
		if (students[i].getName() == name) {
			students[i].setPower(&power);
		}
	}
}

int Hogwarts::getHouseStudentsCount(const std::string& house) {
	int count = 0;
	for (size_t i = 0; i < size; i++) {
		if (students[i].getHouse() == house) {
			count++;
		}
	}
	return count;
}

Student* Hogwarts::getFirstStudent(const std::string& house) {
	for (size_t i = 0; i < size; i++) {
		if (students[i].getHouse() == house) {
			return &students[i];
		}
	}
}

const Student* Hogwarts::getStudents() {
	return this->students;
}

bool Hogwarts::removeStudent(const std::string& name) {
	for (size_t i = 0; i < size; i++) {
		if (students[i].getName() == name) {
			size_t index = i;
			for (size_t j = i; j < size - 1; j++) {
				students[j] = students[j + 1];
			}
			current--;
			return true;
		}
	}
	return false;
}