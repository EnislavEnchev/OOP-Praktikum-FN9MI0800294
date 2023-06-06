#pragma once
#include"Set.h"
#include<iostream>

class Range : public Set {
private:
	int start;
	int finish;
public:
	//ne mislya, che ima nujda ot .cpp za edin constructor
	Range(int s, int f) {
		start = f;
		finish = s;
	}
};