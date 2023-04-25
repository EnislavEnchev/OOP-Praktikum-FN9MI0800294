#pragma once

#ifndef SET_H
#define SET_H
#include<iostream>
template <typename T>
class Set {
private:
	T* arr;
	size_t capacity;
	size_t used;
	void destroy() {
		delete[] arr;
		capacity = 0;
		used = 0;
	}
public:
	Set() {
		arr = new T[10];
		capacity = 10;
		used = 0;
	}
	~Set() {
		destroy();
	}
	Set& operator=(const Set& other) {
		if (!(this == &other)) {
			destroy();
			used = 0;
			arr = new T[other.capacity];
			capacity = other.capacity;
			for (size_t i = 0; i < other.used; i++) {
				arr[i] = other.arr[i];
				used++;
			}
		}
		return *this;
	}

	bool contains(T x) {
		for (size_t i = 0; i < used; i++) {
			if (x == arr[i]) {
				return true;
			}
		}
		return false;
	}

	void add(T x) {
		if (!contains(x)) {
			if (used == capacity) {
				capacity *= 2;
				T* newarr = new T[capacity];
				for (size_t i = 0; i < used; i++) {
					newarr[i] = arr[i];
				}
				delete[] arr;
				arr = newarr;
			}
			arr[used] = x;
			used++;
		}
	}

	bool isEmpty() {
		if (capacity == 0) {
			return true;
		}
		return false;
	}
	void print() {
		for (size_t i = 0; i < used; i++) {
			std::cout << arr[i] << std::endl;
		}
	}

	Set operator+(const Set& b) const{
		Set newset;
		size_t i;
		for (i = 0; i < this->used; i++) {
			newset.add(this->arr[i]);
		}
		
		for (i = 0; i < b.used; i++) {
			newset.add(b.arr[i]);
		}
		return newset;
	}

	bool operator<(const Set& b) {
		bool flag = false;
		for (size_t i = 0; i < this->used; i++) {
			for (size_t j = 0; j < b.used; j++) {
				if (this->arr[i] == b.arr[j]) {
					flag = true;
				}
			}
			if (!flag) { return false; }
		}
		return true;
	}

};
#endif