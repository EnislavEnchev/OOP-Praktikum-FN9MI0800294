#pragma once
#ifndef F1TEAM_H
#define F1TEAM_h
#include "F1Car.h"

class F1Team {
private:
	F1Car cars[2];
	char name[32];
public:
	void writeTeam(std::ofstream &stream);
	void readTeam(std::ifstream &stream);
	F1Team(F1Car some[2],const char* some2);
	void print();
};

#endif
