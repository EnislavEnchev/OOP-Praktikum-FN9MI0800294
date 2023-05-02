#pragma once
#include"Item.h"
#ifndef MAG_H
#define MAG_H
class Mag :public Item {
private:
	unsigned issueNumber;
public:
	Mag();
	~Mag();
	Mag(const Mag& other);
	void print();
	Mag& operator=(const Mag& other);
};
#endif
