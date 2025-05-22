#include <iostream>
#include"head.h"
using namespace std;
CalcVolume::CalcVolume(int a=1, int b=1, int h=1, int r=1)
{
	this->a = a;
	this->b = b;
	this->h = h;
	this->r = r;
}
CalcVolume::~CalcVolume()
{
	cout << "Destructor called";
}
Sphere::Sphere(int r):CalcVolume(0,0,0,r){}
void Sphere::calcuate_volume()
{
	cout <<3.14*r*r*r << endl;
}
Cylinder::Cylinder(int h, int r):CalcVolume(0,0,h,r){}
void Cylinder::calcuate_volume()
{
	cout << 3.14*r*r*h << endl;
}
Cube::Cube(int a):CalcVolume(a,a,a,0){}
void Cube::calcuate_volume()
{
	cout << a*a*a << endl;
}
CContainer::CContainer()
{
	obj = NULL;
}
void CContainer::getVolume(CalcVolume* obj1)
{
	obj = obj1;
	obj->calcuate_volume();
}