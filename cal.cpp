#include "cal.h"
#include <iostream>

Calculator::Calculator(double first_number, double second_number) {

	this->x = first_number;
	this->y = second_number;
}

Calculator::~Calculator() {};

double Calculator::get_x() {
	return x;
}

double Calculator::get_y() {
	return y;
}

void Calculator::set_xy(double a, double b) {
	std::cout << "Enter value 'a': ";
	std::cin >> a;
	std::cout << "Enter value 'b': ";
	std::cin >> b;
	this->x = a;
	this->y = b;
}

double Calculator::add() {
	return x + y;
}

double Calculator::sub() {
	return x - y;
}

double Calculator::multiply() {
	return x * y;
}

double Calculator::div() {
	if (y == 0) {
		std::cout << "Division by zero!" << '\n';
		return INFINITY;
	}
	else {
		return x / y;
	}
}

double Calculator::power() {
	return pow(x, y);
}

void Calculator::cal_info() {
	std::cout << "Welcome in simple calculator mode!\n\n";
	std::cout << "Input your numbers and then select operation from the bottom.\n\n";
	std::cout << "		1) Press '1' to set values 'a' and 'b'\n";
	std::cout << "		2) Press '2' to add values -> a + b\n";
	std::cout << "		3) Press '3' to substract values -> a - b\n";
	std::cout << "		4) Press '4' to multiply values -> a * b\n";
	std::cout << "		5) Press '5' to divide values -> a / b\n";
	std::cout << "		6) Press '6' to power value -> a ^ b\n";
	std::cout << "		7) Press '7' to open 'MATRIX MODE'\n";
	std::cout << "		8) Press '8' close application\n";

}