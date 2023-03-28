#pragma once
#ifndef SIMPLEVECTOR_H
#define SIMPLEVECTOR_H
#include<iostream>

class SimpleVector {
private:
	int data[10];
	std::size_t size;
public:
	SimpleVector& operator+(const SimpleVector& other);
	SimpleVector& operator-(const SimpleVector& other);
	SimpleVector& operator*(const int& other);
	SimpleVector& operator/(const int& other);
};

#endif+