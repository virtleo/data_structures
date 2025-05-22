#include <iostream>
#include"head.h"
using namespace std;
void Sphere::volume()
{
	cout<<3.14*r*r*r<<endl;
}
void Cylinder::volume()
{
	cout<<3.14*r*r*h<<endl;
}
void Cube::volume()
{
	cout<<a*a*a<<endl;
}
