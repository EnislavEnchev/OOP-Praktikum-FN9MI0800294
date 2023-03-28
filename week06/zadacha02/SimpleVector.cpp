#include "SimpleVector.h"
#include<fstream>

SimpleVector& SimpleVector::operator+(const SimpleVector& other) {
	SimpleVector temp;
	for (int i = 0; i < 10; i++) {
		temp.data[i] = this->data[i] + other.data[i];
	}
	return temp;
}
SimpleVector& SimpleVector::operator-(const SimpleVector& other) {
	SimpleVector temp;
	for (int i = 0; i < 10; i++) {
		temp.data[i] = this->data[i] - other.data[i];
	}
	return temp;
}
SimpleVector& SimpleVector::operator*(const int& other) {
	SimpleVector temp;
	for (int i = 0; i < 10; i++) {
		temp.data[i] = this->data[i] * other;
	}
	return temp;
}
SimpleVector& SimpleVector::operator/(const int& other) {
	SimpleVector temp;
	for (int i = 0; i < 10; i++) {
		temp.data[i] = this->data[i] / other;
	}
	return temp;
}
void SimpleVector::readText(std::ifstream& stream) {
	for (int i = 0; i < 10; i++) {
		stream >> data[i];
	}
	stream >> size;
	stream.ignore();
	
}

void SimpleVector::writeText(std::ofstream& stream) {
	stream << data << std::endl;
	stream << size << std::endl;
}

void SimpleVector::readBinary(std::ifstream& stream) {
	stream.read((char*)this, sizeof(SimpleVector));
}

void SimpleVector::writeBinary(std::ofstream& stream) {
	stream.write((char*)this, sizeof(SimpleVector));
}

