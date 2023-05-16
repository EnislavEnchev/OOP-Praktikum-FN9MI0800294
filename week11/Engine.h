#pragma once
#ifndef ENGINE_H
#define ENGINE_H
#include<string>
#include<vector>
#include"Piston.h"
#include "CarPart.h"
#include<iostream>
class Engine : public CarPart {
public:
	void display() const override;
	void addPiston(const Piston& piston);
	Engine();
private:
	unsigned power;
	std::vector<Piston> pistons;
};
#endif