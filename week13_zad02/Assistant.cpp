#include"Assistant.h"
#include"Student.h"
#include"Teacher.h"
#include"BasePerson.h"
#include<iostream>

Assistant::Assistant(std::string n, std::string fn, std::string dep) : Student(n, fn), Teacher(n, dep), BasePerson(n) {}

BasePerson* Assistant::clone() {
	return new Assistant(*this);
}

void Assistant::display() const {
	std::cout << "Assistant:";
	BasePerson::display();
	Student::display();
	Teacher::display();
}