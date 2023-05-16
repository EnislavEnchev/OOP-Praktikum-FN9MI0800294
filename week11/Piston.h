#pragma once
#ifndef PISTON_H
#define PISTON_H
#include<string>
#include "CarPart.h"
class Piston : public CarPart {
public:
	Piston();
	void display() const override;
private:
	unsigned diameter;
	unsigned move;
};
#endif