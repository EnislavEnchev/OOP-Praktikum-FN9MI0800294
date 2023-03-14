#include "MyString.h"
#include <cstring>
#include <iostream>

void MyString::copy(const MyString& str)
{
	size = str.size;

	if (str.empty())
		arr = nullptr;
	else
	{
		arr = new char[size];
		for (int i = 0; i < size; i++)
			arr[i] = str.arr[i];
	}
}

void MyString::erase()
{
	delete[] arr;
}

MyString::MyString() : arr(nullptr), size(0)
{
		arr = nullptr;
		size = 0;
}

MyString::MyString(const char* str)
{
	size = strlen(str);
	if (size == 0)
		arr = nullptr;
	else
	{
		arr = new char[size];
		for (int i = 0; i < size; i++)
			arr[i] = str[i];
	}
}

MyString::MyString(const MyString& str)
{
	copy(str);
}

MyString& MyString::operator=(const MyString& str)
{
	if (this != &str)
	{
		erase();
		copy(str);
	}
	return *this;
}

MyString::~MyString()
{
	erase();
}

int MyString::length()
{
	return size;
}

char& MyString::at(unsigned indx)
{
	if (indx >= size)
		throw std::exception("Invalid index");

	return arr[indx];
}

int MyString::find(char target, unsigned s)
{
	for (int i = s; i < size; i++)
		if (arr[i] == target) {
			return i;
		}
	return -1;
}

bool MyString::empty() const
{
	return size == 0;
}

MyString MyString::substr(unsigned pos, unsigned n)
{
	if (pos >= size)
		throw std::exception("Invalid index");

	if (n == 0)
		return MyString(); 

	MyString ans;
	if (pos + n > size)
		ans.size = size - pos;
	else
		ans.size = n;

	ans.arr = new char[ans.size];

	for (int i = pos; i < pos + n && i < size; i++)
		ans.arr[i - pos] = arr[i];

	return ans;
}

void MyString::append(const MyString& str)
{
	
	if (empty())
	{
		
		*this = str;
		return;
	}
	MyString temp; 
	temp.size = size + str.size;
	temp.arr = new char[temp.size];

	for (int i = 0; i < size; i++)
		temp.arr[i] = arr[i]; 

	for (int i = 0; i < str.size; i++)
		temp.arr[i + size] = str.arr[i]; 

	*this = temp; 
}

void MyString::print()
{
	for (int i = 0; i < size; i++)
		std::cout << arr[i];
}