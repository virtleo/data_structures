#include <iostream>
#include"head.h"
using namespace std;
int main()
{
	/*CalcVolume* calcvolume;
	Sphere shpere(10);
	calcvolume = &shpere;
	calcvolume->calcuate_volume();
	Cylinder cylinder(10, 5);
	calcvolume = &cylinder;
	calcvolume->calcuate_volume();
	Cube cube(10);
	calcvolume = &cube;
	calcvolume->calcuate_volume();*/
	CContainer calc;
	Sphere shpere(10);
	Cylinder cylinder(10, 5);
	Cube cube(10);
	calc.getVolume(&shpere);
	calc.getVolume(&cylinder);
	calc.getVolume(&cube);
	return 0;
}
