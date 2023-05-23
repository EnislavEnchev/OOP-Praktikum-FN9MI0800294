#pragma once
#include"Student.h"
#include"Teacher.h"
#include"BasePerson.h"
#include<iostream>
#ifndef ASSISTANT_H
#define ASSISTANT_H
class Assistant : public Student, public Teacher {
public:
	Assistant(std::string n, std::string fn, std::string dep);
	BasePerson* clone() override;
	void display() const override;
};
#endif