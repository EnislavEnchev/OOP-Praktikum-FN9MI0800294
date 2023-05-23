#include"BasePerson.h"
#include"Student.h"
#include"Teacher.h"
#include"Person.h"
#include<iostream>
#include<vector>
#include"Library.h"

void Library::addMember(BasePerson* bp) {
	members.push_back(bp);
}

void Library::info() const {
	size_t size = members.size();
	for (size_t i = 0; i < size; i++) {
		members[i]->display();
	}
}