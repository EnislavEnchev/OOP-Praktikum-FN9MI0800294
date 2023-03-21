#include<iostream>
#include<fstream>
#include "Storage.h"
#include "Shoe.h"



Storage::Storage(const Storage& other) {
	current = 0;
	this->shoes = new Shoe[other.max_size];
	this->max_size = other.max_size;
	for (int i = 0; i < other.max_size; i++) {
		this->shoes[i] = other.shoes[i];
	}
}


 Storage::Storage(int max_size) {
	 shoes = new Shoe[max_size];
}
 Storage::~Storage() {
	 delete[] shoes;
 }

 Storage& Storage::operator=(const Storage& other) {
	 if (this != &other) {
		 this->shoes = new Shoe[other.max_size];
		 this->max_size = other.max_size;
		 for (int i = 0; i < other.max_size; i++) {
			 this->shoes[i] = other.shoes[i];
		 }
	 }
	 return *this;
 }

 void Storage::addModel(std::string modelNew, int startingPairs) {
	shoes[current].model 
 }