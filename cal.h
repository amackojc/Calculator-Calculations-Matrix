#pragma once

#include <iostream>
#include <math.h>


class Calculator {
private:
	double x, y;

public:
	Calculator(double first_number = 0, double second_number = 0);
	~Calculator();

	double get_x();
	double get_y();
	void set_xy(double a = 0, double b = 0);

	double add();
	double sub();
	double multiply();
	double div();
	double power();

	void cal_info();
};