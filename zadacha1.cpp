#include<fstream>
#include<iostream>
int main() {

	std::ifstream if_stream;
	if_stream.open("Doc.txt");

	if_stream.seekg(0, std::ios::end);
	long loc = if_stream.tellg();
	std::cout << loc;
}