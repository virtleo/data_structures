#pragma once
using namespace std;
#include<iostream>
typedef struct complex{
	float real;
	float imag;

};
void Creat(complex&, float, float);
complex Add(complex c1, complex c2);
void print(complex c);