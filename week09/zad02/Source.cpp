#include<iostream>
#include"Dictionary.h"
#include"Item.h"
#include"Book.h"
#include"Mag.h"

int main() {
	Item some;
	Dictionary<size_t, Item> items;
	Dictionary<size_t, Book> books;
	Dictionary<size_t, Mag> mags;
	items.add(1, some);
	items[1].print();
	
}