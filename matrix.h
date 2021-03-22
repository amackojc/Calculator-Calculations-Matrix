#pragma once
#include <iostream>
#include <vector>
#include <stdlib.h>

class Matrix {
private:
	int rows, cols;
	std::vector<std::vector<double>> matrix;
public:
	Matrix(int r = 0, int c = 0);
	~Matrix();

	friend std::ostream& operator<<(std::ostream& out, const Matrix& M);

	int get_rows();
	int get_cols();

	void set_matrix_value();
	void display_matrix();

	Matrix& operator= (const Matrix& M);
	Matrix operator+ (const Matrix& M);
	Matrix operator- (const Matrix& M);
	Matrix operator* (const Matrix& M);

	void matrix_info();
};