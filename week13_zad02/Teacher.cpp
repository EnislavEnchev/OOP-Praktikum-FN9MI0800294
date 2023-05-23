#include"BasePerson.h"
#include"Teacher.h"
#include<iostream>

void Teacher::free() {
	delete[] disciplines;
}

void Teacher::copy(const Teacher& other) {
	department = other.department;
	count = other.count;
	capacity = other.capacity;
	disciplines = new std::string[capacity];
	for (size_t i = 0; i < count; i++) {
		disciplines[i] = other.disciplines[i];
	}
}

Teacher::Teacher(std::string n, std::string de) :BasePerson(n){
	department = de;
	count = 0;
	capacity = 10;
	disciplines = new std::string[capacity];
}

Teacher::~Teacher() {
	free();
}

Teacher::Teacher(const Teacher& other) :BasePerson(other){
	copy(other);
}

Teacher& Teacher::operator=(const Teacher& other) {
	if (!(this == &other)) {
		free();
		copy(other);
	}
	return *this;
}

void Teacher::addDis(std::string dis) {
	if (count == capacity) {
		capacity *= 2;
		std::string* newArr = new std::string[capacity];
		for (size_t i = 0; i < count; i++) {
			newArr[i] = disciplines[i];
		}
		delete[] disciplines;
		disciplines = newArr;
	}
	disciplines[count] = dis;
	count++;
}

BasePerson* Teacher::clone() {
	return new Teacher(*this);
}

void Teacher::display() const{
	BasePerson::display();
	std::cout << department << std::endl;
	std::cout << "Disciplines:" << std::endl;
	for (size_t i = 0; i < count; i++) {
		std::cout << disciplines[i] << ' ';
	}
	std::cout << std::endl;
}