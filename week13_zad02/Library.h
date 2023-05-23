#pragma once
#ifndef LIBRARY_H
#define LIBRARY_H
#include"BasePerson.h"
#include"Student.h"
#include"Teacher.h"
#include"Person.h"
#include<iostream>
#include<vector>

class Library {
private:
	std::vector<BasePerson*> members;
public:
	void addMember(BasePerson* bp);
	void info() const;

};

#endif