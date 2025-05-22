#pragma once
#include <iostream>
using namespace std;
typedef int datatype;
const int maxsize = 100;
struct elemtype
{
	int row , col;
	datatype value;
};
typedef struct matrix
{
	elemtype* elem;
	int rows, cols, count;
};
void init(matrix& m, int r, int c);
matrix bf(matrix& m);
matrix fast(matrix& m);
void print(matrix& m);
