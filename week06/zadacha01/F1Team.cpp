#include "F1Team.h"
#include <fstream>
#include<iostream>
#include<cstring>

void F1Team::writeTeam(std::ofstream &stream) {
	stream.write((char*)this, sizeof(F1Team));
}

void F1Team::readTeam(std::ifstream &stream) {
	stream.read((char*)this, sizeof(F1Team));
}

F1Team::F1Team(F1Car some[2],const char* some2) {
	for (int i = 0; i < 2; i++) {
		this->cars[i] = some[i];
	}
	unsigned s = strlen(some2);
	int i;
	for (i = 0; i < s; i++) {
		this->name[i] = some2[i];
	}
	name[i] = '\0';
}

void F1Team::print() {
	std::cout << name;
}