#include <iostream>
#include<fstream>
#include "Box.h"
using namespace std;
Box::Box(int l, int w, int h) :length(l), width(w), height(h) {}
int Box::Volume()
{
	return length * width * height;
}
void Box::print()
{
	cout << "length : " << length << endl;
	cout << "width : " << width << endl;
	cout << "height : " << height << endl;
}
void wwjt(Box b1, Box b2, Box b3)
{
	fstream myfile;
	myfile.open("out.txt", ios::out);
	myfile << b1.Volume() << endl;
	myfile << b2.Volume() << endl;
	myfile << b3.Volume() << endl;
	myfile.close();
}