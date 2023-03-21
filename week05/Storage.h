#ifndef STORAGE_H
#define STORAGE_H
#include<iostream>
#include "Shoe.h"
class Storage {
private:
	int max_size;
	void destroy();
	void copy(const Storage& other);
	Shoe* shoes;

public:
	Storage(int max_storage);
	~Storage();
	Storage& operator=(const Storage& other);
	void addModel(std::string modelNew, int startingPairs);
	void sellModel(std::string modelSell);
	void addQuantity(std::string modelAdd, int quantity);
	void changeRating(std::string modelChange, double ratingNew);

};


#endif
