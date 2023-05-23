#include"BasePerson.h"
#include"Student.h"
#include<iostream>

Student::Student(std::string n, std::string fn):BasePerson(n) {
	facultyNumber = fn;
}

void Student::display() const {
	BasePerson::display();
	std::cout << facultyNumber << std::endl;
}

BasePerson* Student::clone() {
	return new Student(*this);
}