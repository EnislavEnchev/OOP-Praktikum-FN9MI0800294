#include"Set.h"
#include<iostream>

int main() {
	Set<int> some;
	Set<int> neshto;
	some.add(10);
	some.add(20);
	some.add(30);
	some.add(40);
	neshto.add(1);
	neshto.add(2);
	neshto.add(3);
	neshto.add(4);
	some + neshto;
	Set<int> test;
	for (size_t i = 0; i < 100; i++)
	{
		test.add(i);
	}
	test.print(); 
	neshto.print();
}