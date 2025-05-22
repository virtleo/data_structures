#pragma once
#include<iostream>
using namespace std;
class CalcVolume
{
protected:
	int a, b, h, r;
public:
	CalcVolume(int a, int b, int h,int r);
	virtual ~CalcVolume();
	virtual void calcuate_volume() = 0;
};
class Sphere : public CalcVolume
{
public:
	Sphere(int r);
	void calcuate_volume();
};
class Cylinder : public CalcVolume
{
public:
	Cylinder(int h, int r);
	void calcuate_volume();
};
class Cube : public CalcVolume
{
public:
	Cube(int a);
	void calcuate_volume();
};
class CContainer
{
private:
	CalcVolume* obj;
public:
	CContainer();
	void getVolume(CalcVolume* obj1);
};
