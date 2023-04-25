#include<iostream>
template <typename T>
T myswap(T& a, T& b) {
	T temp;
	temp = a;
	a = b;
	b = temp;
	return 0;
}
int main() {
	int a = 10;
	int b = 20;
	myswap(a, b);
	std::cout << a << b;
}