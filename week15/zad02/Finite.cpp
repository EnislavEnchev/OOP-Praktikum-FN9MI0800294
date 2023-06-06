#include"Finite.h"
#include"Set.h"
#include<iostream>

void Finite::free() {
	delete[] nums;
	//nums = nullptr;
	actual_size = 0;
}

void Finite::copy(const Finite& other) {
	actual_size = other.actual_size;
	nums = new int[100];
	for (size_t i = 0; i < actual_size; i++) {
		nums[i] = other.nums[i];
	}
}

Finite::Finite(int* n, size_t as) {
	nums = new int[100];
	actual_size = as;
	for (size_t i = 0; i < as; i++) {
		nums[i] = n[i];
	}
}

Finite::~Finite() { free(); }

Finite::Finite(const Finite& other) {
	copy(other);
}

Finite& Finite::operator=(const Finite& other) {
	if (!(this == &other)) {
		free();
		copy(other);
	}
	return *this;
}

bool Finite::checkInterval(int start, int finish) const  {
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

void Finite::addNum(int x) {
	//ne e kazano, che nyama povtoreniya
	if (actual_size != 100) {
		nums[actual_size] = x;
		actual_size++;
	}
}

void Finite::removeNum(int x) {
	for (size_t i = 0; i < actual_size; i++) {
		if (nums[i] == x) {
			for (size_t j = actual_size - 1; j > i; j--) {
				nums[j - 1] = nums[j];
			}
			actual_size--;
		}
	}
}