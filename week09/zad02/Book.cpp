#include"Item.h"
#include"Book.h"
#include<cstring>
#include<iostream>

Book::Book() : Item() {
	genre = new char[13];
	strcpy_s(genre, 13, "Encyclopedia");
}

Book::~Book() {
	delete[] genre;
}

Book& Book::operator=(const Book& other) {
	if (!(this == &other)) {
		Item::operator=(other);
		delete[] genre;
		genre = new char[strlen(other.genre) + 1];
		strcpy_s(genre, strlen(other.genre) + 1, other.genre);
	}
	return *this;
}
Book::Book(const Book& other) :Item(other){
	genre = new char[strlen(other.genre) + 1];
	strcpy_s(genre, strlen(other.genre) + 1, other.genre);
}

void Book::print() {
	Item::print();
	std::cout << genre << std::endl;
}