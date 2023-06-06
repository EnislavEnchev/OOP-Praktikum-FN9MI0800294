#include"Set_Not_Abstract.h"
#include<iostream>

void Set::free() {
	delete[] nums;
	//nums = nullptr;
	cap = 0;
	actual_size = 0;
}

void Set::copy(const Set& other) {
	cap = other.cap;
	actual_size = other.actual_size;
	nums = new int[cap];
	for (size_t i = 0; i < actual_size; i++) {
		nums[i] = other.nums[i];
	}
}

Set::Set(int* n, size_t c, size_t as) {
	nums = new int[c];
	cap = c;
	actual_size = as;
	for (size_t i = 0; i < as; i++) {
		nums[i] = n[i];
	}
}

Set::~Set() { free(); }

Set::Set(const Set& other) {
	copy(other);
}

Set& Set::operator=(const Set& other) {
	if (!(this == &other)) {
		free();
		copy(other);
	}
	return *this;
}

bool Set::checkInterval(int start, int finish) {
	for (start; start <= finish; start++) {
		bool flag = false;
		for (size_t i = 0; i < actual_size; i++) {
			if (nums[i] == start) {
				flag = true;
			}
		}
		if (!flag) { return false; }
	}
	return true;
}