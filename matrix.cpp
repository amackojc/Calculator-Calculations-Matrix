#include "matrix.h"
#include <iostream>

Matrix::Matrix(int r, int c) {

	this->rows = r;
	this->cols = c;
	std::vector<std::vector<double> > M(rows, std::vector<double>(cols));
	matrix = M;
}

Matrix::~Matrix() {}; 
int Matrix::get_rows() {

	return rows;
}

int Matrix::get_cols() {

	return cols;
}

void Matrix::set_matrix_value() {
	for (int i = 0; i < matrix.size(); i++) {
		for (int j = 0; j < matrix[i].size(); j++) {
			display_matrix();
			std::cout << "Input value in row: " << i + 1 << " and column: " << j + 1 << ": ";
			std::cin >> matrix[i][j];
			system("CLS");
		}
	}
}

void Matrix::display_matrix() {
	for (int i = 0; i < matrix.size(); i++) {
		std::cout << "|";
		for (int j = 0; j < matrix[i].size(); j++) {
			std::cout << matrix[i][j];
			if (j != matrix[i].size() - 1) {
			std::cout << " ";
			}
		}
		std::cout << "|\n";
	}
}

Matrix& Matrix::operator= (const Matrix& M) {
	rows = M.rows;
	cols = M.cols;

	std::vector<std::vector<double>> m(rows, std::vector<double>(cols));
	this->matrix = m;

	for (int i = 0; i < matrix.size(); i++) {
		for (int j = 0; j < matrix[i].size(); j++) {
			this-> matrix[i][j] = M.matrix[i][j];
		}
	}
	return *this;
}

Matrix Matrix::operator+ (const Matrix& M) {
	if (rows != M.rows && cols != M.cols) {
		std::cout << "Matrix sizes do not match. Write matrix again.";
		return *this;
	}

	Matrix new_matrix(rows, cols);
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			new_matrix.matrix[i][j] = matrix[i][j] + M.matrix[i][j];
		}
	}
	return new_matrix;
}

Matrix Matrix::operator- (const Matrix& M) {
	if (rows != M.rows && cols != M.cols) {
		std::cout << "Matrix sizes do not match. Write matrix again.";
		return *this;
	}

	Matrix new_matrix(rows, cols);
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			new_matrix.matrix[i][j] = matrix[i][j] - M.matrix[i][j];
		}
	}
	return new_matrix;
}

Matrix Matrix::operator* (const Matrix& M) {
	if (cols != M.rows) {
		std::cout << "Cannot multiply these matrices. Try again.";
		return *this;
	}

	Matrix new_matrix(rows, M.cols);

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < M.cols; j++) {
			for (int k = 0; k < M.rows; k++) {
				new_matrix.matrix[i][j] += matrix[i][k] * M.matrix[k][j];
			}
		}
	}
	return new_matrix;
}

std::ostream& operator<<(std::ostream& out, const Matrix& M) {

	for (int i = 0; i < M.matrix.size(); i++) {
		std::cout << "|";
		for (int j = 0; j < M.matrix[i].size(); j++) {
			out << M.matrix[i][j];
			if (j != M.matrix[i].size() - 1) {
				out << " ";
			}
		}
		out << "|\n";
	}
	return out;
}

void Matrix::matrix_info() {
	std::cout << "Welcome in MATRIX MODE!\n";
	std::cout << "Below you can chose what you want to do:\n\n";
	std::cout << "		1) Press '1' to input Matrix A\n";
	std::cout << "		2) Press '2' to input Matrix B\n";
	std::cout << "		3) Press '3' to add Martix A and B -> A + B\n";
	std::cout << "		4) Press '4' to subtract Martix A and B -> A - B\n";
	std::cout << "		5) Press '5' to multiply Martix A and B -> A * B\n";
	std::cout << "		6) Press '6' to back to simple calculator mode\n";
	std::cout << "		7) Press '7' to close the application\n";

}