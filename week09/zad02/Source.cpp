#include<iostream>
#include"Dictionary.h"
#include"Item.h"
#include"Book.h"
#include"Mag.h"

int main() {
	Book some;
	Dictionary<size_t, Item> items;
	Dictionary<size_t, Book> books;
	Dictionary<size_t, Mag> mags;
	books.add(1, some);
	//books[1].print();
	
}