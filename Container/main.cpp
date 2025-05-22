#include<iostream>
#include"head.h"
using namespace std;
int main()
{
	Container* container;
	Sphere sphere(10);
	container = &sphere;
	container->volume();
	Cylinder cylinder(10, 5);
	container = &cylinder;
	container->volume();
	Cube cube(10);
	container = &cube;
	container->volume();
	return 0;
}