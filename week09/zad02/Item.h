#pragma once
#ifndef ITEM_H
#define ITEM_H
class Item {
public:
	//unsigned id;
	char* title;
	char* author;
	char* publicationDate;
	Item();
	~Item();
	Item& operator=(const Item& other);
	void print();
};
#endif