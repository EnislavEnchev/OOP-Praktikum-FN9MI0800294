#pragma once
#ifndef DICTIONARY_H
#define DICTIONARY_H
#include<iostream>
template <typename T1, typename T2>
class Dictionary {
private:
	T1 keys[100];
	T2 values[100];
	size_t used = 0;

public:
	//Dictionary() {}
	void add(T1 key, T2 value) {
		if (used == 99) {
			throw std::exception("Error");
		}
		for (size_t i = 0; i < used; i++) {
			if (key == keys[i]) {
				values[i] = value;
				return;
			}
		}
		keys[used] = key;
		values[used] = value;
		used++;
	}
	bool contains(T1 key) {
		for (size_t i = 0; i < used; i++) {
			if (key == keys[i]) {
				return true;
			}
		}
		return false;
	}

	void remove(T1 key) {
		if (contains(key)) {
			size_t start = 0;
			for (size_t i = 0; i < used; i++) {
				if (key == keys[i]) {
					start = i;
				}
			}
			for (size_t i = used; i > start; i--) {
				keys[i - 1] = keys[i];
			}
			used--;
		}
		else {
			std::cout << "No such key";
		}
	}

	size_t size() const {
		return used;
	}

	T2 operator[](const T1& key) {
		if (contains(key)) {
			size_t i;
			for (i = 0; i < used; i++) {
				if (key == keys[i]) {
					break;
				}
			}
			return values[i];
		}
		else {
			throw std::exception("Error");
		}
	}
};

#endif