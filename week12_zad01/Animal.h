#pragma once
#ifndef ANIMAL_H
#define ANIMAL_H
class Animal {
private:
	char* name;
	char* food;
	char* sleepPlace;
	int weight;
	int eaten;
	void copy(const Animal& other);
	void free();
public:
	static size_t createdAnimals;
	virtual Animal* clone() const = 0;
	Animal(const char* n, const char* f, const char* sp, int w);
	virtual ~Animal();
	Animal(const Animal& other);
	Animal& operator=(const Animal& other);
	int getEaten() const;
	void setEaten(int i);
	double eat() const;
	char* getFood() const;
};
	

#endif