#include "complex.h"

void Creat(complex& C, float x, float y)
{
		C.real = x;
		C.imag = y;
}

complex Add(complex c1, complex c2)
{
	complex c3;
	c3.real = c1.real + c2.real;
	c3.imag = c1.imag + c2.imag;
	return c3;
}

void print(complex c)
{
	if (c.imag >= 0)
	{
		cout << c.real << " + " << c.imag << "i" << endl;
	}
	else
	{
		cout << c.real << " - " << abs(c.imag) << "i" << endl;
	}
	
}

