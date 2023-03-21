#include<fstream>
#include<iostream>

int main() {
	std::ifstream if_stream;
	if_stream.open("zadacha2.cpp");
	
	
	const int size = 1024;
	char line[size];
	while (if_stream.getline(line, size)) {
		std::cout << line << std::endl;
	}

	if_stream.close();
}
