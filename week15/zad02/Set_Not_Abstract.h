#pragma once

class Set {
private:
	int* nums;
	void free();
	void copy(const Set& other);
	size_t cap;
	size_t actual_size;
	
public:
	Set(int* n, size_t c, size_t as);
	~Set();
	Set(const Set& other);
	Set& operator=(const Set& other);
	bool checkInterval(int start, int finish) const;

};