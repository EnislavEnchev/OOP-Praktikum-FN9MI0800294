#pragma once
#include"Vehicle.h"
#ifndef SUV_H
#define SUV_H
class SUV : public Vehicle{
private:
	bool is4x4;
public:
	SUV(unsigned num, unsigned s, unsigned sp, unsigned p, bool i);
};
#endif