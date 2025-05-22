#pragma once
#include<iostream>
using namespace std;
const int maxsize=100;
typedef struct matrix
{
	int row=0,col=0;
	int data[maxsize][maxsize];
};
struct specm
{
	int elem[maxsize];
	int pos = 0;
};
bool is_symmetrical(matrix& s,int r,int c);
specm compress(matrix& s,int r,int c);
matrix reduce(specm& s);
