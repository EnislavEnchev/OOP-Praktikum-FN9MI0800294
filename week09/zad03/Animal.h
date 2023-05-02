#pragma once
#ifndef ANIMAL_H
#define ANIMAL_H
class Animal {
private:
	void destroy();
	void copy(const Animal& other);
public:
	char* name;
	unsigned age;
	Animal();
	~Animal();
	Animal(const Animal& other);
	Animal& operator=(const Animal& other);
	void changeName(const char* newName);
};
#endif
