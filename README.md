# Calculator with matrix mode
Simple calculator which has two modes of operation: simple calculations mode and Matrix calculations mode.  
At each stage of the program provided that user receives information how to use a calculator. 

## Prerequirements
+ C++ compiler with C++11 support installed (g++ or MinGW for Windows)
+ make software to open Makefile (can be installed on Windows using Chocolatey [LINK](https://chocolatey.org/install) )
## Supported Operations
#### Algebraic calucaltions mode:
+ Addition number A and B
+ Subtraction number B from A
+ Multiplication A and B
+ Division A by B
+ Number A to the power of B
#### Matrix mode:
+ Addition Martix A to Matrix B
+ Subtraction Matrix B from A
+ Multiplication Matrix A and B
## Installation
First, you have to clone project using Git Client:

`$ git clone --recursive https://github.com/amackojc/Calculator-Calculations-Matrix.git`

`cd Calculator-Calculations-Matrix`

Then you have to compile application in the following way;

`make` 

## Usage

To run application:

`make run`

To delete created files:

`make clean`
