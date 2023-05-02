#include"Item.h"
#include<iostream>
#include<cstring>

Item::Item() {
	//id = 1;
	title = new char[3];
	strcpy_s(title, 3, "No");
	author = new char[3];
	strcpy_s(author, 3, "Me");
	publicationDate = new char[5];
	strcpy_s(publicationDate, 5, "0000");
}

Item::~Item() {
	delete[] title;
	delete[] author;
	delete[] publicationDate;
	//id = 0;
}
Item::Item(const Item& other) {
	title = new char[strlen(other.title) + 1];
	strcpy_s(title, strlen(other.title) + 1, other.title);
	author = new char[strlen(other.author) + 1];
	strcpy_s(author, strlen(other.author) + 1, other.author);
	publicationDate = new char[strlen(other.publicationDate) + 1];
	strcpy_s(publicationDate, strlen(other.publicationDate) + 1, other.publicationDate);
}

Item& Item::operator=(const Item& other) {
	if (!(this == &other)) {
		delete[] title;
		delete[] author;
		delete[] publicationDate;
		title = new char[strlen(other.title) + 1];
		strcpy_s(title, strlen(other.title) + 1, other.title);
		author = new char[strlen(other.author) + 1];
		strcpy_s(author, strlen(other.author) + 1, other.author);
		publicationDate = new char[strlen(other.publicationDate) + 1];
		strcpy_s(publicationDate, strlen(other.publicationDate) + 1, other.publicationDate);
	}
	return *this;
}

void Item::print() {
	std::cout << title << ' ' << author << ' ' << publicationDate << ' ' << std::endl;
}