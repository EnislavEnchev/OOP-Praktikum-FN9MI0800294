#include "Matrix.h"
#include<iostream>


void print(const Matrix& matrix) {
	for (int i = 0; i < matrix.m_rows; i++) {
		for (int j = 0; j < matrix.m_cols; j++) {
			std::cout << matrix.m_data[i][j] << " ";
		}
		std::cout << std::endl;
	}
}

void Matrix::destroy() {
	for (int i = 0; i < m_rows; i++) {
		delete[] m_data[i];
	}
	delete[] m_data;
}



void Matrix::copy(const Matrix& other) {
	destroy();
	this->m_rows = other.m_rows;
	this->m_cols = other.m_cols;
	m_data = new int* [m_rows];
	for (int i = 0; i < m_rows; i++) {
		m_data[i] = new int[m_cols];
	}
	for (int i = 0; i < m_rows; i++) {
		for (int j = 0; j < m_cols; j++) {
			this->m_data[i][j] = other.m_data[i][j];
		}
	}
}

Matrix::Matrix(int rows, int cols) {
	this->m_rows = rows;
	this->m_cols = cols;

	m_data = new int*[rows];
	for (int i = 0; i < rows; i++) {
		m_data[i] = new int[cols];
	}
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			this->m_data[i][j] = 0;
		}
	}
}

Matrix::~Matrix() {
	destroy();
}

Matrix::Matrix(const Matrix& other) {
	copy(other);
}
Matrix& Matrix::operator=(const Matrix& other) {
	if (this != &other) {
		destroy();
		copy(other);
	}
	return *this;
}

Matrix::Matrix(Matrix&& other) {
	m_data = other.m_data;
	m_rows = other.m_rows;
	m_cols = other.m_cols;

	other.m_rows = 0;
	other.m_cols = 0;
	other.m_data = nullptr;
}

Matrix& Matrix::operator=(Matrix&& other) {
	if (this != &other) {
		destroy();
		m_data = other.m_data;
		m_rows = other.m_rows;
		m_cols =other.m_cols;

		other.m_rows = 0;
		other.m_cols = 0;
		other.m_data = nullptr;
	}
	return *this;
}

int& Matrix::operator()(int row, int col) {
	return this->m_data[row][col];
}

Matrix Matrix::operator+(const Matrix& other) const {
	
	Matrix res(this->m_rows, this->m_cols);
	for (int i = 0; i < m_rows; i++) {
		for (int j = 0; j < m_cols; j++) {
			res.m_data[i][j] = this->m_data[i][j] + other.m_data[i][j];
		}
	}
	return res;
}

Matrix Matrix::operator-(const Matrix& other) const {
	Matrix res(m_rows, m_cols);
	for (int i = 0; i < m_rows; i++) {
		for (int j = 0; j < m_cols; j++) {
			res.m_data[i][j] = this->m_data[i][j] - other.m_data[i][j];
		}
	}
	return res;
}
Matrix Matrix::operator*(const Matrix& other) const {
	Matrix res(m_rows, m_cols);
	for (int i = 0; i < this->m_rows; i++) {
		for (int j = 0; j < other.m_cols; j++) {
			for (int k = 0; k < this->m_cols; k++) {
				res.m_data[i][j] += this->m_data[i][k] * other.m_data[k][j];
			}
		}
	}
	return res;
}

bool Matrix::operator==(const Matrix& other) const {
	for (int i = 0; i < m_rows; i++) {
		for (int j = 0; j < m_cols; j++) {
			if (this->m_data[i][j] != other.m_data[i][j]) {
				return false;
			}
		}
	}
	return true;
}

bool Matrix::operator!=(const Matrix& other) const {
	for (int i = 0; i < m_rows; i++) {
		for (int j = 0; j < m_cols; j++) {
			if (this->m_data[i][j] == other.m_data[i][j]) {
				return true;
			}
		}
	}
	return false;
}

Matrix transpose(const Matrix& matrix)
{
	Matrix result(matrix.m_rows, matrix.m_cols);
	for (int i = 0; i < matrix.m_rows; i++) {
		for (int j = 0; j < matrix.m_cols; j++) {
			result(j, i) = matrix.m_data[i][j];
		}
	}
	return result;
}
