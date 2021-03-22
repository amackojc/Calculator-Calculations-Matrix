#include "cal.h"
#include "matrix.h"
#include <iostream>

int main() {

    int count = 0;
    int count_matrix = 0;
    int mode;
    int rows, cols;
    char oper;
	Matrix A; 
    Matrix C;
    Matrix X;
	Calculator B;

    std::cout << "Hello. This is calculator which has 2 modes:\n\n";
    std::cout << "1) Simple calculations like:\n";
    std::cout << "      a) add two values\n";
    std::cout << "      b) subtract two values\n";
    std::cout << "      c) multiply two values\n";
    std::cout << "      d) divide two values\n";
    std::cout << "      e) power of value\n\n";
    std::cout << "2) Matrix calculations like:\n";
    std::cout << "      a) add two matrices\n";
    std::cout << "      b) subtract two matrices\n";
    std::cout << "      c) multiply two matrices\n\n";

    std::cout << "Select which mode you want to use:\n\n";
    std::cout << "Press '1' to use simple calculator and click Enter\n\n";
    std::cout << "Press '2' to use matrix calculator and click Enter\n\n";
    std::cin >> mode; 
    system("clear");
    
    while (1) {
        if (mode == 1) {
            if (count == 0) {
                B.cal_info();
            }
            std::cout << "\n    " << "Select operation: ";
            std::cin >> oper;
            if (oper == '1') {
                system("clear");
                B.set_xy();
                system("clear");
                B.cal_info();
                std::cout << "\n    " << "You set 'a' value as: " << B.get_x() << " and 'b' value as: " << B.get_y() << '\n';
                count++;
            }
            else if (oper == '2') {
                system("clear");
                B.cal_info();
                std::cout << "\n    "<< B.get_x() << " + " << B.get_y() << " = " << B.add() << '\n';
                count++;
            }
            else if (oper == '3') {
                system("clear");
                B.cal_info();
                std::cout << "\n    " << B.get_x() << " - " << B.get_y() << " = " << B.sub() << '\n';
                count++;

            }
            else if (oper == '4') {
                system("clear");
                B.cal_info();
                std::cout << "\n    " << B.get_x() << " * " << B.get_y() << " = " << B.multiply() << '\n';
                count++;

            }
            else if (oper == '5') {
                system("clear");
                B.cal_info();
                std::cout << "\n    " << B.get_x() << " / " << B.get_y() << " = " << B.div() << '\n';
                count++;

            }
            else if (oper == '6') {
                system("clear");
                B.cal_info();
                std::cout << "\n    " << B.get_x() << " ^ " << B.get_y() << " = " << B.power() << '\n';
                count++;

            }
            else if (oper == '7') {
                system("clear");
                count_matrix = 0;
                mode = 2;
            }
            else if (oper == '8') {
                system("clear");
                std::cout << "You closed the application. See you again!\n";
                return 0;
            }
            else {
                system("clear");
                std::cout << "Invalid operation. Try again.\n";
                
            }
        }
        else if (mode == 2) {
            if (count_matrix == 0) {
                A.matrix_info();
            }
            std::cout << "\n    " << "Select operation: ";
            std::cin >> oper;
            if (oper == '1') {
                count_matrix++;
                system("clear");
                std::cout << "Please, input matrix A dimensions.\n";
                std::cout << "Rows: ";
                std::cin >> rows;
                std::cout << "Columns: ";
                std::cin >> cols;
                Matrix a(rows, cols);
                system("clear");
                a.set_matrix_value();
                A.matrix_info();
                std::cout << "\nThis is Matrix A:\n\n";
                a.display_matrix();
                A = a;
            }
            else if (oper == '2') {
                count_matrix++;
                system("clear");
                std::cout << "Please, input matrix B dimensions.\n";
                std::cout << "Rows: ";
                std::cin >> rows;
                std::cout << "Columns: ";
                std::cin >> cols;
                Matrix c(rows, cols);
                system("clear");
                c.set_matrix_value();
                A.matrix_info();
                std::cout << "This is Matrix B:\n\n";
                c.display_matrix();
                C = c;
            }
            else if (oper == '3') {
                count_matrix++;
                system("clear");
                A.matrix_info();
                std::cout << "\nMatrix A + Matrix B:\n\n";
                std::cout << A << " + \n" << C << " = \n";
                std::cout << A + C;
            }
            else if (oper == '4') {
                count_matrix++;
                system("clear");
                A.matrix_info();
                std::cout << "\nMatrix A - Matrix B:\n\n";
                std::cout << A << " - \n" << C << " = \n";
                std::cout << A - C;
            }
            else if (oper == '5') {
                count_matrix++;
                system("clear");
                A.matrix_info();
                std::cout << "\nMatrix A * Matrix B:\n\n";
                std::cout << A << " * \n" << C << " = \n";

                std::cout << A * C;
            }
            else if (oper == '6') {
                count_matrix++;
                system("clear");
                count = 0;
                mode = 1;
            }
            else if (oper == '7') {
                system("clear");
                std::cout << "You closed the application. See you again!\n";
                return 0;
            }
        }
        else {
            std::cout << "Invalid value. Try again";
            std::cin >> mode;
        }
    }

	return 0; 
}