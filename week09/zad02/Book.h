#pragma once
#include"Item.h"
#ifndef BOOK_H
#define BOOK_H
class Book : public Item {
private:
	char* genre;
public:
	Book();
	Book(const Book& other);
	Book& operator=(const Book& other);
	~Book();
	void print();
};

#endif
