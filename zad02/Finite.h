#pragma once
#include"Set.h"
#include<iostream>

class Finite : public Set {
private:
	int* nums;
	void free();
	void copy(const Finite& other);
	size_t actual_size;
public:
	Finite(int* n, size_t as);
	~Finite();
	Finite(const Finite& other);
	Finite& operator=(const Finite& other);
	bool checkInterval(int start, int finish) const override;
	void addNum(int x);
	void removeNum(int x);
};