#include<iostream>
#include<fstream>
#include "Storage.h"



Storage::Storage(const Storage& other) {
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
	 destroy();
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